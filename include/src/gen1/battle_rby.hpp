// Copyright pasyg.
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#pragma once

#include <cassert>
#include <iostream>

#include "pkmn.h"

#include "team_rby.hpp"

namespace engine
{
namespace RBY
{
    template<typename Iter>
    struct ArraySlice
    {
        Iter first;
        Iter last;
        constexpr Iter begin()
        {
            return first;
        }
        constexpr Iter end()
        {
            return last;
        }
    };
    template<Gen gen>
    struct Battle;

    using rby_battle = std::array<std::uint8_t, 384>;
    using rby_team   = std::array<std::uint8_t, 184>;
    using rby_mon    = std::array<std::uint8_t, 24>;
    using rby_active = std::array<std::uint8_t, 32>;

    template<>
    struct Battle<Gen::RBY>
    {
        // the battle gamestate
        pkmn_gen1_battle battle_{};
        // RNG
        std::uint64_t seed = 0;
        pkmn_psrng random = {};
        // the result of the concluded game
        pkmn_result result = PKMN_RESULT_NONE;
        // choices of each player
        pkmn_choice c1 = 0, c2 = 0;
        // max log size
        static const size_t size = 180;
        // trace buffer
        std::array<std::uint8_t, size> buf{ };
        // choice options
        std::array<pkmn_choice, 9> options{ };

        Battle() = delete;
        constexpr Battle(Team<Gen::RBY> team1, Team<Gen::RBY> team2, std::uint64_t seed)
        : seed(seed)
        {
            rby_team   team_1_arr = team1.to_array();
            rby_team   team_2_arr = team2.to_array();

            std::copy_n(team_1_arr.begin(), team_1_arr.size(), std::begin(battle_.bytes));
            std::copy_n(team_2_arr.begin(), team_2_arr.size(), std::begin(battle_.bytes) + 184);

            // turn
            battle_.bytes[369] = 0;
            battle_.bytes[370] = 0;
            // last_damage
            battle_.bytes[371] = 0;
            battle_.bytes[372] = 0;
            // last_selected_indexes
            battle_.bytes[373] = 0;
            battle_.bytes[374] = 0;
            battle_.bytes[375] = 0;

            for(int i = 0; i < 8; ++i)
            {
                battle_.bytes[376 + i] = seed >> 8 * i;
            }
        }

        void init() { pkmn_psrng_init(&random, seed); }
        // TODO
        pkmn_choice choose(
            pkmn_gen1_battle *battle,
            pkmn_psrng *random,
            pkmn_player player,
            pkmn_choice_kind request,
            pkmn_choice options[])
        {
            uint8_t n = pkmn_gen1_battle_choices(battle, player, request, options, PKMN_OPTIONS_SIZE);
            // Technically due to Generation I's Transform + Mirror Move/Metronome PP error if the
            // battle contains Pokémon with a combination of Transform, Mirror Move/Metronome, and Disable
            // its possible that there are no available choices (softlock), though this is impossible here
            // given that our example battle involves none of these moves
            assert(n > 0);
            // pkmn_gen1_battle_choices determines what the possible options are - the simplest way to
            // choose an option here is to just use the PSRNG to pick one at random
            return options[(uint64_t)pkmn_psrng_next(random) * n / 0x100000000];
        }

        pkmn_choice choose_p1()
        {
            return choose(&battle_, &random, PKMN_PLAYER_P1, pkmn_result_p1(result), options.begin()); 
        }

        pkmn_choice choose_p2()
        {
            return choose(&battle_, &random, PKMN_PLAYER_P2, pkmn_result_p2(result), options.begin()); 
        }

        pkmn_result play_turn()
        {
            return pkmn_gen1_battle_update(&battle_, c1, c2, buf.begin(), size); 
        }

        pkmn_result play_battle()
        {
            init();
            while(!pkmn_result_type(result))
            {
                c1 = choose_p1();
                c2 = choose_p2();
                result = play_turn();
            }

            return result;
        }
    };

    using Slice = ArraySlice<std::uint8_t*>;

    inline constexpr Slice team1(pkmn_gen1_battle& state)
    {
        Slice team;
        team.first = state.bytes;
        team.last  = state.bytes + 184;

        return team;
    }

    inline constexpr Slice active1(pkmn_gen1_battle& state)
    {
        Slice active;
        active.first = state.bytes + 144;
        active.last  = state.bytes + 176;

        return active;
    }

    inline constexpr Slice team2(pkmn_gen1_battle& state)
    {
        Slice team;
        team.first = state.bytes + 184;
        team.last  = state.bytes + 368;

        return team;
    }

    inline constexpr Slice active2(pkmn_gen1_battle& state)
    {
        Slice active;
        active.first = state.bytes + 328;
        active.last  = state.bytes + 360;

        return active;
    }
    
    inline constexpr std::uint16_t turn(pkmn_gen1_battle& state)
    {
        return *(reinterpret_cast<std::uint16_t*>(state.bytes + 368));
    }

    inline void print_result(pkmn_gen1_battle& battle, pkmn_result result)
    {
        // The battle is written in native endianness so we need to do a bit-hack to
        // figure out the system's endianess before we can read the 16-bit turn data
        volatile uint32_t endian = 0x01234567;
        uint16_t turns = (*((uint8_t *)(&endian))) == 0x67
            ? battle.bytes[368] | battle.bytes[369] << 8
            : battle.bytes[368] << 8 | battle.bytes[369];

        //The result is from the perspective of P1
        switch (pkmn_result_type(result)) {
            case PKMN_RESULT_WIN: {
                std::cout << "Battle won by Player A after " << turns << " turns\n";
                break;
            }
            case PKMN_RESULT_LOSE: {
                std::cout << "Battle won by Player B after " << turns << " turns\n";
                break;
            }
            case PKMN_RESULT_TIE: {
                std::cout << "Battle ended in a tie after " << turns << " turns\n";
                break;
            }
            case PKMN_RESULT_ERROR: {
                std::cout << "Battle encountered an error after " << turns << " turns\n";
                break;
            }
            default: assert(false);
        }
    }
} // namespace RBY
} // namespace engine