#include "Livraison.h"
#include<string>

Livraison::Livraison() :Vaisseau(32000,75,70,2,98,"Delivery",5,10)
{

}
Livraison::Livraison(Faction* faction) : Vaisseau(faction)
{
	ValeurMarchande = 32000;
	Attaque = 75;
	Defense = 70;
	Vie = 2;
	Capacite = 98;
	Nom = "Delivery";
	Niveau = 5;
	Experience = 10;

}
std::string Livraison::to_string()
{
	std::string mess = Vaisseau::to_string();
	mess.append("\n ------- Je suis un vaisseau de livraison ------- ");
	return mess;
}

Livraison::~Livraison() {

}