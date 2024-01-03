#include "article.h"
Article::Article()
{
    nom="";
    prix=0;
    tva=0;
}
Article::Article(string a,float b,float c)
{
    nom=a;
    prix=b;
    tva=c;

}
float Article::getprix()
{
    return prix;
}
void Article::setprix(float montant)
{
    prix=montant;
}
float Article::prixFinal()
{

}
void Article::afficher()
{
    cout<<nom<<endl<<prix<<endl<<tva<<endl;
}
