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
    std::cout << "Guerrier" << '\n';
    statsGuerrier;
    std::cout << vieGuerrier << '\n';
  }
  else if(typeRace == 2){
    std::cout << "Elfe" << '\n';
    statsefle;
  }
  else if(typeRace == 3){
    std::cout << "Nain" << '\n';
    statsnain;
  }
  else if(typeRace >= 4){
    std::cout << "Mage" << '\n';
    statsMage;
  }
}

void Perso::donnerCoup(){

}
