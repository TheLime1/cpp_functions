#include <iostream>
#include "etudiant.h"
#include "ecole.h"
using namespace std;

int main()
{
    Ecole e;
    Etudiant e1("marwen","hadiji","2A23","26/10/2003",123);
    Etudiant e2("aicha","smaoui","2A46","04:12:2003",456);
    e.ajouter(e1);
    e.ajouter(e2);
    e.afficher();
    e.supprimer(123);
    e.chercherAfficherclasse("2A46");
    return 0;
}
