#pragma once
#include "Vaisseau.h"
#include "Faction.h"
#include "Faction.h"
class Transport : public Vaisseau
{
public:
	Transport();
	Transport(Faction* faction);
	~Transport();

	virtual std::string to_string();
};

