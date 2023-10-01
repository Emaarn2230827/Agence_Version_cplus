#include "FactoryPlanete.h"
#include <ctime>
#include <cstdlib>


int Generate2(int min, int max)
{
	return (rand() % (max - min + 1)) + min;
}

Planete* FactoryPlanete::getRandomPlanete()
{
	
	Planete* plt(nullptr);

	int statPl = Generate2(0, 1);
	int puisA = Generate2(250, 1000);
	int qteR = Generate2(500, 1000);
	int nom = Generate2(1, 1000000);

	if (statPl == 0)
	{
		plt = new Planete("Terra" + std::to_string(nom), puisA, qteR, Planete::StatutPlanete::conquis);
	}
	else
	{
		plt = new Planete("Terra" + std::to_string(nom), puisA, qteR, Planete::StatutPlanete::pas_conquis);

	}
	return plt;
}

vector<Planete*> FactoryPlanete::getPlaneteExistente()
{
	vector<Planete*> listePlanete;
	
	int numPlanete = Generate2(4, 12);
	for (int i = 0; i < numPlanete; i++)
	{
		listePlanete.push_back(FactoryPlanete::getRandomPlanete());
	}
	return listePlanete;
}