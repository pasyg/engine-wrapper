// Copyright pasyg.
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#pragma once

#include <array>

#include "species.hpp"

namespace engine
{
    // skip special defense, due to reusability reasons.
    enum Stat : uint8_t
    {
        HP   = 0,
        ATK  = 1,
        DEF  = 2,
        SPC  = 3,
        SPE  = 4,
    };

    constexpr std::array<std::uint16_t, 6> get_base_stats(std::uint8_t species)
    {
        switch (species)
        {
            case RBY::Species::Bulbasaur:
                return {45, 49, 49, 65, 45};
            case RBY::Species::Ivysaur:
                return {60, 62, 63, 80, 60};
            case RBY::Species::Venusaur:
                return {80, 82, 83, 100, 80};
            case RBY::Species::Charmander:
                return {39, 52, 43, 50, 65};
            case RBY::Species::Charmeleon:
                return {58, 64, 58, 65, 80};
            case RBY::Species::Charizard:
                return {78, 84, 78, 85, 100};
            case RBY::Species::Squirtle:
                return {44, 48, 65, 50, 43};
            case RBY::Species::Wartortle:
                return {59, 63, 80, 65, 58};
            case RBY::Species::Blastoise:
                return {79, 83, 100, 85, 78};
            case RBY::Species::Caterpie:
                return {45, 30, 35, 20, 45};
            case RBY::Species::Metapod:
                return {50, 20, 55, 25, 30};
            case RBY::Species::Butterfree:
                return {60, 45, 50, 80, 70};
            case RBY::Species::Weedle:
                return {40, 35, 30, 20, 50};
            case RBY::Species::Kakuna:
                return {45, 25, 50, 25, 35};
            case RBY::Species::Beedrill:
                return {65, 80, 40, 45, 75};
            case RBY::Species::Pidgey:
                return {40, 45, 40, 35, 56};
            case RBY::Species::Pidgeotto:
                return {63, 60, 55, 50, 71};
            case RBY::Species::Pidgeot:
                return {83, 80, 75, 70, 91};
            case RBY::Species::Rattata:
                return {30, 56, 35, 25, 72};
            case RBY::Species::Raticate:
                return {55, 81, 60, 50, 97};
            case RBY::Species::Spearow:
                return {40, 60, 30, 31, 70};
            case RBY::Species::Fearow:
                return {65, 90, 65, 61, 100};
            case RBY::Species::Ekans:
                return {35, 60, 44, 40, 55};
            case RBY::Species::Arbok:
                return {60, 85, 69, 65, 80};
            case RBY::Species::Pikachu:
                return {35, 55, 30, 50, 90};
            case RBY::Species::Raichu:
                return {60, 90, 55, 90, 100};
            case RBY::Species::Sandshrew:
                return {50, 75, 85, 30, 40};
            case RBY::Species::Sandslash:
                return {75, 100, 110, 55, 65};
            case RBY::Species::Nidoran_F:
                return {55, 47, 52, 40, 41};
            case RBY::Species::Nidorina:
                return {70, 62, 67, 55, 56};
            case RBY::Species::Nidoqueen:
                return {90, 82, 87, 75, 76};
            case RBY::Species::Nidoran_M:
                return {46, 57, 40, 40, 50};
            case RBY::Species::Nidorino:
                return {61, 72, 57, 55, 65};
            case RBY::Species::Nidoking:
                return {81, 92, 77, 75, 85};
            case RBY::Species::Clefairy:
                return {70, 45, 48, 60, 35};
            case RBY::Species::Clefable:
                return {95, 70, 73, 85, 60};
            case RBY::Species::Vulpix:
                return {38, 41, 40, 65, 65};
            case RBY::Species::Ninetales:
                return {73, 76, 75, 100, 100};
            case RBY::Species::Jigglypuff:
                return {115, 45, 20, 25, 20};
            case RBY::Species::Wigglytuff:
                return {140, 70, 45, 50, 45};
            case RBY::Species::Zubat:
                return {40, 45, 35, 40, 55};
            case RBY::Species::Golbat:
                return {75, 80, 70, 75, 90};
            case RBY::Species::Oddish:
                return {45, 50, 55, 75, 30};
            case RBY::Species::Gloom:
                return {60, 65, 70, 85, 40};
            case RBY::Species::Vileplume:
                return {75, 80, 85, 100, 50};
            case RBY::Species::Paras:
                return {35, 70, 55, 55, 25};
            case RBY::Species::Parasect:
                return {60, 95, 80, 80, 30};
            case RBY::Species::Venonat:
                return {60, 55, 50, 40, 45};
            case RBY::Species::Venomoth:
                return {70, 65, 60, 90, 90};
            case RBY::Species::Diglett:
                return {10, 55, 25, 45, 95};
            case RBY::Species::Dugtrio:
                return {35, 80, 50, 70, 120};
            case RBY::Species::Meowth:
                return {40, 45, 35, 40, 90};
            case RBY::Species::Persian:
                return {65, 70, 60, 65, 115};
            case RBY::Species::Psyduck:
                return {50, 52, 48, 50, 55};
            case RBY::Species::Golduck:
                return {80, 82, 78, 80, 85};
            case RBY::Species::Mankey:
                return {40, 80, 35, 35, 70};
            case RBY::Species::Primeape:
                return {65, 105, 60, 60, 95};
            case RBY::Species::Growlithe:
                return {55, 70, 45, 50, 60};
            case RBY::Species::Arcanine:
                return {90, 110, 80, 80, 95};
            case RBY::Species::Poliwag:
                return {40, 50, 40, 40, 90};
            case RBY::Species::Poliwhirl:
                return {65, 65, 65, 50, 90};
            case RBY::Species::Poliwrath:
                return {90, 85, 95, 70, 70};
            case RBY::Species::Abra:
                return {25, 20, 15, 105, 90};
            case RBY::Species::Kadabra:
                return {40, 35, 30, 120, 105};
            case RBY::Species::Alakazam:
                return {55, 50, 45, 135, 120};
            case RBY::Species::Machop:
                return {70, 80, 50, 35, 35};
            case RBY::Species::Machoke:
                return {80, 100, 70, 50, 45};
            case RBY::Species::Machamp:
                return {90, 130, 80, 65, 55};
            case RBY::Species::Bellsprout:
                return {50, 75, 35, 70, 40};
            case RBY::Species::Weepinbell:
                return {65, 90, 50, 85, 55};
            case RBY::Species::Victreebel:
                return {80, 105, 65, 100, 70};
            case RBY::Species::Tentacool:
                return {40, 40, 35, 100, 70};
            case RBY::Species::Tentacruel:
                return {80, 70, 65, 120, 100};
            case RBY::Species::Geodude:
                return {40, 80, 100, 30, 20};
            case RBY::Species::Graveler:
                return {55, 95, 115, 45, 35};
            case RBY::Species::Golem:
                return {80, 110, 130, 55, 45};
            case RBY::Species::Ponyta:
                return {50, 85, 55, 65, 90};
            case RBY::Species::Rapidash:
                return {65, 100, 70, 80, 105};
            case RBY::Species::Slowpoke:
                return {90, 65, 65, 40, 15};
            case RBY::Species::Slowbro:
                return {95, 75, 110, 80, 30};
            case RBY::Species::Magnemite:
                return {25, 35, 70, 95, 45};
            case RBY::Species::Magneton:
                return {50, 60, 95, 120, 70};
            case RBY::Species::Farfetchd:
                return {52, 65, 55, 58, 60};
            case RBY::Species::Doduo:
                return {35, 85, 45, 35, 75};
            case RBY::Species::Dodrio:
                return {60, 110, 70, 60, 100};
            case RBY::Species::Seel:
                return {65, 45, 55, 70, 45};
            case RBY::Species::Dewgong:
                return {90, 70, 80, 95, 70};
            case RBY::Species::Grimer:
                return {80, 80, 50, 40, 25};
            case RBY::Species::Muk:
                return {105, 105, 75, 65, 50};
            case RBY::Species::Shellder:
                return {30, 65, 100, 45, 40};
            case RBY::Species::Cloyster:
                return {50, 95, 180, 85, 70};
            case RBY::Species::Gastly:
                return {30, 35, 30, 100, 80};
            case RBY::Species::Haunter:
                return {45, 50, 45, 115, 95};
            case RBY::Species::Gengar:
                return {60, 65, 60, 130, 110};
            case RBY::Species::Onix:
                return {35, 45, 160, 30, 70};
            case RBY::Species::Drowzee:
                return {60, 48, 45, 90, 42};
            case RBY::Species::Hypno:
                return {85, 73, 70, 115, 67};
            case RBY::Species::Krabby:
                return {30, 105, 90, 25, 50};
            case RBY::Species::Kingler:
                return {55, 130, 115, 50, 75};
            case RBY::Species::Voltorb:
                return {40, 30, 50, 55, 100};
            case RBY::Species::Electrode:
                return {60, 50, 70, 80, 140};
            case RBY::Species::Exeggcute:
                return {60, 40, 80, 60, 40};
            case RBY::Species::Exeggutor:
                return {95, 95, 85, 125, 55};
            case RBY::Species::Cubone:
                return {50, 50, 95, 40, 35};
            case RBY::Species::Marowak:
                return {60, 80, 110, 50, 45};
            case RBY::Species::Hitmonlee:
                return {50, 120, 53, 35, 87};
            case RBY::Species::Hitmonchan:
                return {50, 105, 79, 35, 76};
            case RBY::Species::Lickitung:
                return {90, 55, 75, 60, 30};
            case RBY::Species::Koffing:
                return {40, 65, 95, 60, 35};
            case RBY::Species::Weezing:
                return {65, 90, 120, 85, 60};
            case RBY::Species::Rhyhorn:
                return {80, 85, 95, 30, 25};
            case RBY::Species::Rhydon:
                return {105, 130, 120, 45, 40};
            case RBY::Species::Chansey:
                return {250, 5, 5, 105, 50};
            case RBY::Species::Tangela:
                return {65, 55, 115, 100, 60};
            case RBY::Species::Kangaskhan:
                return {105, 95, 80, 40, 90};
            case RBY::Species::Horsea:
                return {30, 40, 70, 70, 60};
            case RBY::Species::Seadra:
                return {55, 65, 95, 95, 85};
            case RBY::Species::Goldeen:
                return {45, 67, 60, 50, 63};
            case RBY::Species::Seaking:
                return {80, 92, 65, 80, 68};
            case RBY::Species::Staryu:
                return {30, 45, 55, 70, 85};
            case RBY::Species::Starmie:
                return {60, 75, 85, 100, 115};
            case RBY::Species::Mr_Mime:
                return {40, 45, 65, 100, 90};
            case RBY::Species::Scyther:
                return {70, 110, 80, 55, 105};
            case RBY::Species::Jynx:
                return {65, 50, 35, 95, 95};
            case RBY::Species::Electabuzz:
                return {65, 83, 57, 85, 105};
            case RBY::Species::Magmar:
                return {65, 95, 57, 85, 93};
            case RBY::Species::Pinsir:
                return {65, 125, 100, 55, 85};
            case RBY::Species::Tauros:
                return {75, 100, 95, 70, 110};
            case RBY::Species::Magikarp:
                return {20, 10, 55, 20, 80};
            case RBY::Species::Gyarados:
                return {95, 125, 79, 100, 81};
            case RBY::Species::Lapras:
                return {130, 85, 80, 95, 60};
            case RBY::Species::Ditto:
                return {48, 48, 48, 48, 48};
            case RBY::Species::Eevee:
                return {55, 55, 50, 65, 55};
            case RBY::Species::Vaporeon:
                return {130, 65, 60, 110, 65};
            case RBY::Species::Jolteon:
                return {65, 65, 60, 110, 130};
            case RBY::Species::Flareon:
                return {65, 130, 60, 110, 65};
            case RBY::Species::Porygon:
                return {65, 60, 70, 75, 40};
            case RBY::Species::Omanyte:
                return {35, 40, 100, 90, 35};
            case RBY::Species::Omastar:
                return {70, 60, 125, 115, 55};
            case RBY::Species::Kabuto:
                return {30, 80, 90, 45, 55};
            case RBY::Species::Kabutops:
                return {60, 115, 105, 70, 80};
            case RBY::Species::Aerodactyl:
                return {80, 105, 65, 60, 130};
            case RBY::Species::Snorlax:
                return {160, 110, 65, 65, 30};
            case RBY::Species::Articuno:
                return {90, 85, 100, 125, 85};
            case RBY::Species::Zapdos:
                return {90, 90, 85, 125, 100};
            case RBY::Species::Moltres:
                return {90, 100, 90, 125, 90};
            case RBY::Species::Dratini:
                return {41, 64, 45, 50, 50};
            case RBY::Species::Dragonair:
                return {61, 84, 65, 70, 70};
            case RBY::Species::Dragonite:
                return {91, 134, 95, 100, 80};
            case RBY::Species::Mewtwo:
                return {106, 110, 90, 154, 130};
            case RBY::Species::Mew:
                return {100, 100, 100, 100, 100};
        }
    }
} // namespace engine