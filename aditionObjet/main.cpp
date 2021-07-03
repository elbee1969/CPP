#include <iostream>
#include "Duree.h"

using namespace std;

int main()
{
     Duree duree1(3, 10, 42), duree2(1, 53, 27), resultatP, resultatM;

    cout << "les durees utilisees sont : " <<duree1 << " et " << duree2 << endl;

    resultatP = duree1 + duree2;
      cout << duree1 << " + " << duree2 << " = " << resultatP << endl;

    resultatM = duree1 - duree2;
    cout << duree1 << " - " << duree2 << " = " << resultatM << endl;



    cout << "=" << endl;
    resultatM.afficher();


    return 0;
}
