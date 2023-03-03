// Copyright pasyg.
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#pragma once

#include "pokesample.hpp"
#include "team_rby.hpp"

/*
* Sample compiletime Team objects to pass into battles
*
*/

namespace engine
{
namespace RBY
{
    static constexpr Team miedon = Team<Gen::RBY>({starmie, chansey, snorlax, tauros, exegg, rhydon});
} // namespace RBY
} // namespace engine