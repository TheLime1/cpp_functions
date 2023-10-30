#ifndef OUVRAGE_H_INCLUDED
#define OUVRAGE_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Ouvrage
{

private:
    int code;
    string titre;
    int nbex;
    float prix;

public:
    Ouvrage();
    Ouvrage(int, string, int, float);
    ~Ouvrage();
    void afficher();
    float totalouvrage();
    int getcode() { return code; }
    int getnbex() { return nbex; }
    void setnbex(int n) { nbex = n; }
};

#endif // OUVRAGE_H_INCLUDED
