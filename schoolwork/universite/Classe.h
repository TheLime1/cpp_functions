#ifndef CLASSE_H
#define CLASSE_H
#include <string>
#include <vector>

using namespace std;
class Classe
{
    public:
        Classe();
        Classe(string);
        string getdesignation()const {return designation;}
        int verifierEnseigMat(int matricule);
        bool ajouterMatricule(int);
         ~Classe();

    protected:

    private:
      string  designation;
      vector<int>EnsMatricule;
};

#endif // CLASSE_H
