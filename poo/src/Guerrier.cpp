#include "Guerrier.h"
#include "Personnage.h"
#include "Arme.h"
#include <string>
#include<iostream>
#include<ctime>
#include<cstdlib>"
using namespace std;

Guerrier::Guerrier(string nom) : Personnage(nom)
{
    boirePotionDeVie(50);
    boirePotionDeMana(-50);
    changerStatus("Guerrier");
}
void Guerrier::attaquer(Personnage &cible)
{
    int degatInflige(0);
    srand(time(0));
    degatInflige = rand() % m_arme->getDegats() + 10;
    cible.recevoirDegats(degatInflige);
    cout << "Dégats infligés : " << degatInflige << endl;
}



