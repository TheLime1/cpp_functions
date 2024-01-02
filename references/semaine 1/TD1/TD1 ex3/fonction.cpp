#include <iostream>
#include "header.h"
#include <string.h>

using namespace std;

void Etudiant::saisir()
{
    cout<<"ecrire votre nom :"<<endl;
    cin>>nom ;
    cout<<"ecrire votre prenom :"<<endl;
    cin>>prenom;
    for(int i=0;i<10;i++)
    {
        cout<<"donner votre note:"<<endl;
        cin>>tab_notes[i];
    }

}

void Etudiant::afficher()
{
    cout<<nom<<endl<<prenom<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<tab_notes[i]<<"|";
    }
   cout<<endl;

}
float Etudiant::moyenne()
{
    float s=0;
    for(int i=0;i<10;i++)
    {
        s=s+tab_notes[i];

    }
    return s/10;
}

bool Etudiant::admis()
{
    if(Etudiant::moyenne()>=10)
        return true;
    else
        return false;
}
int exae_quo(Etudiant e)
{
    if(moyenne()>e.moyenne())
        return -1;
    else if (moyenne()==e.moyenne())
        return 0;
    else
        return 1;
}
