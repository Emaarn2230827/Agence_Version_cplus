#include "Conquete.h"

void Conquete::conquerirPlanete(Planete* planet, int att, int deff,Station* stat)
{
	int valeurArmePlanete = planet->PuissanceArmee;
	int totalAttDef = att + deff;
	if (totalAttDef >= valeurArmePlanete && planet->StatutP == Planete::StatutPlanete::pas_conquis)
	{
		std::cout << "\n ### La planete " + planet->NomPlanete + " vient d'etre conquise :) ### " << std::endl;
		stat->PlatinumDisponible += planet->QteRessource * 0.8; // recois les 80% des ressources
		stat->VieStation += planet->QteRessource * 0.01; //recois les 1% des ressources

	}
	else if(totalAttDef < valeurArmePlanete && planet->StatutP == Planete::StatutPlanete::pas_conquis)
	{
		std::cout << "\n ### Nous avons malheureusement perdu la bataille pour la conquete de la planete "+planet->NomPlanete +" ### " << std::endl ;
	}
	else if (planet->StatutP == Planete::StatutPlanete::conquis)
	{
		std::cout << "\n ### La planete: " + planet->NomPlanete + " a deja ete conquise :) ### " << std::endl;
	}
}

