#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <ctime>
#include "class.h"
#include "combat.h"



void Combat::recevoireDommage(int nbdmg){
  vie -= nbdmg;

  if(vie < 0){
    vie = 0;
  }
}

void Combat::attaquer(Perso &cible){
  cible.recevoireDommage(degPhc);
}

void Combat::defense(){
  int typedefense;
  std::cout << "(1) pas de def" << '\n';
  std::cout << "(2) def normale" << '\n';
  std::cout << "(3) def magique" << '\n';
  std::cin >> typedefense;


  if (typedefense == 1) {
    std::cout << vie << '\n';
  }
  else if (typedefense == 2) {
    vie += degPhc / 2;
    std::cout << vie << '\n';
  }
  else if (typedefense >= 3){
    vie += degPhc * 3 / 4;
    std::cout << vie << '\n';
  }
}
