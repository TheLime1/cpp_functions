#ifndef SOLDE_H_INCLUDED
#define SOLDE_H_INCLUDED
#include "article.h"

class Solde:public Article
{
private:
    int remise;
public:
    Solde();
    Solde(string,float,float,int);
    ~Solde(){}
    void prixFinal();
    float afficher();
};

#endif // SOLDE_H_INCLUDED
