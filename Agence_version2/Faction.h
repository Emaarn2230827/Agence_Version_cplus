#pragma once
#include<string>;
class Faction
{
protected:
	int Attaque;
	int Defense;
	int Vie;
	int Capacite;
	std::string Nom;

public:
	Faction();
	Faction(int attaque, int defense, int vie, int capacite, std::string nom);

	inline std::string getNom() { return Nom; }
};

