#include "Station.h"

Station::Station(int platinDis, int vie)
{
	_platinumDisponible = platinDis;
	_vieStation = vie;

}
Station::~Station()
{

}
void Station::init()
{
	for (int i = 0; i < 3; i++)
	{
		_vecVaisseau.push_back(FactoryVaisseau::getRandomVaisseau());
	}
}

void Station::ajouterVaisseau(Vaisseau * vaisseau)
{
	_vecVaisseau.push_back(vaisseau);
}

vector<Vaisseau*> Station::getVaisseauDispo()
{
	return _vecVaisseau;
}
std::string Station::to_string() 
{
	std::string info = "\n \t \t Ma station a : \n Platinium disponible : "+ std::to_string(this->_platinumDisponible)
						+"\n Vie de la station: "+ std::to_string(this->_vieStation) + "\n";
	return info;
}