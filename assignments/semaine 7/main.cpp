#include <iostream>
#include"employe.h"
#include"ouvrier.h"
using namespace std;

int main()
{
   Employe e;
   Ouvrier o1("nom","prenom",10,1);
   o1.afficher();
    return 0;
}
