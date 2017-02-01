#ifndef COMBAT_H
#define COMBAT_H
#include "class.h"
class Combat : public Perso {
  public:
    void recevoireDommage(int nbDmg);
    void attaquer(Perso &adversaire);
    void defense();
  private:
};

#endif
