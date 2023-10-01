#pragma once
#include<vector>
#include "Vaisseau.h"
#include "FactoryVaisseau.h"
using std::vector;
class Station
{
public:
	int PlatinumDisponible;
	int VieStation;
private:
	vector<Vaisseau*> _vecVaisseau;

public:

	Station(int platinDis, int vie);
	~Station();

	vector<Vaisseau*> getVaisseauDispo();
	void init();
	void ajouterVaisseau(Vaisseau* vaisseau);
	void ameliorerVaisseau(vector<Vaisseau*> vecV);
	virtual std::string to_string();
};

