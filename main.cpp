#include <assert.h>
#include <errno.h>
#include <stdlib.h>
#include <stdio.h>

#include <pkmn.h>

#include <iostream>
#include <iomanip>

#include "battleRBY.hpp"

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

   for(int i = 0; i < 1; ++i)
   {
      // We could use C's srand() and rand() function but for point of example
      // we will demonstrate how to use the PSRNG that is exposed by libpkmn
      pkmn_psrng random;
      pkmn_psrng_init(&random, 2000);
      // Preallocate a small buffer for the choice options throughout the battle
      pkmn_choice options[PKMN_OPTIONS_SIZE];

      pkmn_gen1_battle battle;
      std::copy(engine::RBY::testBattle.begin(), engine::RBY::testBattle.end(), battle.bytes);

      // "DEBUG"
      // int asdf = 0;
      // for(auto&& n : battle.bytes)
      // {
      //    if(asdf%16==0){ std::cout << "\n";}
      //    std::cout << std::hex << (int)n << ", ";
      //    asdf++;
      // }
      // std::cout << std::endl;

      // Preallocate a buffer for trace logs - PKMN_LOGS_SIZE is guaranteed to be large enough for a
      // single update. This will only be written to if -Dtrace is enabled - NULL can be used to turn
      // all of the logging into no-ops
      size_t size = PKMN_LOG_SIZE;
      uint8_t buf[size];

      pkmn_result result;
      // Pedantically these *should* be pkmn_choice_init(PKMN_CHOICE_PASS, 0), but libpkmn
      // commits to always ensuring the pass choice is 0 so we can simplify things here
      pkmn_choice c1 = 0, c2 = 0;

      // We're also taking advantage of the fact that the PKMN_RESULT_NONE is guaranteed
      // to be 0, so we don't actually need to check "!= PKMN_RESULT_NONE"
      while (!pkmn_result_type(result = pkmn_gen1_battle_update(&battle, c1, c2, buf, size))) {
         c1 = choose(&battle, &random, PKMN_PLAYER_P1, pkmn_result_p1(result), options);
         c2 = choose(&battle, &random, PKMN_PLAYER_P2, pkmn_result_p2(result), options);
      }
      // The only error that can occur is if we didn't provide a large enough buffer, but
      // PKMN_MAX_LOGS is guaranteed to be large enough so errors here are impossible. Note
      // however that this is tracking a different kind of error than PKMN_RESULT_ERROR
      assert(!pkmn_error(result));

      // The battle is written in native endianness so we need to do a bit-hack to
      // figure out the system's endianess before we can read the 16-bit turn data
      volatile uint32_t endian = 0x01234567;
      uint16_t turns = (*((uint8_t *)(&endian))) == 0x67
         ? battle.bytes[368] | battle.bytes[369] << 8
         : battle.bytes[368] << 8 | battle.bytes[369];

      // The result is from the perspective of P1
      switch (pkmn_result_type(result)) {
         case PKMN_RESULT_WIN: {
            printf("Battle won by Player A after %d turns\n", turns);
            break;
         }
         case PKMN_RESULT_LOSE: {
            printf("Battle won by Player B after %d turns\n", turns);
            break;
         }
         case PKMN_RESULT_TIE: {
            printf("Battle ended in a tie after %d turns\n", turns);
            break;
         }
         case PKMN_RESULT_ERROR: {
            printf("Battle encountered an error after %d turns\n", turns);
            break;
         }
         default: assert(false);
      }
   }
   return 0;
}