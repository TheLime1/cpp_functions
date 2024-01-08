#include "Enseignant.h"
#include <iostream>

Enseignant::Enseignant()
{
   nomE= "";
   prenomE= "";
    matricule= 0;
    nbreHeure=0;
}
Enseignant::Enseignant(string nomE, string prenomE, int matricule, int nbreHeure)
{
   this->nomE= nomE;
   this->prenomE= prenomE;
    this->matricule=matricule;
    this->nbreHeure=nbreHeure;
}

Enseignant::~Enseignant()
{
    //dtor
}
 void Enseignant::afficher(){

 cout<<"Matricule : "<<matricule<<endl<<"Nom: "<<nomE<<endl<<"prenom: "<<prenomE<<endl<<"le nombre des heures assurees.: "<<nbreHeure<<endl;
 }

 float Enseignant::calculerSalaire()
 { if (nbreHeure>192)
     return (2000+((nbreHeure-192)*20));
     else
        return 2000;
 }

bool Enseignant::operator>(const Enseignant&E)
{
    if(this->nbreHeure>E.nbreHeure)
    return true;
    else return false;


}
