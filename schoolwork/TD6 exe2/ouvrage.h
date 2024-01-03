#ifndef OUVRAGE_H_INCLUDED
#define OUVRAGE_H_INCLUDED
#include <string>
#include <iostream>
using namespace std;
class Ouvrage
{
protected:
    string titre;
    string date;
    bool indi;
public:
        Ouvrage();
        Ouvrage(string,string,bool);
        virtual ~Ouvrage();
        string getTitre()const;
        bool getInd()const;
        void setIndi(bool);
};

#endif // OUVRAGE_H_INCLUDED
