#ifndef RACE_H
#define RACE_H

class combat : public Perso{
public:
  void attaquer(Perso &adversaire);
  void recevoireDommage(int nbDmg);
private:
};

#endif
