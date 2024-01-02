#include"ouvrage.h"
#include"livre.h"
Livre::Livre()
{
    auteur="";
}
Livre::Livre(string a,string b,bool c,string d):Ouvrage(a,b,c)
{
    auteur=c;
}
Livre~Livre()
{

}
string Livre::getAuteur()
{

}
