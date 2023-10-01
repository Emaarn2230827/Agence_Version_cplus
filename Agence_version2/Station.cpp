#include "Station.h"
#include <iostream>

Station::Station(int platinDis, int vie)
{
	PlatinumDisponible = platinDis;
	VieStation = vie;

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
void Station::ameliorerVaisseau(std::vector<Vaisseau*> vecV)
{
	if (PlatinumDisponible >= 300 && VieStation >= 15)
	{
		for (int i = 0; i < vecV.size(); i++)
		{


			vecV[i]->Attaque += 5;
			vecV[i]->Defense += 4;
			vecV[i]->Vie += 2;
			vecV[i]->Capacite += 7;
			vecV[i]->ValeurMarchande += 350;
			vecV[i]->Niveau += 1;
			vecV[i]->Experience += 2;
			PlatinumDisponible -= 300;
			VieStation -= 15;
			std::cout << vecV[i]->to_string() << std::endl;
		}
	}
	else
	{
		std::cout << "###### NOUS N AVONS PAS ASSER DE RESSOURCES POUR AMELIORER NOS VAISSEAUX ##### " << std::endl;
		std::cout << "--- Vous devez conquerir plus de planetes pour avoir plus de ressources  --- " << std::endl;

	}
}
std::string Station::to_string() 
{
	std::string info = "\n \t \t Ma station a : \n Platinium disponible : "+ std::to_string(this->PlatinumDisponible)
						+"\n Vie de la station: "+ std::to_string(this->VieStation) + "\n";
	return info;
}