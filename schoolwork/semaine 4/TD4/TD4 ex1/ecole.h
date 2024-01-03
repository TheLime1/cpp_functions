#ifndef ECOLE_H_INCLUDED
#define ECOLE_H_INCLUDED
#include <iostream>
#include<string.h>
#include"header.h"
#include<vector>
using namespace std;
class Ecole
{
private:
    vector<Etudiant>v;
public:
    Ecole();
    ~Ecole();
    void ajouter(Etudiant);
    void afficher();
    vector<Etudiant>::iterator chercherEtudiant(int);
    void supprimerEtudiant(int);
    void chercherAfficherClasse(string);
};

#endif // ECOLE_H_INCLUDED
