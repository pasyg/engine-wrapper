// Copyright pasyg.
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#pragma once

#include <array>
#include <cstdint>

#include "species.hpp"

namespace engine
{
namespace RBY
{
    enum Type : uint8_t
    {
        Normal,
        Fighting,
        Flying,
        Poison,
        Ground,
        Rock,
        Bug,
        Ghost,
        Fire,
        Water,
        Grass,
        Electric,
        Psychic_,   // conflict with move
        Ice,
        Dragon,
    };
    
    inline constexpr std::array<uint8_t, 2> get_type(Species species)
    {
        switch(species)
        {
            case Bulbasaur:    return {Grass, Poison};
            case Ivysaur:      return {Grass, Poison};
            case Venusaur:     return {Grass, Poison};
            case Charmander:   return {Fire, Fire};
            case Charmeleon:   return {Fire, Fire};
            case Charizard:    return {Fire, Flying};
            case Squirtle:     return {Water, Water};
            case Wartortle:    return {Water, Water};
            case Blastoise:    return {Water, Water};
            case Caterpie:     return {Bug, Bug};
            case Metapod:      return {Bug, Bug};
            case Butterfree:   return {Bug, Flying};
            case Weedle:       return {Bug, Poison};
            case Kakuna:       return {Bug, Poison};
            case Beedrill:     return {Bug, Poison};
            case Pidgey:       return {Normal, Flying};
            case Pidgeotto:    return {Normal, Flying};
            case Pidgeot:      return {Normal, Flying};
            case Rattata:      return {Normal, Normal};
            case Raticate:     return {Normal, Normal};
            case Spearow:      return {Normal, Flying};
            case Fearow:       return {Normal, Flying};
            case Ekans:        return {Poison, Poison};
            case Arbok:        return {Poison, Poison};
            case Pikachu:      return {Electric, Electric};
            case Raichu:       return {Electric, Electric};
            case Sandshrew:    return {Ground, Ground};
            case Sandslash:    return {Ground, Ground};
            case Nidoran_F:    return {Poison, Poison};
            case Nidorina:     return {Poison, Poison};
            case Nidoqueen:    return {Poison, Ground};
            case Nidoran_M:    return {Poison, Poison};
            case Nidorino:     return {Poison, Poison};
            case Nidoking:     return {Poison, Ground};
            case Clefairy:     return {Normal, Normal};
            case Clefable:     return {Normal, Normal};
            case Vulpix:       return {Fire, Fire};
            case Ninetales:    return {Fire, Fire};
            case Jigglypuff:   return {Normal, Normal};
            case Wigglytuff:   return {Normal, Normal};
            case Zubat:        return {Poison, Flying};
            case Golbat:       return {Poison, Flying};
            case Oddish:       return {Grass, Poison};
            case Gloom:        return {Grass, Poison};
            case Vileplume:    return {Grass, Poison};
            case Paras:        return {Bug, Grass};
            case Parasect:     return {Bug, Grass};
            case Venonat:      return {Bug, Poison};
            case Venomoth:     return {Bug, Poison};
            case Diglett:      return {Ground, Ground};
            case Dugtrio:      return {Ground, Ground};
            case Meowth:       return {Normal, Normal};
            case Persian:      return {Normal, Normal};
            case Psyduck:      return {Water, Water};
            case Golduck:      return {Water, Water};
            case Mankey:       return {Fighting, Fighting};
            case Primeape:     return {Fighting, Fighting};
            case Growlithe:    return {Fire, Fire};
            case Arcanine:     return {Fire, Fire};
            case Poliwag:      return {Water, Water};
            case Poliwhirl:    return {Water, Water};
            case Poliwrath:    return {Water, Fighting};
            case Abra:         return {Psychic_, Psychic_};
            case Kadabra:      return {Psychic_, Psychic_};
            case Alakazam:     return {Psychic_, Psychic_};
            case Machop:       return {Fighting, Fighting};
            case Machoke:      return {Fighting, Fighting};
            case Machamp:      return {Fighting, Fighting};
            case Bellsprout:   return {Grass, Poison};
            case Weepinbell:   return {Grass, Poison};
            case Victreebel:   return {Grass, Poison};
            case Tentacool:    return {Water, Poison};
            case Tentacruel:   return {Water, Poison};
            case Geodude:      return {Rock, Ground};
            case Graveler:     return {Rock, Ground};
            case Golem:        return {Rock, Ground};
            case Ponyta:       return {Fire, Fire};
            case Rapidash:     return {Fire, Fire};
            case Slowpoke:     return {Water, Psychic_};
            case Slowbro:      return {Water, Psychic_};
            case Magnemite:    return {Electric, Electric};
            case Magneton:     return {Electric, Electric};
            case Farfetchd:    return {Normal, Flying};
            case Doduo:        return {Normal, Flying};
            case Dodrio:       return {Normal, Flying};
            case Seel:         return {Water, Water};
            case Dewgong:      return {Water, Ice};
            case Grimer:       return {Poison, Poison};
            case Muk:          return {Poison, Poison};
            case Shellder:     return {Water, Water};
            case Cloyster:     return {Water, Ice};
            case Gastly:       return {Ghost, Poison};
            case Haunter:      return {Ghost, Poison};
            case Gengar:       return {Ghost, Poison};
            case Onix:         return {Rock, Ground};
            case Drowzee:      return {Psychic_, Psychic_};
            case Hypno:        return {Psychic_, Psychic_};
            case Krabby:       return {Water, Water};
            case Kingler:      return {Water, Water};
            case Voltorb:      return {Electric, Electric};
            case Electrode:    return {Electric, Electric};
            case Exeggcute:    return {Grass, Psychic_};
            case Exeggutor:    return {Grass, Psychic_};
            case Cubone:       return {Ground, Ground};
            case Marowak:      return {Ground, Ground};
            case Hitmonlee:    return {Fighting, Fighting};
            case Hitmonchan:   return {Fighting, Fighting};
            case Lickitung:    return {Normal, Normal};
            case Koffing:      return {Poison, Poison};
            case Weezing:      return {Poison, Poison};
            case Rhyhorn:      return {Ground, Rock};
            case Rhydon:       return {Ground, Rock};
            case Chansey:      return {Normal, Normal};
            case Tangela:      return {Grass, Grass};
            case Kangaskhan:   return {Normal, Normal};
            case Horsea:       return {Water, Water};
            case Seadra:       return {Water, Water};
            case Goldeen:      return {Water, Water};
            case Seaking:      return {Water, Water};
            case Staryu:       return {Water, Water};
            case Starmie:      return {Water, Psychic_};
            case Mr_Mime:      return {Psychic_, Psychic_};
            case Scyther:      return {Bug, Flying};
            case Jynx:         return {Ice, Psychic_};
            case Electabuzz:   return {Electric, Electric};
            case Magmar:       return {Fire, Fire};
            case Pinsir:       return {Bug, Bug};
            case Tauros:       return {Normal, Normal};
            case Magikarp:     return {Water, Water};
            case Gyarados:     return {Water, Flying};
            case Lapras:       return {Water, Ice};
            case Ditto:        return {Normal, Normal};
            case Eevee:        return {Normal, Normal};
            case Vaporeon:     return {Water, Water};
            case Jolteon:      return {Electric, Electric};
            case Flareon:      return {Fire, Fire};
            case Porygon:      return {Normal, Normal};
            case Omanyte:      return {Rock, Water};
            case Omastar:      return {Rock, Water};
            case Kabuto:       return {Rock, Water};
            case Kabutops:     return {Rock, Water};
            case Aerodactyl:   return {Rock, Flying};
            case Snorlax:      return {Normal, Normal};
            case Articuno:     return {Ice, Flying};
            case Zapdos:       return {Electric, Flying};
            case Moltres:      return {Fire, Flying};
            case Dratini:      return {Dragon, Dragon};
            case Dragonair:    return {Dragon, Dragon};
            case Dragonite:    return {Dragon, Flying};
            case Mewtwo:       return {Psychic_, Psychic_};
            case Mew:          return {Psychic_, Psychic_};
        }
    }
} // namespace RBY
} // namespace engine