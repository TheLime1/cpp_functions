#include "courant.h"
#include <iostream>


 Courant::Courant()
 {
     seuil=0;
 }

    Courant::Courant(float a,float b,int c):Compte(a,b)
    {
        seuil=-500;
    }

    bool Courant::limseuil()
    {

        if(seuil>=-500)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

void Courant::afficher()
{
    Compte::afficher();
    cout<<"Seuil="<<seuil<<endl;
}
