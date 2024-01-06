#ifndef COMPTE_H
#define COMPTE_H
#include <iostream>
using namespace std;
class Compte
{
     protected:
        long RIB;
        double solde;

    public:
        Compte();
        Compte(long,double);
        virtual~Compte();

        long GetRIB() const { return RIB; }
        void SetRIB(long val) { RIB = val; }
        double Getsolde() const { return solde; }
        void Setsolde(double val) { solde = val; }

        void deposer(double);
        bool retirer(double);
        virtual void afficher() const;



};

#endif // COMPTE_H
