#ifndef BIB_H_INCLUDED
#define BIB_H_INCLUDED

#include "ouvrage.h"
#include <list>

class Biblo
{
private:
    list<Ouvrage> l;

public:
    Biblo(){};
    ~Biblo(){};
    void afficher();
    float prixtotal();
    list<Ouvrage>::iterator rechercher(int);
    void ajouter(Ouvrage);
    void diminuer(int, int);
    void augmenter(int, int);
};

#endif // BIB_H_INCLUDED
