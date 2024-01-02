#ifndef VIDEO_H_INCLUDED
#define VIDEO_H_INCLUDED
#include"ouvrage.h"
#include"livre.h"
class Video:public Ouvrage
{
private:
    string editeur;
    float duree;
public:
    Video();
    Video(string,float);
    ~Video();
    void afficher();

#endif // VIDEO_H_INCLUDED
