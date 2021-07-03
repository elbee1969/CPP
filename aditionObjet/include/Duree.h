#ifndef DUREE_H
#define DUREE_H

#include<iostream>
#include<string>
using namespace std;

class Duree
{
    public:
        Duree(int heures=0, int minutes=0, int secondes=0);

    Duree& operator+=(const Duree &duree);
    Duree& operator-=(const Duree &duree);
    void afficher() const;
    friend ostream& operator<<(ostream& os, const Duree& duree);
    protected:

    private:
       int m_heures;
       int m_minutes;
       int m_secondes;
};

Duree operator+(Duree const& a, Duree const& b);
Duree operator-(Duree const& a, Duree const& b);
#endif // DUREE_H
