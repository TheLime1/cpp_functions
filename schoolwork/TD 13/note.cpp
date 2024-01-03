#include"note.h"
Note::Note()
{
    id=0;
    objet="";
    description="";
    date="";
}
Note::Note(int a,string b,string c,string d)
{
    id=a;
    objet=b;
    description=c;
    date=d;
}
int Note::getid()const
    {
        return id;
    }
    string Note::getobjet()const
    {
        return objet;
    }

    string Note::getdescription()const
    {
        return description;
    }
    string Note::getdate()const
    {
        return date;
    }
