#include "fonctions.hpp"


void affiche(int tab[], int nb_pions) {
    for(int i = 0; i < nb_pions; i++) {
        std::cout  << tab[i] << " " ;
    }
    std::cout << std::endl;
}

void lire(int tab[], int nb_pions, int nb_couleurs) {
    std::cout  << "Choisir " <<  nb_pions << " couleurs entre 0 et " << nb_couleurs-1 << "." << std::endl;;
    for(int i = 0; i < nb_pions; i++) {
        tab[i] = nb_couleurs + 1;
        int j = 0;
        while (tab[i] > nb_couleurs -1)
        {   
            j++;
            if(j > 1) {
                std::cout  << "mauvaise couleur, choisir une couleur entre 0 et " << nb_couleurs-1 << std::endl;
            }
            std::cout  << "couleur " <<  i+1 << " : " ;
            std::cin >> tab[i];
        }
    }
    std::cout  << "couleurs choisies :" << std::endl;
    affiche(tab, nb_pions);
}

int bienplace(int joueur[], int machine[], int nb_pions) {
    int nb_bon = 0;
    for(int i = 0; i < nb_pions; i++) {
        if(joueur[i] == machine[i]) {
            nb_bon++;
        }
    }
    return nb_bon;
}

int malplace(int joueur[], int machine[], int nb_pions, int nb_couleurs){
    int nb_malplace = 0;
    for(int i = 0; i < nb_couleurs; i++) {
        int cj = 0;
        int cm = 0;
        for(int j = 0; j < nb_pions; j++) {
            if(joueur[j] == i && joueur[j] != machine[j]) {
                cj++;
            }
            if(machine[j] == i && joueur[j] != machine[j]) {
                cm++;
            }
        }
        if(cj<cm) {
            nb_malplace = nb_malplace + cj;
        } else {
            nb_malplace = nb_malplace + cm;
        }
    }
    return nb_malplace;
}

void init(int tab[], int nb_pions, int nb_couleurs){
    srand(time(NULL));
    for(int i = 0; i < nb_pions; i++) {
        tab[i] = rand()%nb_couleurs;
    }
}