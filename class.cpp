#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <ctime>
#include "class.h"

void Perso::choisirRace(){
  int classe;
  std::cout << "(1)Etre guerrier:" << '\n';
  std::cout << "(2)Etre elfe:" << '\n';
  std::cout << "(3)Etre nain:" << '\n';
  std::cout << "(4)Etre mage:" << '\n';
  std::cin >> classe;

    if (classe == 1)
    {
      std::cout << "vous ête alors un guerrier" << '\n';
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
    else if(classe == 2)
    {
      std::cout << "vous etes alors un elfe" << '\n';
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
    else if(classe == 3)
    {
      std::cout << "vous etes alors un nain" << '\n';
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
    else if(classe >= 4)
    {
      std::cout << "vous etes alors un mage" << '\n';
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
      }
}

void Perso::recevoirCoup(int degSubit){
  vie -= degSubit;
  int typeDef;
  std::cout << "(1) ne pas se defendre" << '\n';
  std::cout << "(2) se defendre" << '\n';
  std::cout << "(3) se defendre avec magie" << '\n';
  std::cin >> typeDef;

  if (typeDef == 1) {
    std::cout << vie << '\n';
  }
  else if(typeDef == 2){
    vie += degSubit / 2;
    std::cout << vie << '\n';
  }
  else if(typeDef == 3){
    vie += degSubit * 3 / 4;
    std::cout << vie << '\n';
  }

    if (vie < 0) {
    vie = 0;
    }
}

void Perso::donnerCoup(Perso &cible){
  int typeAtt;
  std::cout << "(1) attaque normal" << '\n';
  std::cout << "(2) attaque magique" << '\n';
  std::cin >> typeAtt;

  if (typeAtt == 1) {
    cible.recevoirCoup(degPhc);
  }
  else if(typeAtt >= 2){
    cible.recevoirCoup(degMagie);
  }

}

bool Perso::enVie(){
  if (vie > 0) {
    return true;
  }
  else{
    return false;
    std::cout << "vous etes mort" << '\n';
  }
}
