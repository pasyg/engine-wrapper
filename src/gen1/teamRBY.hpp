#pragma once

#include <algorithm>

#include "team.hpp"
#include "pokemonRBY.hpp"

namespace engine
{
    template<>
    struct Team<Gen::RBY>
    {
        using rby_team = std::array<std::uint8_t, 184>;
        
        constexpr Team(std::array<Pokemon<Gen::RBY>, 6> pmember) : 
            member(pmember){};

        constexpr std::array<std::uint8_t, 184> to_array()
        {
            std::array<std::uint8_t, 184> team_arr;

            using pokearr = std::array<std::uint8_t, 24>;

            pokearr poke1 = member[0].to_array();
            pokearr poke2 = member[1].to_array();
            pokearr poke3 = member[2].to_array();
            pokearr poke4 = member[3].to_array();
            pokearr poke5 = member[4].to_array();
            pokearr poke6 = member[5].to_array();

            // 6 team members     0 - 144
            std::copy_n(poke1.begin(), poke1.size(), team_arr.begin());
            std::copy_n(poke2.begin(), poke2.size(), team_arr.begin() + 24);
            std::copy_n(poke3.begin(), poke3.size(), team_arr.begin() + 48);
            std::copy_n(poke4.begin(), poke4.size(), team_arr.begin() + 72);
            std::copy_n(poke5.begin(), poke5.size(), team_arr.begin() + 96);
            std::copy_n(poke6.begin(), poke6.size(), team_arr.begin() + 120);

            // the active pokemon 145 - 176
            std::copy_n(active_poke_array().begin(), active_poke_array().size(), team_arr.begin() + 144);
            // order              177 - 182
            std::copy_n(order.begin(), order.size(), team_arr.begin() + 176);
            // last selected move 182 - 183
            team_arr[182] = 0;
            // last used move     183 - 184
            team_arr[183] = 0;

            return team_arr;
        }

        constexpr std::array<std::uint8_t, 32> active_poke_array()
        {
            std::array<std::uint8_t, 32> active_poke_arr{ 0 };

            active_poke_arr[0]  = member[0].stats_hp;
            active_poke_arr[1]  = member[0].stats_hp >> 8;
            active_poke_arr[2]  = member[0].stats_atk;
            active_poke_arr[3]  = member[0].stats_atk >> 8;
            active_poke_arr[4]  = member[0].stats_def;
            active_poke_arr[5]  = member[0].stats_def >> 8;
            active_poke_arr[6]  = member[0].stats_spe;
            active_poke_arr[7]  = member[0].stats_spe >> 8;
            active_poke_arr[8]  = member[0].stats_spec;
            active_poke_arr[9]  = member[0].stats_spec >> 8;
            active_poke_arr[10] = member[0].species;
            active_poke_arr[11] = member[0].types;
            // 12 - 23 boosts and volatiles are 0
            active_poke_arr[24] = member[0].move_0_id;
            active_poke_arr[25] = member[0].move_0_pp;
            active_poke_arr[26] = member[0].move_1_id;
            active_poke_arr[27] = member[0].move_1_pp;
            active_poke_arr[28] = member[0].move_2_id;
            active_poke_arr[29] = member[0].move_2_pp;
            active_poke_arr[30] = member[0].move_3_id;
            active_poke_arr[31] = member[0].move_3_pp;

            return active_poke_arr;
        }

        // 0 - 144
        std::array<Pokemon<Gen::RBY>, 6> member;
        // 177 - 182
        std::array<std::uint8_t, 6> order = { 1, 2, 3, 4, 5, 6 };
    };
} // namespace engine