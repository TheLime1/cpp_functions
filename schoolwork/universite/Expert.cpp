#include "Expert.h"
#include <iostream>

Expert::Expert():Enseignant()
{
    nomEntreprise="";
}
Expert::Expert(string nomE, string prenomE, int matricule, int nbreHeure,string nom):Enseignant(nomE,prenomE,matricule,nbreHeure)
{
    nomEntreprise=nom;
}
void Expert:: afficher(){

Enseignant::afficher();
cout<<"par le nom de l’entreprise: "<<nomEntreprise<<endl;
}
float Expert::calculerSalaire(){

return(nbreHeure*40);
}

Expert::~Expert()
{
    //dtor
}
