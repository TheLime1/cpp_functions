#ifndef COURANT_H_INCLUDED
#define COURANT_H_INCLUDED

#include "compte.h"


class Courant:public Compte
{
private:
    int seuil;
public:
    Courant();
    Courant(float,float,int);
    ~Courant(){}
    bool limseuil();
    void afficher();
};


#endif // COURANT_H_INCLUDED
