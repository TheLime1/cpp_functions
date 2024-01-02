#ifndef OUVRAGE_H_INCLUDED
#define OUVRAGE_H_INCLUDED
#include <iostream>
#include<string.h>
using namespace std;
class Ouvrage
{
private:
    int code;
    string titre;
    int nbExp;
    float prix;
public:
    Ouvrage();
    Ouvrage(int,string,int ,float);
    ~Ouvrage();
    void afficher();
    float totalOuvrage();
    int getCode(){return code;}
    void setNbeExp(int n){nbExp=n;}
    int getNbrExp(){return nbExp;}
};


#endif // OUVRAGE_H_INCLUDED
