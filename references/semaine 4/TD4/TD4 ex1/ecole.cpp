#include"ecole.h"
#include<vector>

Ecole::Ecole()
{

}
Ecole::~Ecole(){}
void Ecole::ajouter(Etudiant e)
{
    if(chercherEtudiant(e.getCIN())==v.end())
        v.push_back(e);
}
void Ecole::afficher()
{
    vector<Etudiant>::iterator it;
    for(it=v.begin()  ; it!=v.end() ; ++it)
    {
        (*it).afficher();
    }
}
vector<Etudiant>::iterator Ecole::chercherEtudiant(int id)
{

    vector<Etudiant>::iterator it;
    for(it=v.begin()  ; it!=v.end() ; ++it)
    {
        if((*it).getCIN()==id)
            return it;
    }
    return v.end();
}
void Ecole::supprimerEtudiant(int id)
{
    if(chercherEtudiant(id)!=v.end())
        v.erase(chercherEtudiant(id));

}
void Ecole::chercherAfficherClasse(string c)
{
    vector<Etudiant>::iterator it;
    for(it=v.begin()  ; it!=v.end() ; ++it)
        if(it->getClasse()==c)
        (*it).afficher();
}
