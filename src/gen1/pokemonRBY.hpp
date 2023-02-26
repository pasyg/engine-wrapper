#pragma once

#include "src/meta_header.hpp"
#include "move.hpp"
#include "species.hpp"
#include "types.hpp"

namespace engine
{
    template<>
    struct Pokemon<Gen::RBY>
    {
        constexpr Pokemon(){};
        constexpr Pokemon(RBY::Species p_species, std::array<RBY::Move, 4> p_moves, int p_level=100)
        {
            species   = p_species;
            level     = p_level;

            std::array<uint8_t, 2> tmp = RBY::get_type(p_species);
            types     = tmp[0];
            types << 4;
            types     = types & tmp[1];

            move_0_id = p_moves[0];
            move_0_pp = RBY::move_pp(p_moves[0]);
            move_1_id = p_moves[1];
            move_1_pp = RBY::move_pp(p_moves[1]);
            move_2_id = p_moves[2];
            move_2_pp = RBY::move_pp(p_moves[2]);
            move_3_id = p_moves[3];
            move_3_pp = RBY::move_pp(p_moves[3]);

            stats_hp  = calc_hp();
            stats_atk = calc_stats();
        }

        // hp is calculated differently than the other stats
        constexpr uint16_t calc_hp()
        {
            // TODO
        }

        constexpr uint16_t calc_stats()
        {
            // TODO
        }
        // Pokemon stats
        std::uint16_t stats_hp    = 0;
        std::uint16_t stats_atk   = 0;
        std::uint16_t stats_def   = 0;
        std::uint16_t stats_spec  = 0;
        std::uint16_t stats_spe   = 0;
        // Moves
        std::uint8_t move_0_id    = 0;
        std::uint8_t move_0_pp    = 0;
        std::uint8_t move_1_id    = 0;
        std::uint8_t move_1_pp    = 0;
        std::uint8_t move_2_id    = 0;
        std::uint8_t move_2_pp    = 0;
        std::uint8_t move_3_id    = 0;
        std::uint8_t move_3_pp    = 0;
        // Game relevant
        std::uint16_t current_hp  = 0;
        std::uint8_t status       = 0;
        // misc
        std::uint8_t species      = 0;
        std::uint8_t types        = 0;
        std::uint8_t level        = 0;
    };
} // namespace engine