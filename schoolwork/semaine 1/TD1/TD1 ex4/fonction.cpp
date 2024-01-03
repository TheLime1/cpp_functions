#include <iostream>
#include"header.h"

#include <string.h>
using namespace std;

void Article::saisir()
{
    cout<<"reference :"<<endl;
    cin>>réference>>;
    cout<<"designation :"<<endl;
    cin>>designation;
    cout<<"prix :"<<endl;
    cin>>prix>>;
}
void Article::afficher()
{
    cout<<"reference :"<< réference<<endl;
    cout<<"designation :"<<designation<endl;
    cout<<"prix :"<<prix<<endl;
}
float prix_ttc(float TVA)
{
    return (this->prix(1+TVA/100));
}
