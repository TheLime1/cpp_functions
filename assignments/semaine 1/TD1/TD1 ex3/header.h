#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <iostream>
#include <string.h>

using namespace std;

class Etudiant
{
    public:
    string nom;
    string prenom;
    float tab_notes[20];

    void saisir();
    void afficher();
    float moyenne();
    bool admis();
    int exae_quo(Etudiant);
};

#endif // HEADER_H_INCLUDED
