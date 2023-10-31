#ifndef ETUDIANT_H_INCLUDED
#define ETUDIANT_H_INCLUDED
#include <iostream>
using namespace std;
class Etudiant
{
private:
    string nom;
    string prenom;
    string classe;
    string date;
    int id;
public:
    Etudiant();
    Etudiant(string,string,string,string,int);
    ~Etudiant(){}
    void afficher();
    int get();
    string getclasse();
};



#endif // ETUDIANT_H_INCLUDED
