#pragma once
#include <string>
#include <iostream>
class Planete
{

public:
	enum class StatutPlanete
	{
		conquis,
		pas_conquis
	};
	std::string NomPlanete;
	int PuissanceArmee;
	int QteRessource;
	StatutPlanete StatutP;

	Planete(std::string nomP, int puissA, int qteR, StatutPlanete statp);
	~Planete();

	void VerifierConquete();
	virtual std::string to_string();

};

