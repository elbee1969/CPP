#include "Duree.h"
#include <iostream>
using namespace std;

Duree::Duree(int heures, int minutes, int secondes): m_heures(heures), m_minutes(minutes), m_secondes(secondes)
{
}

Duree& Duree::operator+=(const Duree &duree2)
{
    // 1 : ajout des secondes
    m_secondes += duree2.m_secondes; // Exceptionnellement autorisé car même classe
    // Si le nombre de secondes dépasse 60, on rajoute des minutes et on met un nombre de secondes inférieur à 60
    m_minutes += m_secondes / 60;
    m_secondes %= 60;

    // 2 : ajout des minutes
    m_minutes += duree2.m_minutes;
    // Si le nombre de minutes dépasse 60, on rajoute des heures et on met un nombre de minutes inférieur à 60
    m_heures += m_minutes / 60;
    m_minutes %= 60;

    // 3 : ajout des heures
    m_heures += duree2.m_heures;

    return *this;
}
Duree& Duree::operator-=(const Duree &duree2)
{
    int t1 = m_heures*3600 + m_minutes*60 + m_secondes;
    int t2 = duree2.m_heures*3600 + duree2.m_minutes*60 + duree2.m_secondes;
    int t3 = t1 - t2;

    m_heures = t3/3600;
    m_heures %= 3600;
    m_minutes = t3/60;
    m_minutes %= 60;
    m_secondes -= duree2.m_secondes; // Exceptionnellement autorisé car même classe

    return *this;
}

void Duree::afficher() const
{
    cout << m_heures << " h " << m_minutes << " m " << m_secondes << " s" << endl;
}

Duree operator+(Duree const& a, Duree const& b)
{
    Duree copie(a);
    copie += b;
    return copie;
}
Duree operator-(Duree const& a, Duree const& b)
{
    Duree copie(a);
    copie -= b;
    return copie;
}
/*
ostream &operator<<( ostream &flux, Duree const& duree)
{
    duree.afficher(flux) ;
    return flux;
}
*/
//friend ostream& Duree::operator<<(ostream& os, const Duree& duree);
ostream& operator<<(ostream& os, const Duree& duree)
{
    os << duree.m_heures << " h " << duree.m_minutes << " m " << duree.m_secondes << " s";
    return os;
}
