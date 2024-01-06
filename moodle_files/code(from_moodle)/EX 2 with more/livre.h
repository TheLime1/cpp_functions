#ifndef LIVRE_H
#define LIVRE_H
#include "ouvrage.h"

class Livre :public Ouvrage
{
    public:
        Livre();
        Livre(string,string,bool,string);
        void afficher()const;
        string get_auteur()const{return auteur;}
    private:
        string auteur;
};

#endif // LIVRE_H
