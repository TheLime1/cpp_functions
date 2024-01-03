#ifndef BIBLIO_H_INCLUDED
#define BIBLIO_H_INCLUDED
#include"ouvrage.h"
#include"livre.h"
#include"video.h"
#include<vector>
class Biblio
{
private:
    vector<Ouvrage*>V1;
    vector<Abonne>V2;
public:
    ~Biblio();
    Biblio(const Biblio &);
    Biblio operator=(const Biblio &);
    vector<Ouvrage*>::iterator chercherOuvrage(string);
    void ajouter(const Livre &);
    void ajouter(const Video &);
    void supprimer(string);
    vector<Abonne>::iterator chercherAbonne(int);
    void ajouter(const Abonne &);
    void emprunter(string,int);
    void rende(int);
    void afficher();
    void livreAuteur(string);
};


#endif // BIBLIO_H_INCLUDED
