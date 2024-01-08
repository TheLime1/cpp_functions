#ifndef UNIVERSITE_H
#define UNIVERSITE_H
#include "Enseignant.h"
#include "Classe.h"
#include "Expert.h"
#include <string>
#include <iostream>
#include <fstream>


using namespace std;
class Universite
{
    public:
        Universite();
        Universite(string);
         Universite(const Universite&);
       Universite& operator=(const Universite&);
        ~Universite();

        vector<Enseignant*>::iterator rechercherEnseignant(int);
        vector<Classe>::iterator rechercherClasse(string);
        void ajouter(const Enseignant&);
        void ajouter(const Expert&);
        void ajouter(Classe&,int);
        void AffichersommeT();
        int NbrClasse(int matricule);
        void AfficherEnseigMaxNbreHeureSup();
        void enregistrer(string);




    protected:

    private:
        string nomUniversite;
        vector<Enseignant*>LE;
        vector<Classe>LC;
};

#endif // UNIVERSITE_H
