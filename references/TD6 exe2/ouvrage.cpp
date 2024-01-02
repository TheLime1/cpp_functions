#include"ouvrage.h"
Ouvrage::Ouvrage()
{
    titre="";
    date="";
    indi=false;
}
Ouvrage::Ouvrage(string a,string b,bool c)
{
    titre=a;
    date=b;
    indi=c;
}
virtual Ouvrage::~Ouvrage()
{

}
string Ouvrage::getTitre(const)
{

}
bool Ouvrage::getInd(const)
{

}
void Ouvrage::setIndi(bool a)
{

}
