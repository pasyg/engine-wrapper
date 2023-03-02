#include "engine-wrapper.hpp"

int main(int argc, char **argv)
{
   for(int i = 0; i < 1000000; ++i)
   {
      using namespace engine::RBY;

      auto battle = testBattle;

      pkmn_result result = battle.play_battle();

      //print_result(battle.battle_, result);
   }
   return 0;
}