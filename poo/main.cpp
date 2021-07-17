#include <iostream>
#include "Personnage.h"
#include "Guerrier.h"
#include "Magicien.h"

#include <string>


using namespace std;



int main()
{


    Personnage *monTruc(0);
Arme *monBidule = new Arme();

monTruc = monBidule;



    //Création des personnages
    Guerrier kharahk("Kharahk");
    kharahk.changerArme("Double hache tranchante vénéneuse de la mort", 50);
    Magicien merlin("Merlin");
    Personnage mike("Mike");
    Personnage david("David"), goliath("Goliath","Épée aiguisée", 20);

    cout << "Kharahk" <<  endl;
    kharahk.afficherEtat();
    cout << "Merlin" <<  endl;
    merlin.afficherEtat();
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
    cout << "guerrison Merlin" << endl;
    merlin.sortGuerrison(david);
    cout << "David final state" << endl;
    david.afficherEtat();
    cout << "guerrison Merlin" << endl;
    merlin.sortGuerrison(david);
    cout << "David final state" << endl;
    david.afficherEtat();
    cout << endl << "Goliath final state" << endl;
    goliath.afficherEtat();

    cout << "il y a : " << Personnage::nbrInstances()<< " personnages present" << endl;

    return 0;
}

