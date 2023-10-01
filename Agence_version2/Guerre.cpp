#include "Guerre.h"
#include<string>

Guerre::Guerre() :Vaisseau(43900,94,90,5,62,"Destroyer",12,9)
{

}
Guerre::Guerre(Faction* faction):Vaisseau(faction)
{
	ValeurMarchande = 43900;
	Attaque = 94;
	Defense = 90;
	Vie = 5;
	Capacite = 62;
	Nom = "Destroyer";
	Niveau = 12;
	Experience = 9;
}

std::string Guerre::to_string()
{
	std::string mess = Vaisseau::to_string();		
	mess.append("\n ------- Je suis un vaisseau de guerre ------- ");

	return mess;
}

Guerre::~Guerre() {

}