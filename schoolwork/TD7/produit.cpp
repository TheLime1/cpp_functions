#include"produit.h"
void Produit::changerQuantite(int a)
{
    quantite=a;
}
void Produit::changerPrix(float p)
{
    prix=p;
}
Produit Produit::operator+(const Produit &P)
{
    Produit r;
    r.reff=reff;
    r.libelle=libelle+P.libelle;
    r.quantite=quantite+P.quantite;
    r.prix=(prix*quantite+P.prix*P.quantite)/r.quantite;
    return r;
}
Produit::Produit()
{
    reff=0;
    libelle="inconnu";
    quantite=0;
    prix=0;
}
Produit::Produit(int s, string g)
{
    reff=s;
    libelle=g;
}
ostream & operator<<(ostream & o,const Produit & P)
{
    return o<<P.reff<<"\n"<<P.libelle<<"\n"<<P.quantite<<"\n"<<P.prix;
}
