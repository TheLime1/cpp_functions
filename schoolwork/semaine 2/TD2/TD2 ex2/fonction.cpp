#include"header.h"
void Compte::saisir()
{
    cout<<"donner votre numero du compte : "<<endl;
    cin>>numCompte;
    cout<<"donner votre nom proprietaire : "<<endl;
    cin>>nomprop;
    cout<<"donner votre solde: "<<endl;
    cin>>solde;
}
bool Compte::retirerAgent(float sol)
{
    solde=solde-sol;
            if(solde>0)
                return true;
            else
                return false;
}
void Compte::desposer(float somme)
{
    solde=solde+somme;
}
void Compte::consulter()
{
           cout<<"votre solde : "<<solde<<endl;
}
bool Compte::transferer(Compte& c,float solden)
{

    c.solde=c.solde+solden;
    solde=solde-solden;
}
int getRIB()
{
    return numCompte;
}
