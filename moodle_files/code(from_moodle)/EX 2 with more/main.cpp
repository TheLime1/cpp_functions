#include "bibliotheque.h"

int main()
{
    Ouvrage O1("bonjour","12/08/1990",true);
    Video O2("but","12/06/2000",false,"bale",85);
    Livre O3("albou5ale2","08/08/2002",true,"alja7edh");
    Abonne A(759,"skandar",2070,"bonjour");
    /*
    Ouvrage *p1,*p2,*p3;
    p1=&O1;
    p2=&O2;
    p3=&O3;
    */
    Bibliotheque T;
    T.ajouter(O1);
    T.ajouter(O2);
    T.ajouter(O3);
    T.ajouter(A);
    //T.emprunter("bonjour", 759);
    //T.rendre(759);
    T.info();
    T.afficher_auteur("alja7edh");

    return 0;
}
