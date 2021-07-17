#ifndef VOITURE_H
#define VOITURE_H

#include <Vehicule.h>


class Voiture : public Vehicule
{
    public:
        Voiture(int m_porte);
        virtual ~Voiture();

    protected:

    private:
};

#endif // VOITURE_H
