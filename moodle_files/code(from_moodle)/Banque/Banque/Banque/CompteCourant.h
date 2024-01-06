#ifndef COMPTECOURANT_H
#define COMPTECOURANT_H

#include "Compte.h"


class CompteCourant : public Compte
{
    private:
        //double seuil;

    public:
        CompteCourant();
        CompteCourant(long ,double );
        void afficher() const;
        bool retirer(double);
        ~CompteCourant();

       // double Getseuil() const{ return seuil; }
       // void Setseuil(double val) { seuil = val; }

};

#endif // COMPTECOURANT_H
