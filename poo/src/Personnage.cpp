#include "Personnage.h"
#include "Arme.h"
#include <iostream>
#include <string>
#include<ctime>
#include<cstdlib>"
using namespace std;

Personnage::Personnage(string nom) : m_nom(nom), m_role("paysan"), m_arme(0), m_vie(100), m_mana(100)
{
    m_arme = new Arme();
}
/* autre façon de construire le constructeur
{
    m_vie = 100;
    m_mana = 100;
    m_nomArme = "Épée rouillée";
    m_degatsArme = 10;
}
*/
Personnage::Personnage(string nom, string nomArme, int degatsArme) :m_nom(nom), m_role("paysan"), m_arme(0), m_vie(100), m_mana(100)
{
    m_arme = new Arme(nomArme,degatsArme);
}

Personnage::Personnage(string nom, int vie, int mana) : m_nom(nom), m_vie(vie), m_mana(mana)
{
}
void Personnage::recevoirDegats(int nbDegats)
{
    m_vie -= nbDegats;
    if(m_vie < 0)
    {
        m_vie = 0;
        cout << "Arrggghhh, je mouru !!! .........." << endl;
    }
}

void Personnage::attaquer(Personnage &cible)
{
    int degatInflige(0);
    srand(time(0));
    degatInflige = rand() % m_arme->getDegats();
    cible.recevoirDegats(degatInflige);
    cout << "Dégats infligés : " << degatInflige << endl;
}
void Personnage::boxer(Personnage &cible)
{
    int degatInflige(0);
    srand(time(0));
    degatInflige = rand() % 10;
    cible.recevoirDegats(degatInflige);
        cout << "Dégats infligés : " << degatInflige << endl;
}
void Personnage::boirePotionDeVie(int quantitePotion)
{
    m_vie += quantitePotion;
    if(m_vie > 100)
    {
        cout << "bonus life !" << endl;
    }
}

void Personnage::boirePotionDeMana(int quantitePotion)
{
    m_mana += quantitePotion;
    if(m_mana > 100)
    {
        cout << "bonus magie !" << endl;
    }
}

void Personnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme)
{
    m_arme->changer(nomNouvelleArme,degatsNouvelleArme);
}

void Personnage::changerStatus(string status)
{
    m_role = status;
}
bool Personnage::estVivant() const
{
    return m_vie > 0;
}

int Personnage::getVie()
{
    return m_vie;
}
void Personnage::afficherEtat()const
{
cout << "Nom : " << m_nom << endl;
cout << "Status : " << m_role << endl;
    cout << "Vie : " << m_vie << endl;
    cout << "Mana : " << m_mana << endl;
    m_arme->afficher();
}

Personnage::~Personnage()
{
    delete m_arme;
}
