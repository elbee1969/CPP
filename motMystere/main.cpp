#include <iostream>
#include <string>
#include<ctime>
#include<cstdlib>"
using namespace std;

int main()
{
    string motOrigine, motUser, motMystere;
    int nbAlea(0), taille, taille1;
    srand(time(0));
    cout << "Saisissez un mot" << endl;
    cin >> motOrigine;
    cout << "mot a decouvrir : " << motOrigine << endl;
    cout << "son adresse est : " << &motOrigine << endl;
    taille = motOrigine.size();
    nbAlea = rand() % taille;


    for (int i(0); i < taille; i++) {
        taille1 = taille - i;
        if(nbAlea !=0){
            nbAlea-=1;
        }else{

        }
        cout << "taille du mot : " << taille1 << " + nbaleat : " << nbAlea << endl;
        cout << "nb alea : " << motOrigine[nbAlea] << endl;
        motMystere.push_back(motOrigine[nbAlea]);

        motOrigine.erase(nbAlea, 1);
        cout << "mot origine : " << motOrigine << endl;
        srand(time(0));
        nbAlea = (rand() % taille1);
    }

    cout << "mot mystere : " << motMystere << endl;

    do {
        cout << "devinez le mot : ";
        cin >> motUser;
        if (motMystere != motUser)
            cout << "try again" << endl;
    } while (motMystere != motUser);
    cout << "bravo";


    return 0;
}
