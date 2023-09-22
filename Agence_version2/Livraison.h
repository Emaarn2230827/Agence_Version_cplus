#pragma once
#include<string>
#include "Vaisseau.h"
#include "Faction.h"
class Livraison :  public Vaisseau
{
public :
	Livraison();
	Livraison(Faction* faction);
	~Livraison();

	virtual std::string to_string();

};


