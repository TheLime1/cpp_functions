#ifndef BANQUE_H_INCLUDED
#define BANQUE_H_INCLUDED
#include<string>
#include<vector>
#include"Compte.h"
#include"CompteEpargne.h"
#include"CompteCourant.h"

using namespace std;

class Banque
{
    string nom;
    string lieu;
    vector <Compte *> tab;

public :

    Banque();

    bool ajouter (Compte const &);
    bool ajouter (CompteCourant const &);
    bool ajouter (CompteEpargne const &);


    vector <Compte*>::iterator rechercher (long);

    void afficher();


    ~Banque();

     bool modifier (long)const;

     Banque(const Banque&);

     Banque& operator=(const Banque &);

};


#endif // BANQUE_H_INCLUDED
