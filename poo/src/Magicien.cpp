#include "Magicien.h"
#include "Personnage.h"
#include <string>
#include<iostream>
using namespace std;
Magicien::Magicien(string nom) : Personnage(nom)
{
 boirePotionDeVie(-50);
 boirePotionDeMana(50);
}


