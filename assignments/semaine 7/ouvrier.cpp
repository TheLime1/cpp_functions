#include"ouvrier.h"
#include <iostream>
Ouvrier::Ouvrier()
{
    heursupp=0;
}
Ouvrier::Ouvrier(string a,string b,float c,int d):Employe(a,b,c)
{
    heursupp=d;
}
void Ouvrier::afficher()
{
    Employe::afficher();
    cout<<heursupp;
}
