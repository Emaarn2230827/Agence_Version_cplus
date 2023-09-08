#include "Livraison.h"
#include<string>

Livraison::Livraison() :Vaisseau(25, 03, 15, 16, 22, "LOT", 11, 89)
{

}
std::string Livraison::to_string()
{
	std::string mess = Vaisseau::to_string();
	mess.append("\n ------- Je suis un vaisseau de livraison ------- ");
	return mess;
}

Livraison::~Livraison() {

}