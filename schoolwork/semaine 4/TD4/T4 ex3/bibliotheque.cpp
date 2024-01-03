#include"bibliotheque.h"
void Biblio::afficher()
{
    list <Ouvrage>::iterator it;
    for (it=l.begin();it!=l.end();it++)
    {
        it->afficher();
    }
}
float Biblio::prixTotal()
{
    float s=0;
    list <Ouvrage>::iterator it;
    for (it=l.begin();it!=l.end();it++)
    {
        s+=it-> totalOuvrage();
    }
    return s;
}
list<Ouvrage>::iterator Biblio::recherche(int s)
{
    list <Ouvrage>::iterator it;
    for (it=l.begin();it!=l.end();it++)
    {
        if(it->getCode()==s)
            return it;
    }
    return l.end();
}
void Biblio::ajouter(Ouvrage o)
{
    if (recherche(o.getCode())==l.end())
    {
        l.push_back(o);
    }
}
void Biblio::diminuer(int code,int n)
{
    list <Ouvrage>::iterator it;
    it=recherche(code);
    if(it!=l.end())
    {
        if(it->getNbrExp()>=n)
        it->setNbeExp(it->getNbrExp()-n);
    }
}
void Biblio::augmenter(int code,int n)
{
    list <Ouvrage>::iterator it;
    it=recherche(code);
    if(it!=l.end())
    {

        it->setNbeExp(it->getNbrExp()+n);
    }
}
