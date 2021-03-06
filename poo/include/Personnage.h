#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include <string>
#include "Arme.h"

class Personnage
{
    // Propri?t?s
protected :
    std::string m_nom;
    std::string m_role;
    int m_vie;
    int m_mana;
    Arme *m_arme;
private :
    // M?thodes
    static int compteur;
public:
    // constructeur par d?faut
    Personnage(std::string nom);

    ~Personnage();
    static int nbrInstances();
    // constructeur pour surcharcher arme
    Personnage(std::string nom, std::string nomArme, int degatsArme);

    Personnage(std::string nom, int vie, int mana);

    void recevoirDegats(int nbDegats);

    void attaquer(Personnage &cible);
    void boxer(Personnage &cible);
    void boirePotionDeVie(int quantitePotion);

    void boirePotionDeMana(int quantitePotion);

    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);

    void changerStatus(std::string status);

    bool estVivant() const;

    int getVie();
    void afficherEtat() const;


};
#endif // PERSONNAGE_H_INCLUDED


