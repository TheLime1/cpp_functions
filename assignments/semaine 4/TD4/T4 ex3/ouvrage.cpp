#include"ouvrage.h"
Ouvrage::Ouvrage()//initialiation
{
    code=0;
    titre="";
    nbExp=0;
    prix=0;
}
Ouvrage::Ouvrage(int a,string b,int c,float d)
{
    code=a;
    titre=b;
    nbExp=c;
    prix=d;
}
Ouvrage::~Ouvrage()
{

}
void Ouvrage::afficher()
{
    cout<<code<<endl;
        cout<<titre<<endl;
    cout<<nbExp<<endl;

            cout<<prix<<endl;

}
float Ouvrage::totalOuvrage()
{
    return nbExp*prix;
}
