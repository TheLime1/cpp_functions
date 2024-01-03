#include <iostream>
#include "compte.h"
#include "cmpepargne.h"
#include "courant.h"
#include <string>
#include "banque.h"

using namespace std;

int main()
{

    Compte C;
    Banque b("Amen_banque","Bizerte");
    Epargne e(123,1000,20);
    Courant o(145,2000,-500);
    e.calculer();
    e.afficher();
    o.afficher();
    e.deposer(500);
    o.deposer(100);
    e.afficher();
    o.afficher();
    e.retirer(20);
    o.retirer(20);
    e.afficher();
    o.afficher();
    b.ajouter(e);
    b.ajouter(o);
    b.afficher();
    b.supprimer(123);
    b.afficher();

    return 0;
}
