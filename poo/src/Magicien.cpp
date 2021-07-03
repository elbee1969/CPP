#include "Magicien.h"
#include "Personnage.h"
#include <string>
#include<iostream>
#include<ctime>
#include<cstdlib>"
using namespace std;

Magicien::Magicien(string nom) : Personnage(nom)
{
    boirePotionDeVie(-50);
    boirePotionDeMana(50);
    changerStatus("Magicien");
}

void Magicien::sortFeu(Personnage &cible)
{
    int degatInflige(0);
    srand(time(0));
    degatInflige = rand() % 20;
    cible.recevoirDegats(degatInflige);
    cout << "Dégats infligés : " << degatInflige << endl;
}
void Magicien::sortGuerrison(Personnage &cible)
{
    cible.boirePotionDeVie(20);
}

