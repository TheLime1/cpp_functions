#include"ecole.h"
void Ecole::ajouter(Etudiant e)
{
    if(chercherEtudiant(e.get())==v.end())
        v.push_back(e);
}
void Ecole::afficher()
{
    vector<Etudiant>::iterator it;
    for(it=v.begin();it!=v.end();it++)
        it->afficher();
}
vector<Etudiant>::iterator Ecole::chercherEtudiant(int n)
{
    vector<Etudiant>::iterator it=v.begin();
    while(it!=v.end())
    {
        if(it->get()==n)
            return it;
        else
            it++;
    }
    return v.end();
}
void Ecole::supprimer(int n)
{
    if(chercherEtudiant(n)!=v.end())
    {
        v.erase(chercherEtudiant(n));
    }
}
void Ecole::chercherAfficherclasse(string c)
{
    vector<Etudiant>::iterator it;
    for(it=v.begin();it!=v.end();it++)
        if(it->getclasse()==c)
        it->afficher();
}
