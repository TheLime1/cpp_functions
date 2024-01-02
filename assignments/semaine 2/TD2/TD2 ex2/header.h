#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <iostream>
#include<string>
using namespace std;
class Compte
{
    private:
    int numCompte;
    string nomprop;
    float solde;
    public:
        void saisir();
        bool retirerAgent(float);
        void desposer(float);
        void consulter();
        bool transferer(Compte&,float);
        int getRIB();
};



#endif // HEADER_H_INCLUDED
