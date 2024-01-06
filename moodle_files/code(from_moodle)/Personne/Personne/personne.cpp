#include"personne.h"

    Personne::Personne()
    {
        cout<<"Ctor Personne"<<endl;
        nom="";
        prenom="";
        CIN=0;
    }

     Personne::Personne(long CIN, string nom, string prenom)
    {
        cout<<"Ctor avec parametre Personne"<<endl;

        this->CIN=CIN;
        this->nom=nom;
        this->prenom=prenom;
    }

     void Personne::afficher() const
     {
        cout << "Je suis la Personne : " << endl;
        cout<< " CIN : "<< CIN<<endl;
        cout<< " Nom : "<< nom<<endl;
        cout<< " Prenom : "<< prenom<<endl;

     }


    Personne::~Personne(){cout<<"Destructeur Personne"<<endl;}
