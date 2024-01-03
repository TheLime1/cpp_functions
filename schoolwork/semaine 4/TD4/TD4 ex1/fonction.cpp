#include"header.h"
Etudiant::Etudiant()
{
    CIN=0;
    nom="";
    adresse="";
    classe="";
    date="";
}
Etudiant::Etudiant(int a,string b,string c,string d,string e)
{
    CIN=a;
    nom=b;
    adresse=c;
    classe=d;
    date=e;
}

Etudiant::~Etudiant(){}
void Etudiant::afficher()
{
    cout<<"nom="<<nom<<endl;
    cout<<"adresse="<<adresse<<endl;
    cout<<"classe="<<classe<<endl;
    cout<<"date="<<date<<endl;
    cout<<"CIN="<<CIN<<endl;

}
int Etudiant::getCIN()
{
    return CIN;
}
string Etudiant::getClasse()
{
    return classe;
}
