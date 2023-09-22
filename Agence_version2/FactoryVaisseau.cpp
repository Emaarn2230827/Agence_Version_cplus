#include "FactoryVaisseau.h"
#include <ctime>
#include <cstdlib>
#include "Guerre.h"
#include "Transport.h"
#include "Livraison.h"
int Generate(int min, int max)
{
	return (rand() % (max - min + 1)) + min;
}
Vaisseau* FactoryVaisseau::getRandomVaisseau()
{
	Vaisseau* vaisseau(0);
	// Generer une race aleatoire
	Faction* maFaction = getRandomFaction();

	//Generer un type aleatoire
	int typeV= Generate(1, 3);
	if (typeV == 1)
	{
		vaisseau = new Guerre(maFaction);
	}
	else if(typeV == 2) 
	{
		vaisseau = new Transport(maFaction);
	}
	else 
	{
		vaisseau = new Livraison(maFaction);
	}
	return vaisseau;

}

Faction* FactoryVaisseau::getRandomFaction()
{
	Faction* maFact(0);
	int typeF = Generate(1, 2);
	if (typeF == 1)
	{
		maFact = new Faction("Rouge");
	}
	else
	{
		maFact = new Faction("Bleu");
	}
	return maFact;

}