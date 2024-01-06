#ifndef ABONNE_H
#define ABONNE_H
#include <iostream>
using namespace std;

class Abonne
{
    public:
        Abonne(long=0,string="",long=0,string="");
        void afficher()const;
        string get_emprunt()const{return emprunt;}
        void set_emprunt(string E){emprunt=E;}
        long get_id()const{return id;}
    private:
        long id;
        string nom;
        long numero;
        string emprunt;
};

#endif // ABONNE_H
