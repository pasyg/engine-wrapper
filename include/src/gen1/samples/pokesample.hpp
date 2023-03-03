// Copyright pasyg.
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#pragma once

#include "pokemon_rby.hpp"

/*
* Sample compiletime Pokemon objects to pass into teams
*
*/

namespace engine
{
namespace RBY
{
    using rby_set = Pokemon<Gen::RBY>;
    // Alakazam
    static constexpr Pokemon alakazam = rby_set(Alakazam,  {SeismicToss, Psychic, Recover, ThunderWave}); 
    // Chansey
    static constexpr Pokemon chansey  = rby_set(Chansey,   {IceBeam, SeismicToss, ThunderWave, SoftBoiled});
    // Cloyster
    static constexpr Pokemon cloyster = rby_set(Cloyster,  {Clamp, Blizzard, Explosion, Rest});
    // Exeggutor
    static constexpr Pokemon exegg    = rby_set(Exeggutor, {SleepPowder, Psychic, Explosion, DoubleEdge});
    // Gengar
    static constexpr Pokemon gengar   = rby_set(Gengar,    {Hypnosis, Thunderbolt, NightShade, Explosion});
    // Jolteon
    static constexpr Pokemon jolteon  = rby_set(Jolteon,   {Thunderbolt, ThunderWave, DoubleKick, Rest});
    // Jynx
    static constexpr Pokemon jynx     = rby_set(Jynx,      {LovelyKiss, Psychic, IceBeam, Rest});
    // Rhydon
    static constexpr Pokemon rhydon   = rby_set(Rhydon,    {Earthquake, RockSlide, BodySlam, Substitute});
    // Slowbro
    static constexpr Pokemon slowbro  = rby_set(Slowbro,   {Amnesia, Surf, Reflect, Rest});
    // Snorlax
    static constexpr Pokemon snorlax  = rby_set(Snorlax,   {BodySlam, Earthquake, HyperBeam, SelfDestruct});
    // Starmie
    static constexpr Pokemon starmie  = rby_set(Starmie,   {Surf, Blizzard, ThunderWave, Recover});
    // Tauros
    static constexpr Pokemon tauros   = rby_set(Tauros,    {BodySlam, Earthquake, Blizzard, HyperBeam});
    // Zapdos
    static constexpr Pokemon zapdos   = rby_set(Zapdos,    {Thunderbolt, DrillPeck, Agility, ThunderWave});
} // namespace RBY
} // namespace engine