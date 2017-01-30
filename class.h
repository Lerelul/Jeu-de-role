#ifndef CLASS_H
#define CLASS_H
#include "combat.h"
class Perso{
/*public = utilisable dans main*/public:
/*méthodes = fonctions ettoujours dans public*/
  void choisirRace();
protected:
  int vie;
  int mana;
  int degat;
  int endurance;
  int lvl;
  int defArmure;
  int defMagie;
  int degArme;
  int degPhc;
  int degMagie;
};

#endif
