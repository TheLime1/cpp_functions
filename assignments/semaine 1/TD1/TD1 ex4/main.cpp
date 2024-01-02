#include <iostream>
#include"header.h"

#include <string.h>
using namespace std;

int main()
{
    Article a;
    int TVA;
    cout << "donner le taux de TVA pour tous les articles :" << endl;
    cin>>TVA>>;
    cout <<"le taux TVA est : "<<taux<<"%"<<endl;
    a.saisir();
    a.afficher();
    cout<<a.prix_ttc(TVA)
    return 0;
}
