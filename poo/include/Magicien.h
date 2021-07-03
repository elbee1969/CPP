#ifndef MAGICIEN_H
#define MAGICIEN_H

#include <Personnage.h>


class Magicien : public Personnage
{
public:
    Magicien(std::string nom);

protected:

private:
    int m_vie;
    int m_mana;
};

#endif // MAGICIEN_H
