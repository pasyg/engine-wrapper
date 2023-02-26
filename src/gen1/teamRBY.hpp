#pragma once

#include "pokemonRBY.hpp"

namespace engine
{
    template<>
    struct Team<Gen::RBY>
    {
        using rby_team = std::array<std::uint8_t, 184>;
        
        constexpr Team(){};
        constexpr Team(std::array<Pokemon<Gen::RBY>, 6> pmember) : 
            member(pmember){};

        // 0 - 144
        std::array<Pokemon<Gen::RBY>, 6> member{};
        // active pokemon
        // 0 - 9
        std::uint16_t stats_hp = 0;
        std::uint16_t stats_atk = 0;
        std::uint16_t stats_def = 0;
        std::uint16_t stats_spec = 0;
        std::uint16_t stats_spe = 0;
        // 10 - 11
        std::uint8_t species = 0;
        std::uint8_t types = 0;
        // 12 - 14
        std::uint8_t boost_atk_def = 0;
        std::uint8_t boost_spe_spd = 0;
        std::uint8_t boost_acc_eva = 0;
        // 15 - 16
        std::uint8_t zero_padding = 0;
        // 
        std::uint64_t volatiles = 0;
        // 
        std::uint8_t move_0_id = 0;
        std::uint8_t move_0_pp = 0;
        std::uint8_t move_1_id = 0;
        std::uint8_t move_1_pp = 0;
        std::uint8_t move_2_id = 0;
        std::uint8_t move_2_pp = 0;
        std::uint8_t move_3_id = 0;
        std::uint8_t move_3_pp = 0;
        // end active pokemon
        // 
        std::array<std::uint8_t, 6> order = { 0, 1, 2, 3, 4, 5 };
    };
} // namespace engine