// Copyright pasyg.
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE or copy at
// http://www.boost.org/LICENSE_1_0.txt)

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