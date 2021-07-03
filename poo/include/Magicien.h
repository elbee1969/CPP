#ifndef MAGICIEN_H
#define MAGICIEN_H
#include <iostream>
#include <string>
#include <Personnage.h>


class Magicien : public Personnage
{
public:
    Magicien(std::string nom);
    void sortFeu(Personnage &cible);
    void sortGuerrison(Personnage &cible);
protected:

private:
    int m_vie;
    int m_mana;
};

#endif // MAGICIEN_H
