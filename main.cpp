#include "engine-wrapper.hpp"

int main(int argc, char **argv)
{
   // full scope resolution for sake of illustration
   // using namespace engine::RBY;

   auto battle = engine::RBY::testBattle;
   
   pkmn_result result = battle.play_battle();

   engine::RBY::print_result(battle.battle_, result);

   return 0;
}