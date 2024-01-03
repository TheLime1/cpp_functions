#include "employe.h"
#include <iostream>
Employe::Employe()
{
    nom="";
    prenom="";
    salaire=0;
}
Employe::Employe(string a,string b,float c)
{
    nom=a;
    prenom=b;
    salaire=c;
}
void Employe::afficher()
{
    cout<<nom<<prenom<<salaire<<endl;
}
