#pragma once
#include "Vaisseau.h"
#include<string>
#include "Faction.h"
class Guerre : public Vaisseau
{
public:
	Guerre();
	Guerre(Faction* faction);
	~Guerre();

	virtual std::string to_string();
};

