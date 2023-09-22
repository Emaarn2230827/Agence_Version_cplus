#pragma once
#include "Vaisseau.h"
class FactoryVaisseau
{
public:
	static Vaisseau* getRandomVaisseau();

private:
	static Faction* getRandomFaction();

};

