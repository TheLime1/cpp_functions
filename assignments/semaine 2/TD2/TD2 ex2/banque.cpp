#include"Banque.h"
#include"header.h"
bool Banque::cherhcerCompte(int RIB)
{
    for (int i=0;i<n;i++)
    {
        if(t[i].getRIB()==RIB)
            return true;
        return false;
    }
}
void Banque::ajouter(Compte c )
{
    t[n]=c;
    n++;
}
void Banque::afficher()
{
    for(int i=0;i<n;i++)
        t[i].consulter();
}
