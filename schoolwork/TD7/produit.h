#ifndef PRODUIT_H_INCLUDED
#define PRODUIT_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;
class Produit
{
private:
    int reff;
    string libelle;
    int quantite;
    float prix;
public:
    Produit();
    Produit(int,string);
    ~Produit(){}
    void changerQuantite(int);
    void changerPrix(float);
    Produit operator+(const Produit &);
    friend ostream & operator<<(ostream &,const Produit &);
};


#endif // PRODUIT_H_INCLUDED
