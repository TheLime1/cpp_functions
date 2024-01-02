#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    const int  MAX=10;
    int n;
    float x;
    int test=0;
    string message;
    cout << "donner un entier et un flottant" << endl;
    cin >> n>>x;
    if(x>MAX)
    {
        test=1;
        message="true";
        cout <<"le produit est de" << n << "par" << x << endl << "est " << n*x <<endl <<"et message est "<< message;
    }
    return 0;
}
