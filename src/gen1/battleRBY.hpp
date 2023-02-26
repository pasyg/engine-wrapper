#pragma once

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

        for(int i = 0; i < 8; ++i)
        {
            battle_[383 - i] = seed >> 4 * i; 
        }
        return battle_;
    }
} // namespace battle
} // namespace engine