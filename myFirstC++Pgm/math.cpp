#include "math.h"
#include<iostream>
#include<vector>

using namespace std;

int ajouteDeux(int nombreRecu)
{
    int valeur(nombreRecu + 2);
    cout << "ajout fait" << endl;
    return valeur;
}

int nombreDeSecondes(int heures, int minutes, int secondes)
{
    int total = 0;

    total = heures * 60 * 60;
    total += minutes * 60;
    total += secondes;

    return total;
}
/*
 *  Fonction qui calcule la moyenne des éléments d'un tableau
 *  - tableau : Le tableau dont on veut la moyenne
 *  - tailleTableau : La taille du tableau
 */
double moyenne(double tableau[], int tailleTableau)
{
   double moyenne(0);
   for(int i(0); i<tailleTableau; ++i)
   {
      moyenne += tableau[i];   //On additionne toutes les valeurs
   }
   moyenne /= tailleTableau;

   return moyenne;
}

double moyenneVector(vector<double>& notes){
double moyenne(0);
   for(int i(0); i<notes.size(); ++i)
   {
      moyenne += notes[i];   //On additionne toutes les valeurs
   }
   moyenne /= notes.size();

   return moyenne;
}
