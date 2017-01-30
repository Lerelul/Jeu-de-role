#ifndef CLASS_H
#define CLASS_H
#include "race.h"
class Perso : public Guerrier , public Elfe , public Nain , public Mage{
/*public = utilisable dans main*/public:
/*méthodes = fonctions ettoujours dans public*/
  void choisirRace();
  void recevoirCoup(int degSubit);
  void donnrCoup();
private:
  Guerrier  Guerrier;
  Elfe  Elfe;
  Nain  Nain;
  Mage  Mage;
};

#endif
