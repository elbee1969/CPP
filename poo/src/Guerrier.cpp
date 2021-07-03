#include "Guerrier.h"
#include "Personnage.h"
#include "Arme.h"
#include <string>
#include<iostream>
using namespace std;

Guerrier::Guerrier(string nom) : Personnage(nom)
{
 boirePotionDeVie(50);
 boirePotionDeMana(-50);
}



