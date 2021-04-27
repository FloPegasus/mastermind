#include  <iostream>
#include <ctime>
#include <cstdlib>
#include "fonctions.hpp"


const int NB_PIONS = 5;
const int NB_COULEURS = 7;
const int NB_COUPS = 12;

int  main(){
    int machine[NB_PIONS];
    int joueur[NB_PIONS];
    int result = 0;
    int coup = 0;
    init(machine, NB_PIONS, NB_COULEURS);

    while (result < NB_PIONS || coup < NB_COUPS)
    {
        coup++;
        std::cout << "Coup n° "<< coup << std::endl;
        lire(joueur, NB_PIONS, NB_COULEURS);
        std::cout << "Nombre de pions bien placés : " << bienplace(joueur, machine, NB_PIONS) << std::endl;
        result = bienplace(joueur, machine, NB_PIONS);
        std::cout << "Nombre de pions mal placés : " << malplace(joueur, machine, NB_PIONS, NB_COULEURS) << std::endl;
        std::cout << "il vous reste "<< NB_COUPS - coup << " coups !" << std::endl;
    }
    
    if (coup < NB_COUPS)
    {
        std::cout << "Vous avez gagné en "<< coup << " coup !" << std::endl;
    } else {
        std::cout << "Vous avez perdu !" << std::endl;

    }
    
    
    return  0;
}