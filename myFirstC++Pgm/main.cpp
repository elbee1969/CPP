#include <iostream>
#include<string>
#include "math.h"
#include<cmath>
#include<vector>
#include<fstream>
using namespace std;
/*
int ajouteDeux(int nbr){
int valeur(nbr+2);
return valeur;
}
void dessineRectangle(int l, int h, string s){
    if(l < 0 || h < 0){
            cout << "calcul impossible, l et h doivent etre positif !" << endl;

    }else{
        for(int ligne(0); ligne < h; ligne++)
        {
            for(int hauteur(0); hauteur < l; hauteur++)
            {
                cout << s;
            }
            cout << endl;
        }

    }

}


 void echangeRef(double& f, double& g)
{
    double temporaire(f); //On sauvegarde la valeur de 'a'
    f = g;                //On remplace la valeur de 'a' par celle de 'b'
    g = temporaire;       //Et on utilise la valeur sauvegardée pour mettre l'ancienne valeur de 'a' dans 'b'
    cout << "f:" << f << "g:" << g << "temp:" << temporaire <<endl;
}
 void echange(double f, double g)
{
    double temporaire(f); //On sauvegarde la valeur de 'a'
    f = g;                //On remplace la valeur de 'a' par celle de 'b'
    g = temporaire;       //Et on utilise la valeur sauvegardée pour mettre l'ancienne valeur de 'a' dans 'b'
        cout << "f:" << f << "g:" << g << "temp:" << temporaire <<endl;
}
*/
int main()
{
/*
    double a(0),b(0);
    int c(14),d(3),e;
    string nom("");
    cout << "Faisons maintenant des operations" << endl;
    cout << "saisir le premier nombre : ";
    cin >> a;
    cout << "saisir le deuxieme nombre : ";
    cin >> b;
    cin.ignore();
    cout << "Nom ?!" << endl;
    getline(cin, nom);
    double const addition(a+b);
    double const soustraction(a-b);
    double const division(a/b);
    double const multiplication(a*b);
    int const modulo(c%d);
    double const power(pow(a,b));
    double const square(sqrt(power));

    cout << "le resultat de " << a <<" + " << b << " est : " << addition << endl;
    cout << "le resultat de " << a <<" - " << b << " est : " << soustraction << endl;
    cout << "le resultat de " << a <<" / " << b << " est : " << division << endl;
    cout << "le resultat de " << a <<" X " << b << " est : " << multiplication << endl;
    cout << "le resultat de " << a <<" % " << b << " est : " << modulo << endl;
    cout << nom << " le resultat de " << a <<" exposant " << b << " est : " << power << endl;
    cout << "le resultat de racine carree " << power << " est : " << square << endl;
    if(c%2 == 0){
        cout << c << " est pair" << endl;
    } else {
        cout << c << " est impaire" << endl;
    }

    e = ajouteDeux(c);
    cout << c << " + deux = "<< e <<endl;
    int l, h;
    string s;
    cout << "dessinons un rectangle" << endl;
    cout << "Longueur : ? ";
    cin >> l;
    cout << "hauteur : ? ";
    cin >> h;
    cin.ignore();
    cout << "symbole : ? ";
    cin >> s;
    dessineRectangle(l,h,s);



    double f(1.2), g(4.5);

    cout << "f vaut " << f << " et g vaut " << g << endl;

    echange(f,g);   //On utilise la fonction

    cout << "echange f vaut " << f << " et g vaut " << g << endl;

    cout << "f vaut " << f << " et g vaut " << g << endl;

    echangeRef(f,g);   //On utilise la fonction

    cout << "echangeRef f vaut " << f << " et g vaut " << g << endl;
    */
 int a(2),b(2);
    cout << "Valeur de a : " << a << endl;
    cout << "Valeur de b : " << b << endl;
    b = ajouteDeux(a);                     //Appel de la fonction
    cout << "Valeur de a : " << a << endl;
    cout << "Valeur de b : " << b << endl;

int h, m, s;
cout << "Heure(s) ";
cin >> h ;
cout << "min(s) ";
cin >> m ;
cout << "sec(s) ";
cin >> s ;

    cout << h << " heure(s) + "<< m << " minute(s) + "<< s << " seconde(s) font  : " << nombreDeSecondes(h, m, s) << " secondes" <<endl;

    int const nbrNotes(6);
    double notes[nbrNotes];
    notes[0]= 12.5;
    notes[1]= 17;
    notes[2]= 18.5;
    notes[3]= 9;
    notes[4]= 13.25;
    notes[5] = 16.5;

    /*
    double totalNotes(0);
    for (int i(0); i <nbrNotes; i++){
        cout << notes[i] << endl;
        totalNotes += notes[i];
    }
    double moyenne = totalNotes/nbrNotes;
    cout << "moyenne : " << moyenne << endl;
    */
    cout << "moyenne : " << moyenne(notes,nbrNotes) << endl;



    vector<double> mesNotes;
    mesNotes.push_back(20);
    mesNotes.push_back(15);
    mesNotes.push_back(12);
    mesNotes.push_back(13.25);
    mesNotes.push_back(14.5);
    mesNotes.push_back(14.75);



 cout << "moyenneVector : " << moyenneVector(mesNotes) << endl;


string const monFichier("D:/C++/fichiers/moyennes.txt");
 //ofstream monFluxOpen(monFichier.c_str(), ios::app);
 ofstream monFluxOpen(monFichier.c_str());

if(monFluxOpen){
     monFluxOpen << "Bonjour, je suis une phrase écrite dans un fichier." << endl;
        monFluxOpen << 42.1337 << endl;
        int age(23);
        monFluxOpen << "J'ai " << age << " ans." << endl;
        monFluxOpen << "moyenneVector : " << moyenneVector(mesNotes) << endl;
} else {
cout << "ERREUR, impossible d'ouvrir le fichier" << endl;
}

int position = monFluxOpen.tellp(); //On récupére la position

cout << "Nous nous situons au " << position << "eme caractere du fichier." << endl;

ifstream monFluxRead(monFichier);
if(monFluxRead){
    cout << "ok" <<endl;
    string ligne;
    while(getline(monFluxRead,ligne)){

    cout << ligne << endl;
    };
   }else{
cout << "ERREUR, impossible de lire le fichier" << endl;
}


ifstream fic("D:/C++/fichiers/moyennes.txt");
fic.seekg(0,ios::end);
int taille;
taille = fic.tellg();
cout << "fic size : " << taille << "octets" << endl;


    return 0;
}
