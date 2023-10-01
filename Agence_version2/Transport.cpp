#include "Transport.h"
#include<string>

Transport::Transport():Vaisseau(38000, 62,70,3,90,"Transporteur",4,7)
{

}
Transport::Transport(Faction* faction) :Vaisseau(faction)
{
	ValeurMarchande = 38000;
	Attaque = 62;
	Defense = 70;
	Vie = 3;
	Capacite = 90;
	Nom = "Transporteur";
	Niveau = 4;
	Experience = 7;
}
std::string Transport::to_string()
{
	std::string mess = Vaisseau::to_string();
	mess.append("\n ------- Je suis un vaisseau de transport ------- ");
	return mess;
}
Transport::~Transport()
{

}
