#ifndef VIDEO_H
#define VIDEO_H
#include "ouvrage.h"

class Video :public Ouvrage
{
    public:
        Video();
        Video(string,string,bool,string,int);
        string get_editeur()const{return editeur;}
        int get_duree()const{return duree;}
        void afficher()const;
    private:
        string editeur;
        int duree;
};

#endif // VIDEO_H
