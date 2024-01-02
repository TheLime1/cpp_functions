#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <iostream>
#include<string>
using namespace std;

class Compte
{
private:
    int solde;
    int numCompte;
public:
    int getsolde();
    int setsolde(int sold);
    int setnumCompte(int num);
};
#endif // HEADER_H_INCLUDED
