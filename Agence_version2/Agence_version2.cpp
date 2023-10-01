
#include <iostream>
#include<ctime>
#include "Vaisseau.h"
#include "Livraison.h"
#include "Transport.h"
#include "Guerre.h"
#include "FactoryVaisseau.h"
#include "Station.h"
#include "Conquete.h"
#include "Planete.h"
#include "FactoryPlanete.h"



int main()
{
   
    srand(time(NULL));
    int cptPuisAtt = 0;
    int cptPuisDef = 0;
    std::cout << "Production d'un vaisseau" << std::endl;
    Vaisseau* mon_Vaisseau = FactoryVaisseau::getRandomVaisseau(); 
    std::cout << mon_Vaisseau->to_string();
    delete mon_Vaisseau;
    std::cout << "" << std::endl;
    Station* maStation = new Station(1000, 100);
   std::cout << maStation->to_string() << std::endl;
    maStation->init();
    vector<Vaisseau*> vecVaisseau = maStation->getVaisseauDispo();
    std::cout << "\n \n --------- Liste des vaisseaux --------- \n " << std::endl;
    for (int i = 0; i < vecVaisseau.size(); i++)
    {
        cptPuisAtt += vecVaisseau[i]->getAtt();
        cptPuisDef += vecVaisseau[i]->getDef();
        std::cout << vecVaisseau[i]->to_string() << std::endl;
     
    }
    std::cout << "\n \n \t \t ----------------- DEBUT DU PROJET PERSONNEL  ----------------- \n \n \n" << std::endl;
    bool tours = true;
    while (tours)
    {
        std::cout << " ---------- MENU ----------" << std::endl;
        std::cout << " ---------------------------" << std::endl;
        std::cout << " 1- Conquerir la galaxy" << std::endl;
        std::cout << " 2- Ameliorer vaisseau " << std::endl;
        std::cout << " 3- Quitter " << std::endl;

        int choix;
        std::cin >> choix;
        vector<Planete*> vecPlanetes = FactoryPlanete::getPlaneteExistente();
        while (choix != 1 && choix != 2 && choix != 3)
        {

            std::cout << "### choix invalide, reessayer ####" << std::endl;
            std::cin >> choix;
            
        }
            switch (choix)
            {
            case 1:
                std::cout << "\n\n----------------------ALLONS CONQUERIR LA GALAXY ----------------------\n" << std::endl;
               
                for (int i = 0; i < vecPlanetes.size(); i++)
                {
                    std::cout << vecPlanetes[i]->to_string() << std::endl;
                    Conquete::conquerirPlanete(vecPlanetes[i], cptPuisAtt, cptPuisDef, maStation);
                    std::cout << "\n";
                    delete vecPlanetes[i];
                    std::cout << " ------------- MISE A JOUR DE MA STATION -------------" << std::endl;
                    std::cout << maStation->to_string() << std::endl;
                }
                break;
            case 2:
                maStation->ameliorerVaisseau(vecVaisseau);
                break;
            default:
                tours = false;
                break;
            }

    }
    delete maStation;
    for (int i = 0; i < vecVaisseau.size(); i++)
    {
        delete vecVaisseau[i];

    }
   
}

