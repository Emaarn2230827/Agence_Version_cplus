#pragma once
#include<string>


class Vaisseau
{
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
	 Vaisseau(int valeurMarch, int attaque, int defense, int vie, int capacite, std::string nom, int niveau, int experience);
	~Vaisseau();

	inline int getValeurMarchande() { return ValeurMarchande; }

	int getAtt();
	int getDef();
	int getVie();

	virtual std::string to_string();
};



