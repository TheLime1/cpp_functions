#include"produit.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
    Produit P1(120,"v225");
    P1.changerQuantite(12000);
    P1.changerPrix(0.25);
    Produit P2(125,"v220");
    P2.changerQuantite(50000);
    P2.changerPrix(0.100);
    Produit P3=P1+P2;
    cout<<P1<<endl;
    cout<<P2<<endl;
    cout<<P3<<endl;
    return 0;
}
