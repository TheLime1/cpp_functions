#include <iostream>
#include "header.h"
#include <string.h>

using namespace std;

int main()
{
    Etudiant E,e;
    E.saisir();
    e.saisir();
    E.afficher();
    e.afficher();
    cout<<"moyenne:"<<E.moyenne()<<endl;
    if(E.admis())
        cout<<"admis"<<endl;
    else
        cout<<"n'esst pas admis"<<endl;
    if(E.exae_quo(e)==-1)

    return 0;
}
