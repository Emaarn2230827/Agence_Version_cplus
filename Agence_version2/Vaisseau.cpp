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

Vaisseau::~Vaisseau() 
{

}
int Vaisseau::getAtt()
{
	return Attaque;
}
int Vaisseau::getDef()
{
	return Defense;
}
int Vaisseau::getVie()
{
	return Vie;
}
std::string Vaisseau::to_string()
{
	std::string info;
	info = ( "Nom du vaisseau: " + Nom +" \n Valeur marchande: "+ std::to_string(this ->getValeurMarchande())
				+"\n Capacite: "+ std::to_string(Capacite) + "\n Niveau: "+ std::to_string(Niveau)
				+ "\n Attaque: "+ std::to_string(this -> getAtt())+ "\n Defence: "+ std::to_string(this -> getDef())
				+ "\n Vie: "+ std::to_string(this -> getVie()) + "\n Experience: "+ std::to_string(Experience));

	return info;
	
}