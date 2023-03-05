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
    // Alakazam
    static constexpr Pokemon alakazam = rby_poke(Alakazam,  {SeismicToss, Psychic, Recover, ThunderWave}); 
    // Chansey
    static constexpr Pokemon chansey  = rby_poke(Chansey,   {IceBeam, SeismicToss, ThunderWave, SoftBoiled});
    // Cloyster
    static constexpr Pokemon cloyster = rby_poke(Cloyster,  {Clamp, Blizzard, Explosion, Rest});
    // Exeggutor
    static constexpr Pokemon exegg    = rby_poke(Exeggutor, {SleepPowder, Psychic, Explosion, DoubleEdge});
    // Gengar
    static constexpr Pokemon gengar   = rby_poke(Gengar,    {Hypnosis, Thunderbolt, NightShade, Explosion});
    // Jolteon
    static constexpr Pokemon jolteon  = rby_poke(Jolteon,   {Thunderbolt, ThunderWave, DoubleKick, Rest});
    // Jynx
    static constexpr Pokemon jynx     = rby_poke(Jynx,      {LovelyKiss, Psychic, IceBeam, Rest});
    // Rhydon
    static constexpr Pokemon rhydon   = rby_poke(Rhydon,    {Earthquake, RockSlide, BodySlam, Substitute});
    // Slowbro
    static constexpr Pokemon slowbro  = rby_poke(Slowbro,   {Amnesia, Surf, Reflect, Rest});
    // Snorlax
    static constexpr Pokemon snorlax  = rby_poke(Snorlax,   {BodySlam, Earthquake, HyperBeam, SelfDestruct});
    // Starmie
    static constexpr Pokemon starmie  = rby_poke(Starmie,   {Surf, Blizzard, ThunderWave, Recover});
    // Tauros
    static constexpr Pokemon tauros   = rby_poke(Tauros,    {BodySlam, Earthquake, Blizzard, HyperBeam});
    // Zapdos
    static constexpr Pokemon zapdos   = rby_poke(Zapdos,    {Thunderbolt, DrillPeck, Agility, ThunderWave});
} // namespace RBY
} // namespace engine