#ifndef ARTICLE_H_INCLUDED
#define ARTICLE_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;
class Article
{
private:
    string nom;
    float prix;
    float tva;
public:
    Article();
    Article(string,float,float);
    ~Article(){}
    float getprix();
    void setprix(float);
    float prixFinal();
    void afficher();

};


#endif // ARTICLE_H_INCLUDED
