#include <iostream>

using namespace std;
void func( int i )
{
 cout << "Called file-scoped func : " << i << endl;
}//afficher une message "called file_scoped func :

void func( string sz )
{
 cout << "Called locally declared func : " << sz << endl;
}//afficher une message "called locally declared func :

int main()
{

 func(3); //étape 1
 func( "s" ); //étape 2
 //faire l'appel a la premiere fonction et prendre en parametre "3" et l'afficher
 //faire l'appel a la dexieme fonction et prendre en parametre string "s" et l'afficher
}

