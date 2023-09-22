
#include <iostream>
#include<ctime>
#include "Vaisseau.h"
#include "Livraison.h"
#include "Transport.h"
#include "Guerre.h"
#include "FactoryVaisseau.h"
#include "Station.h"



int main()
{
   
    srand(time(NULL));
    std::cout << "Production d'un vaisseau" << std::endl;
    Vaisseau* mon_Vaisseau = FactoryVaisseau::getRandomVaisseau(); 
    std::cout << mon_Vaisseau->to_string();
    delete mon_Vaisseau;
    std::cout << "" << std::endl;
    Station maStation(1000, 100);
   std::cout << maStation.to_string() << std::endl;
    maStation.init();
    vector<Vaisseau*> vecVaisseau = maStation.getVaisseauDispo();
    for (int i = 0; i < vecVaisseau.size(); i++)
    {
        std::cout << vecVaisseau[i]->to_string() << std::endl;
        delete vecVaisseau[i];
    }
   
     
}

