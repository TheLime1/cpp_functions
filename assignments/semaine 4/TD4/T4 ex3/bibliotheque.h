#ifndef BIBLIOTHEQUE_H_INCLUDED
#define BIBLIOTHEQUE_H_INCLUDED
#include"ouvrage.h"
#include<list>
class Biblio
{
private:
    list<Ouvrage>l;
public:
    Biblio(){};
    ~Biblio(){};
    void afficher();
    float prixTotal();
    list<Ouvrage>::iterator recherche(int);
    void ajouter (Ouvrage);
    void diminuer(int , int);
    void augmenter(int , int);
};


#endif // BIBLIOTHEQUE_H_INCLUDED
