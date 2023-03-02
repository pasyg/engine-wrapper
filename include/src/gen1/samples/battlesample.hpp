#pragma once

#include "teamsample.hpp"
#include "battle_rby.hpp"

/*
* Sample compiletime Battles to play around with
*
*/

namespace engine
{
namespace RBY
{
    static constexpr Battle<Gen::RBY> testBattle = Battle<Gen::RBY>(miedon, miedon, 236);
} // namespace RBY
} // namespace engine