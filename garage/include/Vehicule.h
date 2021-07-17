#ifndef VEHICULE_H
#define VEHICULE_H
#include <string>

using namespace std;

class Vehicule
{
    public:
        Vehicule(int m_nom, int m_prix, string m_couleur, string m_mororisation, string m_energie, int m_roues);
        virtual ~Vehicule();

    protected:

    private:
};

#endif // VEHICULE_H
