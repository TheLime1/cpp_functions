#include <iostream>
#include "bib.h"

int main()
{

    Biblo b;
    Ouvrage o1(1, "etranger", 44, 50);
    Ouvrage o2(2, "discours de la servitude volontaire", 23, 50);
    b.ajouter(o1);
    b.ajouter(o2);
    b.afficher();
    cout << "prix:" << b.prixtotal() << endl;
    b.diminuer(1, 12);
    b.afficher();
    b.augmenter(2, 3);
    b.afficher();

    return 0;
}
