#ifndef ENSEIGNANT_H
#define ENSEIGNANT_H

#include <string>

using namespace std;
class Enseignant
{
    public:
        Enseignant();
        Enseignant(string,string,int,int);
        int getMatricule()const{return matricule;}
        string getNom(){return nomE;}
        virtual float calculerSalaire();
        virtual void afficher();
        bool operator>(const Enseignant&);


        virtual ~Enseignant();

    protected:
        string  nomE, prenomE;
         int matricule,nbreHeure;

    private:
};

#endif // ENSEIGNANT_H
