#include "Classe.h"

Classe::Classe()
{
    designation="";
}
Classe::Classe(string designation){
this->designation= designation;
}
Classe::~Classe()
{
    //dtor
}
int Classe::verifierEnseigMat(int matricule){

    for(int i=0;i<EnsMatricule.size();i++)
    {
        if(EnsMatricule[i]==matricule)return i;
    }
    return -1;

}
bool Classe::ajouterMatricule(int matricule)
{
    if(verifierEnseigMat(matricule)==-1)
    {EnsMatricule.push_back(matricule);
        return true;
    }
    return false;
}
