#ifndef NOTE_H_INCLUDED
#define NOTE_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;
class Note
{
protected:
    int id;
    string objet;
    string description;
    string date;
public:
    Note();
    Note(int,string,string,string);
    ~Note(){};
    int getid()const;
    string getobjet()const;
    string getdescription()const;
    string getdate()const;

};

#endif // NOTE_H_INCLUDED
