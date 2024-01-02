#include "header.h"
#include"Banque.h"

int main()
{
    b.setN(0);
    Compte c1,c2;
    Bnaque b;
    bool q, t;
    c1.saisir();
    c2.saisir();
    if(c1.retirerAgent(100))
        cout << "le solde suffisant " << endl;
    else
        cout << "le solde insuffisant "<< endl;
    c1.desposer(500);
    c1.consulter();
    c2.consulter();
    t=c1.transferer(c2,1000);
    c1.consulter();
    c2.consulter();
    b.ajouter(c1);
    b.ajouter(c2);
    b.cherhcerCompte(1);
    b.afficher();
    return 0;
}
