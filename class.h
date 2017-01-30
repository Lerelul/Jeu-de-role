#ifndef CLASS_H
#define CLASS_H
#include "race.h"

class Perso : public Mage , public Guerrier , public Elfe, public Nain {
/*public = utilisable dans main*/public:
/*méthodes = fonctions ettoujours dans public*/
  Perso();
  void choisirRace();
  void recevoirCoup(int degSubit);
  void donnerCoup();
/*private = non utilisable dans le main*/private:
  Guerrier Guerrier;
  Nain Nain;
  Mage Mage;
  Elfe Elfe;
};

#endif
