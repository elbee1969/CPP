// tpMotMystere.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
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
    taille = motOrigine.size();
    nbAlea = rand() % taille;


    for (int i(0); i < taille; i++) {
        taille1 = taille - i;
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
// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
