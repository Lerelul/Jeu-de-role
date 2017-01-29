#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <ctime>
#include "race.h"

void guerrier::statsGuerrier(){
  vieGuerrier = 400;
  manaGuerrier = 40;
  degatGuerrier = 60;
  enduranceGuerrier = 350;
  lvlGuerrier = 1;
  std::string armure("armure_de_base_guerrier");
  defArmureGuerrier = 50;
  defMagieGuerrier = defArmureGuerrier + manaGuerrier / 2;//70
  std::string Arme("armure_de_base_guerrier");
  degArmeGuerrier = 60;
  degPhcGuerrier = degArmeGuerrier + degatGuerrier / 2;//90
  degMagieGuerrier = degPhcGuerrier + manaGuerrier / 4;//100
}

void elfe::statsefle(){
  vieElfe = 300;
  manaElfe = 80;
  degatElfe = 30;
  enduranceElfe = 200;
  lvlElfe = 1;
  std::string armure("armure_de_base_elfe");
  defArmureElfe = 40;
  defMagieElfe = defArmureElfe + manaElfe / 2;//80
  std::string Arme("arme_de_base_elfe");
  degArmeElfe = 65;
  degPhcElfe = degArmeElfe + degatElfe / 2;//80
  degMagieElfe = degPhcElfe + manaElfe / 2;//120
}

void nain::statsnain(){
  manaNain = 20;
  degatNain = 70;
  enduranceNain = 450;
  lvlNain= 1;
  std::string armure("armure_de_base_nain");
  defArmureNain = 60;
  std::string Arme("arme_de_base_nain");
  degArmeNain = 60;
  degPhcNain = degArmeNain + degatNain / 2;//95
}

void mage::statsMage(){
  vieMage = 300;
  manaMage = 100;
  enduranceMage = 150;
  lvlMage = 1;
  std::string armure("armure_de_base_mage");
  defArmureMage = 40;
  defMagieMage = defArmureMage + manaMage / 2;//90
  std::string Arme("armure_de_base_mage");
  degArmeMage = 65;
  degPhcMage = degArmeMage;
  degMagieMage = degPhcMage + manaMage / 2;//120
}
