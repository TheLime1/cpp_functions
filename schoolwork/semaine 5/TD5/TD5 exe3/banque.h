#ifndef BANQUE_H_INCLUDED
#define BANQUE_H_INCLUDED
#include <vector>
#include "compte.h"
#include "cmpepargne.h"
#include <string>
#include "courant.h"
#include <iostream>
#include <typeinfo>


using namespace std;
class Banque
{
private:

    string nom;
    string lieu;
    vector<Compte*>T;
public:
    Banque();
    Banque(string,string);
    ~Banque();
    Banque(const Banque&);
    Banque& operator=(const Banque& );


    void ajouter(const Epargne &);
    void ajouter(const Courant &);
    vector<Compte*>::iterator cherchercompte(float);
    void afficher();
    void supprimer(float);


};
#endif // BANQUE_H_INCLUDED
