
#include"ecole.h"

int main()
{
    Ecole e;
    Etudiant e1(1,"mariem","bizerte","2a23","18/10/2003");
    Etudiant e2(2,"emna","tunis","2a23","14/07/2003");
    e.ajouter(e1);
    e.ajouter(e2);
    e.afficher();
    e.supprimerEtudiant(2);
    e.chercherAfficherClasse("2a23");
    return 0;
}
