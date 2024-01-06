#include "video.h"

Video::Video():Ouvrage()
{
    editeur="";
    duree=0;
}

Video::Video(string titre,string date,bool exist,string editeur,int duree):Ouvrage( titre, date, exist)
{
    this->editeur=editeur;
    this->duree=duree;
}
void Video::afficher()const
{
    Ouvrage::afficher();
    cout<<"l\editeur est : "<<editeur<<endl;
    cout<<"la duree du video est : "<<duree<<endl;
}
