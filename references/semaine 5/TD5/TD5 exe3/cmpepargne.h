#ifndef CMPEPARGNE_H_INCLUDED
#define CMPEPARGNE_H_INCLUDED

#include "compte.h"
#include <string>

class Epargne:public Compte
{
private:
    float taux;
public:
    Epargne();
    Epargne(float, float,float);
    float calculer();
    void afficher();

};

#endif // CMPEPARGNE_H_INCLUDED
