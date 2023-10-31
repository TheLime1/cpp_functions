#include"etudiant.h"
Etudiant::Etudiant()
{
     nom="";
     prenom="";
     classe="";
     date="";
     id=0;
}
Etudiant::Etudiant(string n,string p,string c,string d,int i)
{
    nom=n;
    prenom=p;
    classe=c;
    date=d;
    id=i;
}
void Etudiant::afficher()
{
    cout<<"nom "<<nom<<endl<<"prenom "<<prenom<<endl<<"date "<<date<<endl<<"classe "<<classe<<endl<<"id "<<id;
}
int Etudiant::get()
{
    return id;
}
string Etudiant::getclasse()
{
    return classe;
}
