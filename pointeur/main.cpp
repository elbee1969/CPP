#include <iostream>

using namespace std;

int main()
{

    cout << h << endl;
    cout << "Hello world!" << endl;
    int valeur(16);
    cout << "valeur = " << valeur <<endl;
    int *ptr(0);
    cout << "ptr : " << ptr << endl;
    ptr = &valeur;
    cout << "ptr : " << ptr << endl;
    cout << "ptr * : " << *ptr << endl;

    int *pointer(0);
    pointer = new int;
    cout << "pointer : " << pointer << endl;
    cout << "pointer * : " << *pointer << endl;
    cout << "test pointer * 4 :" << *pointer*4 << endl;
    *pointer = *ptr;
    cout << "pointer(ptr=16) : " << pointer << endl;
    cout << "*pointer(ptr=16)  : " << *pointer << endl;
    cout << "test *pointer * 4 :" << *pointer*4 << endl;
    delete pointer;
    pointer = 0;
    cout << "pointer : " << pointer << endl;
    cout << "*pointer exist no more " <<  endl;
    string reponseA, reponseB, reponseC;
    reponseA = "La peur des jeux de loterie";
    reponseB = "La peur du noir";
    reponseC = "La peur des vendredis treize";

    cout << "Qu'est-ce que la 'kenophobie' ? " << endl; //On pose la question
    cout << "A) " << reponseA << endl; //Et on affiche les trois propositions
    cout << "B) " << reponseB << endl;
    cout << "C) " << reponseC << endl;

    char reponse;
    cout << "Votre reponse (A,B ou C) : ";
    cin >> reponse; //On récupère la réponse de l'utilisateur

    string *reponseUtilisateur(0); //Un pointeur qui pointera sur la réponse choisie
    switch(reponse)
    {
    case 'A':
        reponseUtilisateur = &reponseA; //On déplace le pointeur sur la réponse choisie
        break;
    case 'B':
        reponseUtilisateur = &reponseB;
        break;
    case 'C':
        reponseUtilisateur = &reponseC;
        break;
    }

    //On peut alors utiliser le pointeur pour afficher la réponse choisie
    cout << "Vous avez choisi la reponse : " << *reponseUtilisateur << endl;


    return 0;
}
