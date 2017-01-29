#ifndef CLASS_H
#define CLASS_H
#include "race.h"

class Perso
{
/*public = utilisable dans main*/public:
/*méthodes = fonctions ettoujours dans public*/
  void choisirRace();
  void recevoirCoup(int degSubit);
  void donnerCoup(Perso &cible);
/*private = non utilisable dans le main*/private:
  guerrier statsGuerrier;
  nain statsnain;
  mage statsMage;
  elfe statsefle;
};

#endif
