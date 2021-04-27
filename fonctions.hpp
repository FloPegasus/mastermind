#ifndef FONCTIONS_HPP   // To make sure you don't declare the function more than once by including the header multiple times.
#define FONCTIONS_HPP

#include  <iostream>
#include <ctime> //pour la fonction time
#include <cstdlib> // pour la fonction rand

void affiche(int tab[], int nb_pions);
void lire(int tab[], int nb_pions, int nb_couleurs);
int bienplace(int joueur[], int machine[], int nb_pions);
int malplace(int joueur[], int machine[], int nb_pions, int nb_couleurs);
void init(int tab[], int nb_pions, int nb_couleurs);

#endif
