#include <iostream>
#include "Personnage.h"
#include "Guerrier.h"
#include "Magicien.h"

#include <string>


using namespace std;



int main()
{
    //Création des personnages
    Guerrier guerrier("Kharahk");
    guerrier.changerArme("Double hache tranchante vénéneuse de la mort", 50);
    Magicien mage("Merlin");
    Personnage david("David"), goliath("Goliath","Épée aiguisée", 20);

    cout << "Kharahk" <<  endl;
    guerrier.afficherEtat();
    cout << "Merlin" <<  endl;
    mage.afficherEtat();
    cout << "David" << endl;
    david.afficherEtat();
    cout << endl << "Goliath" << endl;
    goliath.afficherEtat();
    cout << "GO FIGHT !!!" << endl;

    //Au combat !
    goliath.boxer(david);
    cout << "David after boxe shock" << endl;
    david.afficherEtat();
    goliath.attaquer(david);
    cout << "David after weapon shock" << endl;
    david.afficherEtat();
    david.boirePotionDeVie(20);
    cout << "David after potion" << endl;
    david.afficherEtat();
    goliath.attaquer(david);
    cout << "David after shock" << endl;
    david.afficherEtat();
    david.attaquer(goliath);
    cout << endl << "Goliath after shock" << endl;
    goliath.afficherEtat();
    goliath.changerArme("Double hache tranchante vénéneuse de la mort", 40);

    goliath.attaquer(david);
    cout << "David after shock" << endl;
    david.afficherEtat();
    //Temps mort ! Voyons voir la vie de chacun…
    cout << "David final state" << endl;
    david.afficherEtat();
    cout << endl << "Goliath final state" << endl;
    goliath.afficherEtat();

    return 0;
}

