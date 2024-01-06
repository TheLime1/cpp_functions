#include<typeinfo>
#include "bibliotheque.h"
using namespace std;


bool Bibliotheque::ajouter(const Abonne& A)
{
    if(get_abonne(A.get_id())!=tabA.end())
        return false;

    tabA.push_back(A);
    return true;
}

bool Bibliotheque::ajouter(const Ouvrage& O)
{
    if(get_ouvrage(O.get_titre())==tabOuv.end())
    {
        Ouvrage *p=new Ouvrage(O);
        tabOuv.push_back(p);
        return true;
    }
return false;
}


bool Bibliotheque::ajouter(const Livre& O)
{
    if(get_ouvrage(O.get_titre())==tabOuv.end())
    {
        Ouvrage *p=new Livre(O);
        tabOuv.push_back(p);
        return true;
    }
return false;
}


bool Bibliotheque::ajouter(const Video& O)
{
    if(get_ouvrage(O.get_titre())==tabOuv.end())
    {
        Ouvrage *p=new Video(O);
        tabOuv.push_back(p);
        return true;
    }
return false;
}

vector<Ouvrage*>::iterator Bibliotheque::get_ouvrage(string titre)
{
    for(vector<Ouvrage*>::iterator i=tabOuv.begin();i != tabOuv.end();i++)
    {
        if ((*i)->get_titre()==titre){
            return i;
        }
    }
    return tabOuv.end();
}

vector<Abonne>::iterator Bibliotheque::get_abonne(long id)
{
    for(vector<Abonne>::iterator i=tabA.begin();i<tabA.end();i++)
    {
        if (i->get_id()==id){
            return i;
        }
    }
    return tabA.end();
}


bool Bibliotheque::emprunter(string titre,long id)
{
    vector<Ouvrage*>::iterator ind1=get_ouvrage(titre);
    vector<Abonne>::iterator ind2=get_abonne(id);
    if(ind1==tabOuv.end() ||ind2==tabA.end()){
        return false;
    }

    if((*ind1)->get_exist()==false ||ind2->get_emprunt()!=""){
        return false;
    }

    ind2->set_emprunt(titre);
    (*ind1)->set_exist(false);
    return true;

}

bool Bibliotheque::rendre(long id)
{

    vector<Abonne>::iterator ind2=get_abonne(id);
    if(ind2==tabA.end()){
        return false;
    }

    vector<Ouvrage*>::iterator ind1=get_ouvrage(ind2->get_emprunt());
    if(ind1==tabOuv.end() ){
        return false;
    }

    ind2->set_emprunt("");
    (*ind1)->set_exist(true);
    return true;
}

void Bibliotheque :: info()
{
    for(vector<Ouvrage*>::iterator i=tabOuv.begin();i != tabOuv.end();i++)
    {
        if((*i)->get_exist() == true)
        {
            (*i)->afficher();
        }
    }
    for(vector<Abonne>::iterator j=tabA.begin();j<tabA.end();j++)
    {
        if(j->get_emprunt() != "")
        {
            j->afficher();
        }
    }
}


void Bibliotheque :: afficher_auteur(string auteur)
{
    Livre *q;
    for(vector<Ouvrage*>::iterator i=tabOuv.begin();i != tabOuv.end();i++)
        {
            if(typeid(**i)==typeid(Livre)){
                q=(Livre *) (*i);
                if(q->get_auteur()==auteur)
                {
                    q->afficher();
                }
            }
        }
}


Bibliotheque::~Bibliotheque()
{
    for(vector<Ouvrage*>::iterator i=tabOuv.begin();i != tabOuv.end();i++)
    {
        delete (*i);
    }
}
Bibliotheque::Bibliotheque(const Bibliotheque&B)
{
    Ouvrage*p;
    tabA=B.tabA;
    for(vector<Ouvrage*>::const_iterator i=B.tabOuv.begin(); i != B.tabOuv.end();i++)
    {
        if(typeid(**i)==typeid(Ouvrage)){
            p=new Ouvrage(**i);
        }else if(typeid(**i)==typeid(Video)){
            p=new Video(static_cast<const Video&>(**i));
        }else{
            p=new Livre(static_cast<const Livre&>(**i));
        }
        tabOuv.push_back(p);

    }

}

Bibliotheque& Bibliotheque::operator=(const Bibliotheque &B)
{
    if(&B!=this)
    {
        for(vector<Ouvrage*>::iterator j=tabOuv.begin();j != tabOuv.end();j++)
        {
            delete (*j);
        }
        tabA.clear();
        tabA=B.tabA;
        Ouvrage*p;
        for(vector<Ouvrage*>::const_iterator i=B.tabOuv.begin(); i != B.tabOuv.end();i++)
        {
            if(typeid(**i)==typeid(Ouvrage)){
                p=new Ouvrage(**i);
            }else if(typeid(**i)==typeid(Video)){
                p=new Video(static_cast<const Video&>(**i));
            }else{
                p=new Livre(static_cast<const Livre&>(**i));
            }
            tabOuv.push_back(p);
        }

    }
    return* this;
}

