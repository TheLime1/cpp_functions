#include "Universite.h"

Universite::Universite()
{
 nomUniversite="";
}
Universite::Universite(string nomUniversite)
{
 this->nomUniversite=nomUniversite;
}
Universite::~Universite()
{vector<Enseignant*>::iterator i;
    for(i=LE.begin();i!=LE.end();i++)
        delete(*i);
}

Universite::Universite(const Universite& a)
{   this->nomUniversite=a.nomUniversite;
    Enseignant* p;
    vector<Enseignant*>::const_iterator i;
    for(i=a.LE.begin();i!=a.LE.end();i++)
    {
        if(typeid(**i)==typeid(Enseignant))
            p=new Enseignant(**i);
        else
            if(typeid(**i)==typeid(Expert))
                p=new Expert(static_cast<const Expert&>(**i));
    }
    LE.push_back(p);
}
Universite& Universite::operator=(const Universite& a)
{
    if(&a!=this)
    {
    vector<Enseignant*>::iterator i;
    for(i=LE.begin();i!=LE.end();i++)
        delete(*i);
	LE.clear();
	this->nomUniversite=a.nomUniversite;

    Enseignant* p;
    vector<Enseignant*>::const_iterator j;
    for(j=a.LE.begin();j!=a.LE.end();j++)
    {
        if(typeid(**j)==typeid(Enseignant))
            p=new Enseignant(**j);
        else
            if(typeid(**j)==typeid(Expert))
                p=new Expert(static_cast<const Expert&>(**j));
    }
    LE.push_back(p);
    }
    return *this;
}
vector<Enseignant*>::iterator Universite::rechercherEnseignant(int id)
{
    vector<Enseignant*>::iterator i;
    for(i=LE.begin();i!=LE.end();i++)
        if((*i)->getMatricule()==id)
            return i;
    return LE.end();
}
vector<Classe>::iterator  Universite::rechercherClasse(string id)
{
    vector<Classe>::iterator i;
    for(i=LC.begin();i!=LC.end();i++)
        if(i->getdesignation()==id)
            return i;
    return LC.end();
}
void Universite::ajouter(const Enseignant& e)
{
    if(rechercherEnseignant(e.getMatricule())==LE.end())
    {
        Enseignant *p=new Enseignant(e);
        LE.push_back(p);
    }
    else
        cout<<"L'enseignant(e) existe deja"<<endl;
}

void Universite::ajouter(const Expert& a)
{
    if(rechercherEnseignant(a.getMatricule())==LE.end())
    {
        Enseignant *p=new Expert(a);
        LE.push_back(p);
    }
    else
        cout<<"L'enseignant(e) expert existe deja"<<endl;
}
void Universite:: ajouter( Classe&c,int matricule){
    vector<Enseignant*>::iterator it=rechercherEnseignant(matricule);
   vector<Classe>::iterator it2 = rechercherClasse(c.getdesignation());
   try
    {
        if (it != LE.end() && it2==LC.end())
           {
            c.ajouterMatricule(matricule);
            LC.push_back(c);
            }

        else throw string("La classe existe deja ou L’enseignant n’existe pas.");
    }
    catch(string const& ch)
    {
        cerr<<ch<<endl;
    }
}
//////////////////////////////////6
void  Universite::AffichersommeT()

{   float totalcharge=0;
    vector<Enseignant*>::iterator it;
     for(it=LE.begin();it!=LE.end();it++)
     {
        totalcharge += (*it)->calculerSalaire();;
     }
     cout<< "la charge totale de payement de tous les enseignants est:"<< totalcharge<<endl;
}
////////////////////////////////////7
int Universite::NbrClasse(int matricule){
    int nbreClasse=0;
    vector<Classe>::iterator i;
    for(i=LC.begin();i!=LC.end();i++)
    {


        if(i->verifierEnseigMat(matricule)!= -1)
            nbreClasse++;
    }
             cout<< "le nombre de classes affectées à l'enseignant(e)"<< matricule<<"est"<< nbreClasse<<endl;

}
///////////////////////////////////////////////8


void Universite::AfficherEnseigMaxNbreHeureSup()

{
    vector<Enseignant*>::iterator i=LE.begin();
    vector<Enseignant*>::iterator j;
    for(j=LE.begin()+1;j!=LE.end();j++)
        {

         if((**j)>(**i))
            i=j;
        }
    (*i)->afficher();

}
//////////////////////////////////9
void Universite::enregistrer(string  entreprise)
{

string const fichier("ListeExpert.txt");
    ofstream flux(fichier.c_str());
    if(flux)
    {
        vector<Enseignant*>::iterator i;
        for(i=LE.begin();i!=LE.end();i++)
        if(typeid(**i)==typeid(Expert))
        {
            Expert* p=(Expert*)(*i);
            if(p->getEntreprise()== entreprise)
                    flux<<p->getNom()<<endl;
        }
    }
    else
    {
        cout<<"Impossible d'ouvrir le fichier"<<endl;
    }
    }
