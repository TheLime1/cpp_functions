#ifndef EMPLOYE_H_INCLUDED
#define EMPLOYE_H_INCLUDED
#include <string>
using namespace std;
class Employe
{
protected:
    string nom;
    string prenom;
    float salaire;
public:
    Employe();
    Employe(string,string,float);
    ~Employe(){}
    void afficher();

};


#endif // EMPLOYE_H_INCLUDED
