#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <iostream>
#include<string.h>
using namespace std;
class Etudiant
{
private:
    int CIN;
    string nom;
    string adresse;
    string classe;
    string date;

public:
    Etudiant();
    Etudiant(int ,string,string,string,string);
    ~Etudiant();
    void afficher();
    int getCIN();
    string getClasse();


};

#endif // HEADER_H_INCLUDED
