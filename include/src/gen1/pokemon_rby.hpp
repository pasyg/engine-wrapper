// Copyright pasyg.
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#pragma once

#include "base_stats.hpp"
#include "move.hpp"
#include "species.hpp"
#include "types.hpp"

namespace engine
{
namespace RBY
{
    template<Gen gen>
    struct Pokemon;
        
    inline constexpr std::uint16_t calc_other_stat(Pokemon<Gen::RBY>& poke, Stat stat_);
    inline constexpr std::uint16_t calc_hp(Pokemon<Gen::RBY>& poke);

    template<>
    struct Pokemon<Gen::RBY>
    {
        // Array that stores all the information of one Pokemon
        std::array<std::uint8_t, 24> bytes{ };

        constexpr Pokemon(RBY::Species p_species, std::array<RBY::Move, 4> p_moves, int p_level=100)
        {
            bytes[20]   = 0; // status
            bytes[21]   = p_species;
            bytes[23]   = p_level;
            
            base = get_base_stats(bytes[21]);

            bytes[22] = RBY::get_type(p_species)[0] | (RBY::get_type(p_species)[1] << 4);

            bytes[10] = p_moves[0];
            bytes[11] = RBY::move_pp(p_moves[0]);
            bytes[12] = p_moves[1];
            bytes[13] = RBY::move_pp(p_moves[1]);
            bytes[14] = p_moves[2];
            bytes[15] = RBY::move_pp(p_moves[2]);
            bytes[16] = p_moves[3];
            bytes[17] = RBY::move_pp(p_moves[3]);

            calc_stats();
        }

        // hp is calculated differently than the other stats
        constexpr void calc_stats()
        {
            bytes[0]  = calc_hp(*this);
            bytes[1]  = calc_hp(*this) >> 8;
            bytes[18] = bytes[0];
            bytes[19] = bytes[1];
            bytes[2]  = calc_other_stat(*this, ATK);
            bytes[3]  = calc_other_stat(*this, ATK) >> 8;
            bytes[4]  = calc_other_stat(*this, DEF);
            bytes[5]  = calc_other_stat(*this, DEF) >> 8;
            bytes[6]  = calc_other_stat(*this, SPE);
            bytes[7]  = calc_other_stat(*this, SPE) >> 8;
            bytes[8]  = calc_other_stat(*this, SPC);
            bytes[9]  = calc_other_stat(*this, SPC) >> 8;
        }

        constexpr auto begin()
        {
            return bytes.begin();
        }

        constexpr auto end()
        {
            return bytes.end();
        }

        constexpr auto size()
        {
            return bytes.size();
        }

        // for computation
        std::array<std::uint16_t, 6> base{ };
        // Assuming max EV and IV for now
        std::array<int, 6> EV{ 63, 63, 63, 63, 63, 63 };
        std::array<int, 6> IV{ 15, 15, 15, 15, 15, 15 };
    };

    inline constexpr std::uint16_t calc_hp(Pokemon<Gen::RBY>& poke)
    {
        std::uint16_t hp = poke.base[0] + poke.IV[0];
        hp *= 2;
        hp += poke.EV[0];
        // multiply by level
        hp *= poke.bytes[23];
        hp /= 100;
        hp += poke.bytes[23] + 10;

        return hp;
    }

    inline constexpr std::uint16_t calc_other_stat(Pokemon<Gen::RBY>& poke, Stat stat_)
    {
        std::uint16_t stat = poke.base[stat_] + poke.IV[stat_];
        stat *= 2;
        stat += poke.EV[stat_];
        // multiply by level
        stat *= poke.bytes[23];
        stat /= 100;
        stat += 5;

        return stat;
    }
} // namespace RBY
} // namespace engine