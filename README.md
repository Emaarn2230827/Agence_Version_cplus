# Agence_Version_cplus
Comme ajout personnel, j'ai decidé d'ajouter le concept de conquête de planète
Pour cela, j'ai créé  une classe planète ayant pour attributs un nom, une puissance armée et une quantité de ressources.
L'objectif de mon projet est de pouvoir conquérir ces planètes grâce aux vaisseaux de ma station et de recupérer les ressources des planètes conquises pour
améliorer mes vaisseaux.

Condition de conquête: 
  - Si la puissance de l'armée de la planète est supérieur au total de l'attaque et de la defence de mes vaisseaux, alors la planète n'est pas conquise
  - Si la puissance de l'armée de la planète est inférieur au total de l'attaque et de la defence de mes vaisseaux, alors la planète est  conquise et une partie de ses
     ressources est attribuée au platinium et la vie de ma station, ce qui permettra l'amélioration de mes vaisseaux.

    Important: si l'on a pas assez de ressources dans notre station, l'on ne peut pas améliorer nos vaisseaux. On est donc contraint de conquérir
    de nouvelles planètes pour obtenir de nouvelles ressources et pouvoir améliorer nos vaisseaux par la suite.
