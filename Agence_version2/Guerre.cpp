#include "Guerre.h"
#include<string>

Guerre::Guerre() :Vaisseau(78, 15, 15, 45, 22, "COT", 51, 29)
{

}

std::string Guerre::to_string()
{
	std::string mess = Vaisseau::to_string();		
	mess.append("\n ------- Je suis un vaisseau de guerre ------- ");

	return mess;
}

Guerre::~Guerre() {

}