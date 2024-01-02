#ifndef LIVRE_H_INCLUDED
#define LIVRE_H_INCLUDED
#include"ouvrage.h"
class Livre:public Ouvrage
{
private:
    string auteur;
public:
    Livre();
    Livre(string);
    ~Livre();
    string getAuteur();
};


#endif // LIVRE_H_INCLUDED
