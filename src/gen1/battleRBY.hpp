#pragma once

#include "battle.hpp"
#include "teamRBY.hpp"

namespace engine
{
namespace battle
{
    using rby_battle = std::array<std::uint8_t, 384>;

    template<>
    struct Battle<Gen::RBY>
    {
        rby_battle battle_;
    };

    inline constexpr rby_battle make_battle(Team<Gen::RBY> team1, Team<Gen::RBY> team2, std::uint64_t seed)
    {
        rby_battle battle_{ 0 };
        std::array<std::uint8_t, 184> team_1_arr = team1.to_array();
        std::array<std::uint8_t, 184> team_2_arr = team2.to_array();
        
        std::copy_n(team_1_arr.begin(), team_1_arr.size(), battle_.begin());
        std::copy_n(team_2_arr.begin(), team_2_arr.size(), battle_.begin() + 184);

        for(int i = 0; i < 8; ++i)
        {
            battle_[376 + i] = seed >> 8 * i; 
        }

        return battle_;
    }
} // namespace battle
} // namespace engine