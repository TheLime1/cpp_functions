#ifndef OUVRIER_H_INCLUDED
#define OUVRIER_H_INCLUDED
#include"employe.h"
#include <iostream>
using namespace std;

class Ouvrier:public Employe
{
private:
    int heursupp;
public:
    Ouvrier();
    Ouvrier(string,string,float,int);
    ~Ouvrier(){}
    void afficher();
};


#endif // OUVRIER_H_INCLUDED
