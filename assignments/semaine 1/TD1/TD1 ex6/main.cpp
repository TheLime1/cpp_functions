#include <iostream>

using namespace std;

void display(char c= '*', int n= 1)
{
    for(int i = 1; i <= n; ++i)
     {
     cout << c;
     }
     cout << endl;
}//une fonction qui affiche une seul etoile
void add(int a, int b = 3)
{
cout<<"la somme est" << a+b<<endl;
}
//une fonctiion permet de calculer la somme
int main()
{
     cout << "No argument passed:\n";
     display();
     cout << "\nFirst argument passed:\n";
     display('#');//on a changer le prametre char c='*' par '#'
     cout << "\nBoth argument passed:\n";
     display('$', 5);//permet d'afficher 5 fois $
     add(4) ;//on a changer a par 4
  return 0;
}
