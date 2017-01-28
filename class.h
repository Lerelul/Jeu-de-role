#ifndef CLASS_H
#define CLASS_H

class Perso
{
/*public = utilisable dans main*/public:
/*méthodes = fonctions ettoujours dans public*/
  void choisirRace();
  void recevoirCoup(int degSubit);
  void donnerCoup(Perso &cible);
  void reprendreVie(int potion);
  void changerArmure(std::string nouvelleArmure, int defNouvelleArmure);
  void changerArme();
  void lvlUp();
  bool enVie();
/*private = non utilisable dans le main*/protected:
  /*attribut = variabelles et toujours dans private*/
  int vie;
  int lvl;
  int mana;
  int degat;
  int endurance;
  std::string armure;
  int defArmure;
  std::string Arme;
  int degArme;
  int degPhc;
  int degMagie;
  int defMagie;
  /*variables de private modifiables que dans classe*/
};

class guerrier : public Perso{
public:
  void statsGuerrier();
};
class mage : public Perso{
public:
  void statsMage();
};
class nain : public Perso{
public:
  void statsnain();
};
class elfe : public Perso{
  void statsefle();
};

#endif
