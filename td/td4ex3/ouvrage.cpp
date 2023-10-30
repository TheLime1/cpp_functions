#include "ouvrage.h"

Ouvrage::Ouvrage()
{
    code = 0;
    titre = "";
    nbex = 0;
    prix = 0;
}

Ouvrage::Ouvrage(int a, string b, int c, float d)
{
    code = a;
    titre = b;
    nbex = c;
    prix = d;
}

Ouvrage::~Ouvrage()
{
}

void Ouvrage::afficher()
{
    cout << "Code:" << code << endl;
    cout << "Titre:" << titre << endl;
    cout << "Nombre d'exemplaire:" << nbex << endl;
    cout << "Prix:" << prix << endl;
}

float Ouvrage::totalouvrage()
{
    return nbex * prix;
}
