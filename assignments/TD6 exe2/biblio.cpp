#include"biblio.h"
Biblio::~Biblio()
{
    vector<Compte*>::iterator it;
    for(it=V1.begin();it!=V1.end();it++)
        delete(*it);
}
Biblio::Biblio(const Biblio & x)
{
    vector<Compte*>::const_iterator it;
    Biblio *b;
    for(it=x.V1.begin();it!=x.V1.end();it++)
    {
        if(typeid(**it)==typeid(Livre))
            p=new Livre(static_cast<const Livre &>(**it));
        else
            p=new Video(static_cast<const video &>(**it));
        V.push_back(b);
    }
}
Biblio Biblio::operator=(const Biblio & x)
{
    vector<Compte*>::iterator it;
    for(it=V1.begin();it!=V1.end();it++)
        delete(*it);
    vector<Compte*>::const_iterator it;
    Biblio *b;
    for(it=x.V1.begin();it!=x.V1.end();it++)
    {
        if(typeid(**it)==typeid(Livre))
            p=new Livre(static_cast<const Livre &>(**it));
        else
            p=new Video(static_cast<const video &>(**it));
        V.push_back(b);
    }
}
vector<Ouvrage*>::iterator Biblio::chercherOuvrage(string a)
{

}
void Biblio::ajouter(const Livre & x)
{

}
void Biblio::ajouter(const Video &x)
{

}
void Biblio::supprimer(string a)
{

}
vector<Abonne>::iterator Biblio::chercherAbonne(int b)
{

}
void Biblio::ajouter(const Abonne & x)
{

}
void Biblio::emprunter(string a,int b)
{

}
void Biblio::rende(int a)
{

}
void Biblio::afficher()
{

}
void Biblio::livreAuteur(string a);
