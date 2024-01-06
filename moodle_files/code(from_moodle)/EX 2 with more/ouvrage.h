#ifndef OUVRAGE_H
#define OUVRAGE_H
#include <iostream>
using namespace std;

class Ouvrage
{
    public:
        //Ouvrage(){};
        Ouvrage(string="",string="",bool=true);
        virtual void afficher()const;
        string get_titre()const{return titre;}
        string get_date()const{return date;}
        bool get_exist()const{return exist;}
        void set_exist(bool x){exist=x;}
        virtual ~Ouvrage(){}
    protected:
        string titre;
        string date;
        bool exist;
};

#endif // OUVRAGE_H
