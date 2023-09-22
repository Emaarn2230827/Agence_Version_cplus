#pragma once
#include<string>
#include "Faction.h";


class Vaisseau
{
private:
	
	Faction* _faction;
protected:
	  int ValeurMarchande;
	  int Attaque;
	  int Defense;
	  int Vie;
	  int Capacite;
	  std::string Nom;
	  int Niveau;
	  int Experience;
public:
	 Vaisseau();
	 Vaisseau(int valeurMarch, int attaque, int defense, int vie, int capacite, std::string nom, int niveau, int experience);
	 Vaisseau(Faction* faction);
	~Vaisseau();

	inline int getValeurMarchande() { return ValeurMarchande; }

	int getAtt();
	int getDef();
	int getVie();

	virtual std::string to_string();
};



