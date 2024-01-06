#include "livre.h"

Livre::Livre():Ouvrage()
{
    auteur="";
}

Livre::Livre(string titre,string date,bool exist,string auteur):Ouvrage( titre, date, exist)
{
    this->auteur=auteur;
}

void Livre::afficher()const
{
    Ouvrage::afficher();
    cout<<"l\auteur est : "<<auteur<<endl;
}
