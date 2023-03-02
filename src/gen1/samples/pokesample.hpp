#pragma once

#include "pokemon_rby.hpp"

namespace engine
{
namespace RBY
{
    static constexpr Pokemon starmie = Pokemon<Gen::RBY>(Starmie,   {Surf, Blizzard, ThunderWave, Recover});
    static constexpr Pokemon chansey = Pokemon<Gen::RBY>(Chansey,   {IceBeam, SeismicToss, ThunderWave, SoftBoiled});
    static constexpr Pokemon snorlax = Pokemon<Gen::RBY>(Snorlax,   {BodySlam, Earthquake, HyperBeam, SelfDestruct});
    static constexpr Pokemon tauros  = Pokemon<Gen::RBY>(Tauros,    {BodySlam, Earthquake, Blizzard, HyperBeam});
    static constexpr Pokemon rhydon  = Pokemon<Gen::RBY>(Rhydon,    {Earthquake, RockSlide, BodySlam, Substitute});
    static constexpr Pokemon exegg   = Pokemon<Gen::RBY>(Exeggutor, {SleepPowder, Psychic, Explosion, DoubleEdge});
} // namespace RBY
} // namespace engine