#include "CompteEpargne.h"
#include <iostream>

using namespace std;

CompteEpargne::CompteEpargne()
{    cout<<"je suis le CONSTRUCTEUR de la classe Compte Epargne"<<endl;

    solde = 5;
    taux = 0;
    //ctor
}

CompteEpargne::~CompteEpargne()
{
    cout<<"je suis le destructeur de la classe Compte Epargne"<<endl;
}

void CompteEpargne::saisir()
{
    cout << "Donner le RIB " << endl;
    cin >> RIB;
    cout << "DOnner le taux " << endl;
    cin >> taux;

    do
    {
        cout << "Donner le solde " << endl;
        cin >> solde;
    }while(solde < 5);
}

void CompteEpargne::afficher() const
{
    Compte::afficher();
    cout << "taux : " << taux << endl ;
}

bool CompteEpargne::retirer(double montant)
{
    if(solde - montant >= 5)
    {
        solde -= montant;
        return true;
    }
    return false;
}

double CompteEpargne::calculInteret()
{
    return (solde + ((solde*taux)/100));
}

