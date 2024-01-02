#include"bibliotheque.h"

int main()
{
    Biblio b;
    Ouvrage o1(1,"a",2,14.300),o2(2,"nous",3,100);
    b.ajouter(o1);
    b.ajouter(o2);
    b.afficher();
    cout << "prix total" <<b.prixTotal()<< endl;
    b.diminuer(1,1);
    b.afficher();
    b.augmenter(2,100);
    b.afficher();
    return 0;
}
