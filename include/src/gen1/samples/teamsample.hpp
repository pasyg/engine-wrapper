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