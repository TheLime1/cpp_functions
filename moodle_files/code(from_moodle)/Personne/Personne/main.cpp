#include <iostream>
#include "personne.h"
#include "etudiant.h"
#include <vector>

using namespace std;


void affichage(Personne const Perso)
{
    Perso.afficher();
}

int main()
{
    //1

    /*Personne P;
    Etudiant E(9463798,"Anas","hidri","2P1",16);

    P=E;*/



    //2
   /* Personne P;
    Etudiant E(9463798,"Anas","hidri","2P1",16);

    E=P;*/


    //3
    /*Personne P;
    Etudiant E;

    Personne* ptrPerso = &P;

    ptrPerso = &E;*/


    //4

   /* Personne P;
    Etudiant E;
    Etudiant* ptrEtd = &P;*/


    //5 résolution statique

    /*Personne P;
    Etudiant E(9463798,"Anas","hidri","2P1",16);

    P=E;

    cout<<"################################"<<endl;
    P.afficher();*/


   //6 résolution dynamique ?

  /* Etudiant E(9463798,"Anas","hidri","2P1",16);
       Personne& P =E;
    cout<<"################################"<<endl;
    P.afficher(); // afficher doit être virtual*/


   //7 destructeur

    /*Personne * P = new Etudiant();
    delete P;*/

   //8 collection d'objets
    /*Personne P;
    Etudiant E(9463798,"Anas","hidri","2P1",16);

    vector <Personne> tabPerso;

    tabPerso.push_back(P);

    tabPerso.push_back(E);

    for(vector <Personne>::iterator it=tabPerso.begin(); it!=tabPerso.end(); it++)
    {
        affichage(*it);
        cout<<"################################"<<endl;

    }*/


    //9 collection d'objets polymorphes

    /*Personne P;
    Etudiant E(9463798,"Anas","hidri","2P1",16);

    vector <Personne*> tabPerso;

    tabPerso.push_back(&P);//&

    tabPerso.push_back(&E);//&

    for(vector <Personne*>::iterator it=tabPerso.begin(); it!=tabPerso.end(); it++)
    {
       // affichage(**it);//1- il faut que la methode afficher soit virtual pour avoir la resolution dynamique

         (**it).afficher();                     //2- affichage doit prendre une reference &
        cout<<"################################"<<endl;

    }*/


    //10

    /*Personne P;
    Etudiant E;

    affichage(E); // si affichage prend une & et la methode afficher est virtual => résolution dynamique sinon statique
    */

   return 0;


}
