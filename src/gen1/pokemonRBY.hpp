#pragma once

#include "pokemon.hpp"
#include "move.hpp"
#include "species.hpp"
#include "types.hpp"

namespace engine
{
    template<>
    struct Pokemon<Gen::RBY>
    {
        constexpr Pokemon(RBY::Species p_species, std::array<RBY::Move, 4> p_moves, int p_level=100)
        {
            species   = p_species;
            level     = p_level;

            std::array<uint8_t, 2> tmp = RBY::get_type(p_species);
            types     = tmp[0];
            types << 4;
            types     = types & tmp[1];

            move_0_id = p_moves[0];
            move_0_pp = RBY::move_pp(p_moves[0]);
            move_1_id = p_moves[1];
            move_1_pp = RBY::move_pp(p_moves[1]);
            move_2_id = p_moves[2];
            move_2_pp = RBY::move_pp(p_moves[2]);
            move_3_id = p_moves[3];
            move_3_pp = RBY::move_pp(p_moves[3]);

            calc_stats();
        }

        // hp is calculated differently than the other stats
        constexpr void calc_stats()
        {
            // TODO
            stats_hp   = 100;
            stats_atk  = 100;
            stats_def  = 100;
            stats_spec = 100;
            stats_spe  = 100;
        }

        constexpr std::array<std::uint8_t, 24> to_array()
        {
            std::array<std::uint8_t, 24> poke_arr;

            poke_arr[0]  = stats_hp;
            poke_arr[1]  = stats_hp >> 8;
            poke_arr[2]  = stats_atk;
            poke_arr[3]  = stats_atk >> 8;
            poke_arr[4]  = stats_def;
            poke_arr[5]  = stats_def >> 8;
            poke_arr[6]  = stats_spe;
            poke_arr[7]  = stats_spe >> 8;
            poke_arr[8]  = stats_spec;
            poke_arr[9]  = stats_spec >> 8;
            poke_arr[10] = move_0_id;
            poke_arr[11] = move_0_pp;
            poke_arr[12] = move_1_id;
            poke_arr[13] = move_1_pp;
            poke_arr[14] = move_2_id;
            poke_arr[15] = move_2_pp;
            poke_arr[16] = move_3_id;
            poke_arr[17] = move_3_pp;
            poke_arr[18] = poke_arr[0];
            poke_arr[19] = poke_arr[1];
            poke_arr[20] = 0;
            poke_arr[21] = species;
            poke_arr[22] = types;
            poke_arr[23] = level;

            return poke_arr;
        }
        // Assuming max EV and IV for now
        std::array<int, 5> EV{ 63 };
        std::array<int, 5> IV{ 15 };
        // Pokemon stats
        std::uint16_t stats_hp    = 0;
        std::uint16_t stats_atk   = 0;
        std::uint16_t stats_def   = 0;
        std::uint16_t stats_spec  = 0;
        std::uint16_t stats_spe   = 0;
        // Moves
        std::uint8_t move_0_id    = 0;
        std::uint8_t move_0_pp    = 0;
        std::uint8_t move_1_id    = 0;
        std::uint8_t move_1_pp    = 0;
        std::uint8_t move_2_id    = 0;
        std::uint8_t move_2_pp    = 0;
        std::uint8_t move_3_id    = 0;
        std::uint8_t move_3_pp    = 0;
        // Game relevant
        std::uint16_t current_hp  = 0;
        std::uint8_t status       = 0;
        // misc
        std::uint8_t species      = 0;
        std::uint8_t types        = 0;
        std::uint8_t level        = 0;
    };
} // namespace engine