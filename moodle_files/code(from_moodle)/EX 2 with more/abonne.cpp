#include "abonne.h"

Abonne::Abonne(long I,string N,long Num,string emp)
{
    id=I;
    nom=N;
    numero=Num;
    emprunt=emp;
}

void Abonne::afficher()const
{
    cout<<"l\'ID de l'abonne est : "<<id<<endl;
    cout<<"le nom de l\'abonne est : "<<nom<<endl;
    cout<<"le numero de l\'abonne est : "<<numero<<endl;
    cout<<"l\'emprunt de l\'abonne est : "<<emprunt<<endl;
}

