#include "Transport.h"
#include<string>

Transport::Transport():Vaisseau(12,10,8,16,22,"YOT",9,13)
{

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
