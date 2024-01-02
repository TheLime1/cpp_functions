#include <iostream>

using namespace std;

int main()
{
    string str("les sanglots long des violons");
    string st(str,0,12);
    //cout << "\"" << st << endl;
    // afficher "les sanglots
    string str2("de l'autome blessent mon coeur");
    cout << str.replace(str.size()-1,0," "+str2) << endl;//faire la concate,nation
    int n=str.find("sanglots");
    cout << n << "\n";//donne la position du mots donner

    for (int i=0;i<str.size();i++)
        cout << str.at(i)<< " " << str[i] << "\n";
    // permet d'ecrire la phrase en mode verticale

    return 0;
}
