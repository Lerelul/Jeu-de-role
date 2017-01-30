#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <ctime>
#include "class.h"

void Perso::choisirRace(){
  int typeRace;
  std::cout << "(1) Guerrier" << '\n';
  std::cout << "(2) Elfe" << '\n';
  std::cout << "(3) Nain" << '\n';
  std::cout << "(4) Mage" << '\n';
  std::cin >> typeRace;

  if (typeRace == 1) {
    std::cout << "vous etes un guerrier" << '\n';
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
    std::cout << vie << '\n';
  }
  else if (typeRace == 2) {
    std::cout << "vous etes un elfe" << '\n';
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
    std::cout << vie << '\n';
  }
  else if(typeRace == 3){
    std::cout << "vous etes un nain" << '\n';
    vie = 450;
    mana = 20;
    degat = 70;
    endurance = 450;
    lvl = 1;
    std::string armure("armure_de_base_nain");
    defArmure = 60;
    std::string Arme("arme_de_base_nain");
    degArme = 60;
    degPhc = degArme + degat / 2;//95s
    std::cout << vie << '\n';
  }
  else if(typeRace == 3){
    std::cout << "vous etes un mage" << '\n';
    vie = 300;
    mana = 100;
    endurance = 150;
    lvl = 1;
    std::string armure("armure_de_base_mage");
    defArmure = 40;
    defMagie = defArmure + mana / 2;//90
    std::string Arme("armure_de_base_mage");
    degArme = 65;
    degPhc = degArme;
    degMagie = degPhc + mana / 2;//120
    std::cout << vie << '\n';
  }
}
