#ifndef BIBLIOTHEQUE_H
#define BIBLIOTHEQUE_H
#include "ouvrage.h"
#include "video.h"
#include "livre.h"
#include "abonne.h"
#include<string>
#include <iostream>
#include<vector>

using namespace std;

class Bibliotheque
{
    public:
        ~Bibliotheque();        //destructeur
        Bibliotheque(){};       //construteur par défaut
        Bibliotheque(const Bibliotheque&);  //construteur de copie
        Bibliotheque& operator=(const Bibliotheque &); //opérateur =
        bool ajouter(const Ouvrage &O);
        bool ajouter(const Livre &O);
        bool ajouter(const Video &O);
        vector<Ouvrage*>::iterator get_ouvrage(string titre);
        bool ajouter(const Abonne &A);
        vector<Abonne>::iterator get_abonne(long id);
        bool emprunter(string ,long);
        bool rendre(long id);
        void info();
        void afficher_auteur(string);
    private:
        vector<Abonne>tabA;
        vector<Ouvrage*>tabOuv;
};

#endif // BIBLIOTHEQUE_H
