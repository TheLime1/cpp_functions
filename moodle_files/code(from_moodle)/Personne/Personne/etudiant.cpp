#include "etudiant.h"

Etudiant::Etudiant()
    {
        cout<<"Ctor Etudiant"<<endl;

        classe="";
        moyenne=0;
    }


Etudiant::  Etudiant(long CIN,string nom,string prenom,string classe,double moyenne):Personne(CIN,nom,prenom)
    {
        cout<<"Ctor avec parametre Etudiant"<<endl;

        this->classe=classe;
        this->moyenne=moyenne;
    }


     void Etudiant::afficher() const
     {
        cout << "Je suis l'etudiant : " << endl;

        Personne::afficher();
        cout<< " Classe : " << classe <<endl;
        cout<< " Moyenne : " << moyenne <<endl;
     }

      Etudiant:: ~Etudiant(){cout<<"Destructeur Etudiant"<<endl;}

