#ifndef GUERRIER_H
#define GUERRIER_H
#include <iostream>
#include <string>
#include "Personnage.h"
#include "Arme.h"


class Guerrier : public Personnage
{
private:
int m_vie;
int m_mana;

public:
    Guerrier(std::string nom);
};

#endif // GUERRIER_H
