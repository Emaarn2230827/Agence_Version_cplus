#include "Vaisseau.h"

Vaisseau::Vaisseau(int valeurMarch, int attaque,int defense,int vie, int capacite, std::string nom, int niveau, int experience) 
{
	ValeurMarchande = valeurMarch;
	Attaque = attaque;
	Defense =  defense;
	Vie = vie;
	Capacite = capacite;
	Nom = nom;
	Niveau = niveau;
	Experience = experience;
}
Vaisseau::Vaisseau()
{
	ValeurMarchande = 0;
	Attaque = 0;
	Defense = 0;
	Vie = 0;
	Capacite = 0;
	Nom = "";
	Niveau = 0;
	Experience = 0;
}
Vaisseau::Vaisseau(Faction* faction)
{
	ValeurMarchande = getValeurMarchande();
	 
	_faction = faction;

}
Vaisseau::~Vaisseau() 
{

}
int Vaisseau::getAtt()
{
	return Attaque + _faction ->Attaque;
}
int Vaisseau::getDef()
{
	return Defense + _faction ->Defense;
}
int Vaisseau::getVie()
{
	return Vie + _faction ->Vie;
}
std::string Vaisseau::to_string()
{
	std::string info;
	info = ( "Nom du vaisseau: " + Nom +" \n Valeur marchande: "+ std::to_string(this ->getValeurMarchande()) + "$"
				+"\n Capacite: "+ std::to_string(Capacite) + "\n Niveau: "+ std::to_string(Niveau)
				+ "\n Attaque: "+ std::to_string(this -> getAtt())+ "\n Defence: "+ std::to_string(this -> getDef())
				+ "\n Vie: "+ std::to_string(this -> getVie()) + "\n Experience: "+ std::to_string(Experience));

	return info;
	
}