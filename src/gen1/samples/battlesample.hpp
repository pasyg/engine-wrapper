#pragma once

#include "teamsample.hpp"
#include "battle_rby.hpp"

namespace engine
{
namespace RBY
{
    static constexpr pkmn_gen1_battle testBattle = battle::make_battle(miedon, miedon, 25);
} // namespace RBY
} // namespace engine