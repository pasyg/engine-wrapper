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
            std::array<std::uint8_t, 184> team_arr{ 0 };

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
            // 0 initialized
            // order              177 - 182
            std::copy_n(order.begin(), order.size(), team_arr.begin() + 176);
            // last selected move 182 - 183
            team_arr[182] = 0;
            // last used move     183 - 184
            team_arr[183] = 0;

            return team_arr;
        }

        // 0 - 144
        std::array<Pokemon<Gen::RBY>, 6> member;
        // 177 - 182
        std::array<std::uint8_t, 6> order = { 1, 2, 3, 4, 5, 6 };
    };
} // namespace engine