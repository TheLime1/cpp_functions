#ifndef NOTEMANAGER_H_INCLUDED
#define NOTEMANAGER_H_INCLUDED
#include"note.h"
#include"tag.h"
#include<vector>
class NoteManager
{
private:
    vector<Note*>v;
public:
    bool chercherNote(int);
    void ajouterNote(const Note &);
    void ajouterTag(const Tag &);
    void enregister(string);
    void charger(string);

};


#endif // NOTEMANAGER_H_INCLUDED
