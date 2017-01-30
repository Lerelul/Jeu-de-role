#ifndef RACE_H
#define RACE_H

class Guerrier{
public:
  Guerrier();
protected:
  int vieGuerrier;
  int manaGuerrier;
  int degatGuerrier;
  int enduranceGuerrier;
  int lvlGuerrier;
  int defArmureGuerrier;
  int defMagieGuerrier;
  int degArmeGuerrier;
  int degPhcGuerrier;
  int degMagieGuerrier;
};

class Nain{
public:
  Nain();
protected:
    int vieNain;
    int manaNain;
    int degatNain;
    int enduranceNain;
    int lvlNain;
    int defArmureNain;
    int defMagieNain;
    int degArmeNain;
    int degPhcNain;
    int degMagieNain;
};

class Elfe{
public:
  Elfe();
protected:
  int vieElfe;
  int manaElfe;
  int degatElfe;
  int enduranceElfe;
  int lvlElfe;
  int defArmureElfe;
  int defMagieElfe;//80
  int degArmeElfe;
  int degPhcElfe;//80
  int degMagieElfe;//120
};

class Mage{
public:
  Mage();
protected:
    int vieMage;
    int manaMage;
    int degatMage;
    int enduranceMage;
    int lvlMage;
    int defArmureMage;
    int defMagieMage;
    int degArmeMage;
    int degPhcMage;
    int degMagieMage;
};


#endif
