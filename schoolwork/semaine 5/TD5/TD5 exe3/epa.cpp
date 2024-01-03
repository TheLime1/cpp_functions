#include "compte.h"
#include "cmpepargne.h"
#include <iostream>
#include <string>


 Epargne::Epargne()
 {
     taux=0;
 }

Epargne::Epargne(float a, float b,float c):Compte(a,b)
{
    taux=c;
}

float Epargne::calculer()
{
    return((solde*6)/100);
}

void Epargne::afficher()
{
    Compte::afficher();
    cout<<"solde du compte epargne="<<calculer()<<endl;
}

