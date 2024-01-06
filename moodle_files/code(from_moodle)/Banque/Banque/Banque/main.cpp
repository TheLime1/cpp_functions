#include <iostream>
#include"Compte.h"
#include"CompteCourant.h"
#include"CompteEpargne.h"
#include"banque.h"

using namespace std;

int main()
{
    Compte C1(123, 1000);
    C1.afficher();
    cout<<"#################################################"<<endl;

    CompteCourant CC1(234,2000);
    CC1.afficher();
    cout<<"#################################################"<<endl;

    CompteEpargne CE;
    CE.afficher();
    cout<<"#################################################"<<endl;


    cout<<"################ Classe de Gestion ##############"<<endl;

    Banque B;

    cout<<"################ Remplissage de B ###############"<<endl;

    B.ajouter(C1);
    B.ajouter(CC1);
    B.ajouter(CE);

    cout<<"################### Banque B ####################"<<endl;
    B.afficher();

    //**************Constructeur de copie***************//
    //*************************************************//

    cout<<"############# Constructeur de copie ############"<<endl;

    Banque A(B);

    B.modifier(123);

    cout<<"################### Banque B ####################"<<endl;
    B.afficher();

    cout<<"############# La banque A copie de B ############"<<endl;
    A.afficher();


    //**************Operateur d'affectation***************//
    //***************************************************//

   cout<<"############### Affectation A a D  ##############"<<endl;
    Banque D;

    Compte X;
    CompteCourant Y (456,33);
    CompteCourant Z (22222,2000);

    D.ajouter(X);
    D.ajouter(Y);
    D.ajouter(Z);

    cout<<"################### Banque D ####################"<<endl;

    D.afficher();


    D=A; //D.operator=(A);

    A.modifier(234);

    cout<<"################### Banque A ####################"<<endl;
    A.afficher();
    cout<<"################### Banque D ####################"<<endl;
    D.afficher();

    return 0;
}

