
#include <iostream>
#include "Vaisseau.h"
#include "Livraison.h"
#include "Transport.h"
#include "Guerre.h"



int main()
{
    Transport* mon_Vaisseau = new Transport();
    std::cout << mon_Vaisseau->to_string();
    delete mon_Vaisseau;
}

