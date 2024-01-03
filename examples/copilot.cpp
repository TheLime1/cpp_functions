#include <vector>
#include <iostream>

class Equipement
{
public:
    int SN;
    double NumC;

    Equipement(int sn, double numc) : SN(sn), NumC(numc) {}
};

class Terminal : public Equipement
{
public:
    int x, y;
    int capacite;

    Terminal(int sn, double numc, int x, int y, int cap) : Equipement(sn, numc), x(x), y(y), capacite(cap) {}
};

class Capteur : public Equipement
{
public:
    double mesure;

    Capteur(int sn, double numc, double mesure) : Equipement(sn, numc), mesure(mesure) {}
};

class Noeud : public Equipement
{
public:
    int capacite;

    Noeud(int sn, double numc, int cap) : Equipement(sn, numc), capacite(cap) {}
};

class Zone
{
public:
    Noeud *noeud;
    std::vector<Terminal *> terminaux;
    std::vector<Capteur *> capteurs;
    int rayon;

    Zone(Noeud *n, int r) : noeud(n), rayon(r) {}

    void ajouterTerminal(Terminal *t)
    {
        terminaux.push_back(t);
    }

    void afficherTerminaux()
    {
        for (auto t : terminaux)
        {
            std::cout << "SN: " << t->SN << ", NumC: " << t->NumC << ", x: " << t->x << ", y: " << t->y << ", capacite: " << t->capacite << std::endl;
        }
    }

    bool verifierTerminal(Terminal *t)
    {
        for (auto term : terminaux)
        {
            if (term == t)
            {
                return true;
            }
        }
        return false;
    }
};