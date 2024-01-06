#include "ouvrage.h"

Ouvrage::Ouvrage(string titre,string date,bool exist)
{
   this->titre=titre;
   this->date=date;
   this->exist=exist;
}
void Ouvrage::afficher()const
{
    cout<<"le titre est : "<<titre<<endl;
    cout<<"la date de creation est : "<<date<<endl;
    if(exist){
       cout<<"l\'ouvrage est bien disponible"<<endl;
    }else{
       cout<<"l\'ouvrage est non disponible"<<endl;
    }
}
