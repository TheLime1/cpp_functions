#include "bib.h"

void Biblo::afficher()
{
    list<Ouvrage>::iterator it;
    for (it = l.begin(); it != l.end(); it++)
    {
        it->afficher();
    }
}

float Biblo::prixtotal()
{
    float s;
    s = 0;

    list<Ouvrage>::iterator it;
    for (it = l.begin(); it != l.end(); it++)
    {
        s = s + it->totalouvrage();
    }

    return s;
}

list<Ouvrage>::iterator Biblo::rechercher(int a)
{

    list<Ouvrage>::iterator it;
    for (it = l.begin(); it != l.end(); it++)
    {
        if (it->getcode() == a)
        {
            return it;
        }
    }
    return l.end();
}

void Biblo::ajouter(Ouvrage o)
{
    if (rechercher(o.getcode()) == l.end())
    {
        l.push_back(o);
    }
}

void Biblo::diminuer(int codee, int n)
{
    list<Ouvrage>::iterator it;

    it = rechercher(codee);
    if (it != l.end())
    {
        if (it->getnbex() >= n)
        {
            it->setnbex(it->getnbex() - n);
        }
    }
}

void Biblo::augmenter(int codee, int n)
{
    list<Ouvrage>::iterator it;

    it = rechercher(codee);
    if (it != l.end())
    {

        it->setnbex(it->getnbex() + n);
    }
}
