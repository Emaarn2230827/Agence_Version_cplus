#pragma once
#include "Planete.h"
#include <vector>
using std::vector;
class FactoryPlanete
{
public:
	static Planete* getRandomPlanete();
	static vector<Planete*> getPlaneteExistente();
};

