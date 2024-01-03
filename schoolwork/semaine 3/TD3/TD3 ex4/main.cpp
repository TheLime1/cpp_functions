#include"header.h"

int main()
{
Notes N1(10,12,15,11,17,9.5);
Notes N2(11.5,13,18,10,12.5);
    if(N1.calculeMoyenne()>N2.calculeMoyenne())
         cout << N1.calculeMoyenne() << endl;
    else
        cout << N2.calculeMoyenne() << endl;
    return 0;
}
