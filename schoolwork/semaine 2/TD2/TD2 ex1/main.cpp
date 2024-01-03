#include"header.h"

int main()
{
    Compte c;
    c.setsolde(600);
    c.setnumCompte(1);
    if(c.getsolde()==100)
        cout<<"----- un debit -----"<<endl;
    else
        cout <<"------un credit-----"<<endl;
    cout<<c.getsolde()<<endl;
    return 0;
}
