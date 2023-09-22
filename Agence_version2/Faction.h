#pragma once
#include<string>;


class Faction
{
public:
	int Attaque;
	int Defense;
	int Vie;
	int Capacite;
	std::string Nom;


public:
	Faction(std::string nom);
	Faction();
	Faction(int attaque, int defense, int vie, int capacite, std::string nom);
	~Faction();

	inline std::string getNom() { return Nom; }
};

