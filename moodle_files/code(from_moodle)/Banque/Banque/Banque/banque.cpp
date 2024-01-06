#include "banque.h"
#include<typeinfo>

Banque::Banque()
{
    nom="";
    lieu="";
    cout<<"je suis le CONSTRUCTEUR de la classe BANQUE"<<endl;
}

vector <Compte*>::iterator Banque::rechercher (long RIB)
{
    vector <Compte*>::iterator i ;

    for(i=tab.begin(); i!=tab.end(); i++)
    {
        if((**i).GetRIB()==RIB)
        {
            return i;
        }
    }

    return tab.end();
}

bool Banque::ajouter (Compte const & C)
{
    if (rechercher(C.GetRIB())!=tab.end())
    {
        return false;
    }

    Compte *p=new Compte(C);
    tab.push_back(p);


    return true;
}

bool Banque::ajouter (CompteCourant const & C)
{
    if (rechercher(C.GetRIB())!=tab.end())
    {
        return false;
    }

    Compte *p=new CompteCourant(C);
    tab.push_back(p);

    return true;

}

bool Banque::ajouter (CompteEpargne const & C)
{
    if (rechercher(C.GetRIB())!=tab.end())
    {
        return false;
    }

    Compte *p=new CompteEpargne(C);
    tab.push_back(p);

    return true;
}


void Banque::afficher()
{
    vector <Compte*>::iterator i ;

    for(i=tab.begin(); i!=tab.end(); i++)
    {

        (*i)->afficher();
        //    (**i).afficher();
    }

}


Banque::~Banque()
{
    cout<<endl;
    cout<<"######################################################"<<endl;
    cout<<"je suis le destructeur de la classe Banque"<<endl;

    vector <Compte*>::iterator i ;

    for(i=tab.begin(); i!=tab.end(); i++)
    {
        delete (*i);
    }
    cout<<endl;
    cout<<"======================================================"<<endl;

}


bool Banque::modifier (long RIB)const

{
    vector <Compte*>::const_iterator i ;

    for(i=tab.begin(); i!=tab.end(); i++)
    {
        if((**i).GetRIB()== RIB)
        {
            (**i).Setsolde(55555);
            return true;
        }
    }
    return false;
}


Banque::Banque(const Banque&B)
{
    Compte*p;
    for(vector<Compte*>::const_iterator i=B.tab.begin(); i != B.tab.end(); i++)
    {
        if(typeid(**i)==typeid(Compte))
        {
            p=new Compte(**i);
        }
        else if(typeid(**i)==typeid(CompteEpargne))
        {
            p=new CompteEpargne(static_cast<const CompteEpargne&>(**i));
        }
        else
        {
            p=new CompteCourant(static_cast<const CompteCourant&>(**i));
        }
        tab.push_back(p);

    }

}

Banque& Banque::operator=(const Banque &B)
{
    if(&B!=this)
    {
        vector <Compte*>::iterator i ;
        for(i=tab.begin(); i!=tab.end(); i++)
        {
            delete (*i);
        }
        tab.clear();

        Compte*p;
        for(vector<Compte*>::const_iterator i=B.tab.begin(); i != B.tab.end(); i++)
        {
            if(typeid(**i)==typeid(Compte))
            {
                p=new Compte(**i);
            }
            else if(typeid(**i)==typeid(CompteEpargne))
            {
                p=new CompteEpargne(static_cast<const CompteEpargne&>(**i));
            }
            else
                p=new CompteCourant(static_cast<const CompteCourant&>(**i));
            tab.push_back(p);
        }
    }
    return* this;
}



