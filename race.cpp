#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <ctime>
#include "race.h"

void guerrier::statsGuerrier(){
  vie = 400;
  mana = 40;
  degat = 60;
  endurance = 350;
  lvl = 1;
  std::string armure("armure_de_base_guerrier");
  defArmure = 50;
  defMagie = defArmure + mana / 2;//70
  std::string Arme("armure_de_base_guerrier");
  degArme = 60;
  degPhc = degArme + degat / 2;//90
  degMagie = degPhc + mana / 4;//100
}

void elfe::statsefle(){
  vie = 300;
  mana = 80;
  degat = 30;
  endurance = 200;
  lvl = 1;
  std::string armure("armure_de_base_elfe");
  defArmure = 40;
  defMagie = defArmure + mana / 2;//80
  std::string Arme("arme_de_base_elfe");
  degArme = 65;
  degPhc = degArme + degat / 2;//80
  degMagie = degPhc + mana / 2;//120
}

void nain::statsnain(){
  vie = 450;
  mana = 20;
  degat = 70;
  endurance = 450;
  lvl = 1;
  std::string armure("armure_de_base_nain");
  defArmure = 60;
  std::string Arme("arme_de_base_nain");
  degArme = 60;
  degPhc = degArme + degat / 2;//95
}

void mage::statsMage(){

}
