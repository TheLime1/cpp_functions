#ifndef ETUDIANT_H_INCLUDED
#define ETUDIANT_H_INCLUDED
#include <string>
#include"personne.h"

class Etudiant : public Personne
{

    string classe;
    double moyenne;

public:

    Etudiant();

    Etudiant(long ,string ,string ,string ,double);
    void afficher() const;

   ~Etudiant();


};





#endif // ETUDIANT_H_INCLUDED
