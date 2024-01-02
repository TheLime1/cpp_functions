#include "NoteManager.h"
#include <fstream>
#include <iostream>

    bool NoteManager::chercherNote(int id)
    {
         vector<Note*>::iterator it;
         for(it=v.begin();it!=v.end();it++)
        {
            if((*it)->getid()==id)
            {
                return true;
            }

        }


            return false;

    }
    void  NoteManager::ajouterNote(const Note &n)
    {
        try
        {

            if(chercherNote(n.getid())==false)
            {
                Note* p=new Note(n);
                v.push_back(p);
            }
            else
                throw string ("erreur");
        }
        catch(const string & ch)
        {
            cerr<<ch;
        }
    }

    void  NoteManager::ajouterTag(const Tag &n)
    {
        try
        {
            if(chercherNote(n.getid())==false)
             {
                Note* p=new Tag(n);
                v.push_back(p);
             }
             else

                    throw string ("erreur");
        }

         catch(const string & ch)
          {
            cerr<<ch;
          }
    }



    void NoteManager::enregister(string nomf)
    {
        ofstream f;

            string filename;
             filename += nomf;
            filename += ".txt";



        f.open(filename.c_str());
        {
             vector<Note*>::iterator it;
             for(it=v.begin();it!=v.end();it++)
            {
                if((*it)->getobjet()==nomf)
                {
                    f<<(*it)->getid()<<" "<<(*it)->getobjet();
                }

            }
            f.close();
        }


    }
  /* void NoteManager::charger(string objet)
    {
        ifstream f;
        string ligne;
         fopen(objet)
        {
             vector<Note*>::iterator it;
             for(it=v.begin();it!=v.end();it++)
            {
                 while(fgetline(f,ligne))
                 {
                      if((*it)->getobjet()== objet)
                      {

                        f<<(*it)->desc;
                      }
                 }

            }
            fclose();
        }



    }*/
