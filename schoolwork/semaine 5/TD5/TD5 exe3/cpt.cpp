#include "compte.h"
#include <iostream>
#include <string>


Compte::Compte()
{
    rib=0;
    solde=0;
}

Compte::Compte(float a,float b)
{
    rib=a;
    solde=b;
}

void Compte::deposer(float a)
{
    solde=solde+a;
}

void Compte::retirer(float a)
{
    solde=solde-a;
}

void Compte::afficher()
{
    cout<<"Rib="<<rib<<endl<<"Solde="<<solde<<endl;
}

