#ifndef TAG_H_INCLUDED
#define TAG_H_INCLUDED
#include"note.h"
class Tag:public Note
{
private:
    string nom;
public:
    Tag();
    Tag(int,string,string,string,string);
    ~Tag(){};
};


#endif // TAG_H_INCLUDED
