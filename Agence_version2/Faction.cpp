#include "Faction.h"

Faction::Faction(int attaque, int defense, int vie, int capacite, std::string nom) 
{
	Attaque = attaque;
	Defense = defense;
	Vie = vie;
	Capacite = capacite;
	Nom = nom;
}
Faction::Faction()
{
	Attaque = 0;
	Defense = 0;
	Vie = 0;
	Capacite = 0;
	Nom = " ";
}
Faction::Faction(std::string nom) 
{
	if (nom == "Rouge")
	{
		Attaque = 45;
		Defense = 48;
		Vie = 8;
		Capacite = 95;
	}
	else if(nom == "Bleu")
	{
		Attaque = 35;
		Defense = 38;
		Vie = 4;
		Capacite = 75;
	}
}
Faction:: ~Faction() 
{

}