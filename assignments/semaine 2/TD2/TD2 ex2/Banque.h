#ifndef BANQUE_H_INCLUDED
#define BANQUE_H_INCLUDED
#include <iostream>
#include<string>
#include"header.h"
using namespace std;
class Banque
{
    private:
    string nom;
    Compte t[50];
    int n;
    public:
    bool cherhcerCompte(int RIB);
    void ajouter(Compte);
    void afficher();
    void setN(int);
};
#endif // BANQUE_H_INCLUDED
