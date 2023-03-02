#include <assert.h>
#include <errno.h>
#include <stdlib.h>
#include <stdio.h>

#include <pkmn.h>

#include <iostream>
#include <iomanip>

#include "battle_rby.hpp"

#include "battlesample.hpp"

pkmn_choice choose(
   pkmn_gen1_battle *battle,
   pkmn_psrng *random,
   pkmn_player player,
   pkmn_choice_kind request,
   pkmn_choice options[])
{
   uint8_t n = pkmn_gen1_battle_choices(battle, player, request, options, PKMN_OPTIONS_SIZE);
   // Technically due to Generation I's Transform + Mirror Move/Metronome PP error if the
   // battle contains Pokémon with a combination of Transform, Mirror Move/Metronome, and Disable
   // its possible that there are no available choices (softlock), though this is impossible here
   // given that our example battle involves none of these moves
   assert(n > 0);
   // pkmn_gen1_battle_choices determines what the possible options are - the simplest way to
   // choose an option here is to just use the PSRNG to pick one at random
   return options[(uint64_t)pkmn_psrng_next(random) * n / 0x100000000];
}

int main(int argc, char **argv)
{

   for(int i = 0; i < 1000000; ++i)
   {
      using namespace engine::RBY;

      auto battle = testBattle;

      pkmn_result result = battle.play_battle();

      // The battle is written in native endianness so we need to do a bit-hack to
      // figure out the system's endianess before we can read the 16-bit turn data
      volatile uint32_t endian = 0x01234567;
      uint16_t turns = (*((uint8_t *)(&endian))) == 0x67
         ? battle.battle_.bytes[368] | battle.battle_.bytes[369] << 8
         : battle.battle_.bytes[368] << 8 | battle.battle_.bytes[369];

      // The result is from the perspective of P1
      // switch (pkmn_result_type(result)) {
      //    case PKMN_RESULT_WIN: {
      //       printf("Battle won by Player A after %d turns\n", turns);
      //       break;
      //    }
      //    case PKMN_RESULT_LOSE: {
      //       printf("Battle won by Player B after %d turns\n", turns);
      //       break;
      //    }
      //    case PKMN_RESULT_TIE: {
      //       printf("Battle ended in a tie after %d turns\n", turns);
      //       break;
      //    }
      //    case PKMN_RESULT_ERROR: {
      //       printf("Battle encountered an error after %d turns\n", turns);
      //       break;
      //    }
      //    default: assert(false);
      // }
   }
   return 0;
}