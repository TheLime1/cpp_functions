#include <iostream>
#include "NoteManager.h"

using namespace std;

int main()
{
   Note n(1,"test","aaa","bbb");
   Tag t(2,"test2","ccc","bbb","sss");
   NoteManager n2;
   n2.ajouterNote(n);
   n2.ajouterTag(t);
   n2.enregister("test");
   return 0;
}
