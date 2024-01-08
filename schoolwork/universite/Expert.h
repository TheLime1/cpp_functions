#ifndef EXPERT_H
#define EXPERT_H

#include <Enseignant.h>
#include <string>


class Expert : public Enseignant
{
    public:
        Expert();
        Expert(string nomE, string prenomE, int matricule, int nbreHeure,string nom);
        void afficher();
        float calculerSalaire();
        string getEntreprise(){return nomEntreprise;}

         ~Expert();

    protected:

    private:
        string nomEntreprise;
};

#endif // EXPERT_H
