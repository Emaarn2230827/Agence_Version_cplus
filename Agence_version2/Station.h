#pragma once
#include<vector>
#include "Vaisseau.h"
#include "FactoryVaisseau.h"
using std::vector;
class Station
{
private:
	int _platinumDisponible;
	int _vieStation;
	vector<Vaisseau*> _vecVaisseau;

public:

	Station(int platinDis, int vie);
	~Station();

	vector<Vaisseau*> getVaisseauDispo();
	void init();
	void ajouterVaisseau(Vaisseau* vaisseau);
	virtual std::string to_string();
};

