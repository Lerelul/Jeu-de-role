#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <ctime>
#include "combat.h"

void combat::recevoireDommage(int nbdmg){
  vie -= nbDmg;

  if(vie < 0){
    vie = 0;
  }
}

void attaquer(Perso &adversaire){
  adversaire.recevoireDommage(degPhc);
}
