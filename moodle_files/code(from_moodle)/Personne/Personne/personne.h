#ifndef PERSONNE_H_INCLUDED
#define PERSONNE_H_INCLUDED
#include <string>
#include <iostream>
using namespace std;

class Personne
{
protected:

    long CIN;
    string nom;
    string prenom;

public:


    Personne();
    Personne(long , string , string );

    virtual void afficher() const;

    ~Personne();
};

#endif // PERSONNE_H_INCLUDED
