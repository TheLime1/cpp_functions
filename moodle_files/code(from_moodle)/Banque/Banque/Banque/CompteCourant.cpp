#include "CompteCourant.h"
#include <iostream>

using namespace std;

CompteCourant::CompteCourant()
{
    //ctor
   // seuil = -500;
}

CompteCourant::CompteCourant(long RIB,double solde) : Compte(RIB,solde)
{
    cout<<"je suis le CONSTRUCTEUR de la classe Compte Courant"<<endl;
   // this->seuil = seuil;
}

CompteCourant::~CompteCourant()
{
    cout<<"je suis le destructeur de la classe Compte Courant"<<endl;
}
bool CompteCourant::retirer(double montant)
{
    if(solde - montant >= -500)
    {
        solde -= montant;
        return true;
    }
    return false;
}

void CompteCourant::afficher() const //redéfinition
{
    Compte::afficher(); // appel à la methode afficher de la classe mére
   // cout << "Seuil : " << seuil << endl;
}

