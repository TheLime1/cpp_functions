#ifndef ECOLE_H_INCLUDED
#define ECOLE_H_INCLUDED
#include <iostream>
using namespace std;
#include"etudiant.h"
#include<vector>
class Ecole
{
private:
    vector<Etudiant> v;
public:
    void ajouter(Etudiant);
    void afficher();
    vector<Etudiant>::iterator chercherEtudiant(int);
    void supprimer(int);
    void chercherAfficherclasse(string);
};

#endif // ECOLE_H_INCLUDED
