#pragma once

#include "pokemon_rby.hpp"

namespace engine
{
namespace RBY
{
    // Alakazam
    // Chansey
    static constexpr Pokemon chansey = Pokemon<Gen::RBY>(Chansey,   {IceBeam, SeismicToss, ThunderWave, SoftBoiled});
    // Cloyster
    // Exeggutor
    static constexpr Pokemon exegg   = Pokemon<Gen::RBY>(Exeggutor, {SleepPowder, Psychic, Explosion, DoubleEdge});
    // Gengar
    // Jolteon
    // Jynx
    // Rhydon
    static constexpr Pokemon rhydon  = Pokemon<Gen::RBY>(Rhydon,    {Earthquake, RockSlide, BodySlam, Substitute});
    // Slowbro
    // Snorlax
    static constexpr Pokemon snorlax = Pokemon<Gen::RBY>(Snorlax,   {BodySlam, Earthquake, HyperBeam, SelfDestruct});
    // Starmie
    static constexpr Pokemon starmie = Pokemon<Gen::RBY>(Starmie,   {Surf, Blizzard, ThunderWave, Recover});
    // Tauros
    static constexpr Pokemon tauros  = Pokemon<Gen::RBY>(Tauros,    {BodySlam, Earthquake, Blizzard, HyperBeam});
    // Zapdos
} // namespace RBY
} // namespace engine