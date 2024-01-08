#include <iostream>

using namespace std;
#include "Enseignant.h"
#include "Expert.h"
#include "Universite.h"

int main()
{
    Enseignant E1("soumaya","nheri",12147,200);
    Enseignant E2("asma","mabrouk",12152,202);
    E1.afficher();
    E2.afficher();
    cout<<"le salaire est:"<< E1.calculerSalaire()<<endl;

   cout<<"le salaire est:"<< E2.calculerSalaire()<<endl;

   ////////////Expert
   Expert EX1("Ines","benhmida",14586,20,"Esprit");
   EX1.afficher();
    cout<<"le salaire est:"<<EX1.calculerSalaire()<<endl;
    ////////////////////classe
    Classe C1("2AX");
    ////////
    Universite U("Esprit");
    U.ajouter(EX1);
    U.ajouter(E1);
    U.ajouter(E2);
    U.ajouter(C1,12147);
    U.AffichersommeT();
    U.AfficherEnseigMaxNbreHeureSup();
    U.NbrClasse(12147);
    U.enregistrer("Esprit");




    return 0;
}
