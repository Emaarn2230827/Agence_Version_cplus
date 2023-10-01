#include "Planete.h"

Planete::Planete(std::string nomP, int puissA, int qteR, StatutPlanete statp)
{
	NomPlanete = nomP;
	PuissanceArmee = puissA;
	QteRessource = qteR;
	StatutP = statp;
}

Planete::~Planete()
{

}

void Planete::VerifierConquete()
{
	if (StatutP == StatutPlanete::conquis) {
		std::cout << "Cette planète a déjà été conquise";
	}
	else
	{
		std::cout << "Cette planète n'a pas encore été conquise";

	}
}

std::string Planete::to_string()
{
	std::string info;
	info = "Nom planete: " + NomPlanete + "\n Puissance armee: " + std::to_string(this->PuissanceArmee)
		    +"\n Quantite de ressource: "+ std::to_string(this->QteRessource)+ "\n Statut planete: "+ (StatutP == StatutPlanete::conquis ? "Conquise":"Pas conquise");
	return info;
}