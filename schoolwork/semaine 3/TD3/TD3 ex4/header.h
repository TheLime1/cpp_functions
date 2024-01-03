#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <iostream>
#include<string.h>
using namespace std;

class Notes
{
private :
    float test1;
    float test2;
    float DS;
    float Examen;
    float orale;
    float TP;
    bool avecTP;

public:
    Notes();
    Notes(float,float,float,float,float,float);
    Notes(float,float,float,float,float);
    float calculeMoyenne();
private:
    float calculNCC();
};


#endif // HEADER_H_INCLUDED
