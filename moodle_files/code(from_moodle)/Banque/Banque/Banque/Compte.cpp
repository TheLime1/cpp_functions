#include "Compte.h"
#include <iostream>

using namespace std;

Compte::Compte()
{
    cout<<"je suis le CONSTRUCTEUR de la classe Compte"<<endl;

    RIB = 0;
    solde= 0;
    //ctor
}

Compte::~Compte()
{
    cout<<"je suis le destructeur de la classe Compte"<<endl;
}

Compte::Compte(long RIB, double solde)
{
    cout<<"je suis le CONSTRUCTEUR de la classe Compte"<<endl;
    this->RIB = RIB;
    this->solde = solde;
}

void Compte::afficher() const
{
    cout << "RIB : " << RIB << endl;
    cout << "Solde : " << solde << endl;
}

void Compte::deposer(double somme)
{
    solde+=somme;
}

bool Compte::retirer(double montant)
{
    if(solde > montant)
    {
        solde-=montant;
        return true;
    }
    return false;
}

