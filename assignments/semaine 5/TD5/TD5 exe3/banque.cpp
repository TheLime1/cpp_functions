#include "banque.h"
#include <vector>
#include "compte.h"
#include <iostream>

Banque::Banque()
{
    nom="";
    lieu="";
}
Banque::Banque(string a,string b)
    {
        nom=a;
        lieu=b;
    }


vector<Compte*>::iterator Banque::cherchercompte(float a)
{
    vector<Compte*>::iterator it;
    for(it=T.begin();it!=T.end();it++)
    {
        if((*it)->getRib()==a)
        {
            return it;
        }
    }

    return T.end();
}

 void Banque::ajouter(const Epargne &e )
 {

     if(cherchercompte(e.getRib())==T.end())
     {
         Compte* p=new Epargne(e);
         T.push_back(p);
     }

 }
 void Banque::ajouter(const Courant &e )
 {

     if(cherchercompte(e.getRib())==T.end())
     {
         Compte* p=new Courant(e);
         T.push_back(p);
     }
 }

 void Banque::afficher()
 {
     cout<<"Nom: "<<nom<<endl<<"Lieu: "<<lieu<<endl;
      vector<Compte*>::iterator it;
    for(it=T.begin();it!=T.end();it++)
    {
        (*it)->afficher();
    }
 }
void Banque::supprimer(float a)
{
    vector<Compte*>::iterator it;
    it=cherchercompte(a);
    if(it!=T.end())
    {
        T.erase(it);
    }
}


Banque::~Banque()
{
    vector<Compte*>::iterator it;
    for(it=T.begin();it!=T.end();it++)
        delete(*it);
}



Banque::Banque(const Banque& x)/redefinition par copie/
{
     vector<Compte*>::const_iterator it;
     Compte *p;
    for(it=x.T.begin();it!=x.T.end();it++)
    {
        if(typeid(**it)==typeid(Epargne))
            p=new Epargne(static_cast<const Epargne &>(**it));
        else
            p=new Courant(static_cast<const Courant &>(**it));
        T.push_back(p);
    }
}
Banque& Banque::operator=(const Banque& x)
{
    vector<Compte*>::const_iterator it1;
    for(it1=T.begin();it1!=T.end();it1++)
        delete(*it1);
    vector<Compte*>::const_iterator it;
    Compte *p;
    for(it=x.T.begin();it!=x.T.end();it++)
    {
        if(typeid(**it)==typeid(Epargne))
            p=new Epargne(static_cast<const Epargne&>(**it));
        else
            p=new Courant(static_cast<const Courant&>(**it));
        T.push_back(p);
    }
    return *this;
}





