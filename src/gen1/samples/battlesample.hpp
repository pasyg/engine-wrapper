#pragma once

#include "teamsample.hpp"
#include "battleRBY.hpp"

namespace engine
{
namespace RBY
{
    static constexpr battle::rby_battle testBattle = battle::make_battle(miedon, miedon, 25);
} // namespace RBY
} // namespace engine