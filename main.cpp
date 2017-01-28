#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <ctime>
#include "class.h"

int main(){
  Perso zeelie, grunleck;
  zeelie.choisirRace();
  grunleck.choisirRace();

  zeelie.donnerCoup(grunleck);
}
