#include "article.h"
#include "solde.h"

Solde::Solde()
{
    remise=0;
}

Solde::Solde(string a,float b,float c,int d):Solde(a,b,c)
{
    remise=d;
}

void Solde::prixFinal()
{
    prix+=tva;
}
void Solde::prixFinal()
{

}
