#ifndef COMPTEEPARGNE_H
#define COMPTEEPARGNE_H

#include "Compte.h"


class CompteEpargne : public Compte
{
    private:
        double taux;

    public:

        CompteEpargne();
        ~CompteEpargne();

        double Gettaux() const { return taux; }
        void Settaux(double val) { taux = val; }

        void afficher() const;
        bool retirer(double);
        void saisir();
        double calculInteret();

};

#endif // COMPTEEPARGNE_H
