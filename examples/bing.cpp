// Définition de la classe Equipement
class Equipement
{
protected:       // Les attributs sont protégés pour être accessibles aux classes dérivées
    int SN;      // Numéro de série
    double NumC; // Numéro de communication
public:
    // Constructeur par défaut
    Equipement()
    {
        SN = 0;
        NumC = 0.0;
    }
    // Constructeur avec paramètres
    Equipement(int sn, double numc)
    {
        SN = sn;
        NumC = numc;
    }
    // Destructeur
    ~Equipement() {}
    // Méthode pour afficher les informations d'un équipement
    void afficher()
    {
        cout << "SN: " << SN << endl;
        cout << "NumC: " << NumC << endl;
    }
};

// Définition de la classe Terminal, qui hérite de la classe Equipement
class Terminal : public Equipement
{
private:          // Les attributs sont privés pour ne pas être modifiés par les autres classes
    int x;        // Position x
    int y;        // Position y
    int capacite; // Capacité de stockage
public:
    // Constructeur par défaut
    Terminal() : Equipement()
    {
        x = 0;
        y = 0;
        capacite = 0;
    }
    // Constructeur avec paramètres
    Terminal(int sn, double numc, int x, int y, int cap) : Equipement(sn, numc)
    {
        this->x = x;
        this->y = y;
        capacite = cap;
    }
    // Destructeur
    ~Terminal() {}
    // Méthode pour afficher les informations d'un terminal
    void afficher()
    {
        Equipement::afficher(); // On appelle la méthode de la classe mère
        cout << "x: " << x << endl;
        cout << "y: " << y << endl;
        cout << "capacite: " << capacite << endl;
    }
    // Méthode pour calculer la distance entre un terminal et un point donné
    double distance(int x0, int y0)
    {
        return sqrt((x - x0) * (x - x0) + (y - y0) * (y - y0));
    }
};

// Définition de la classe Capteur, qui hérite de la classe Equipement
class Capteur : public Equipement
{
private:           // Les attributs sont privés pour ne pas être modifiés par les autres classes
    double mesure; // Valeur de mesure
public:
    // Constructeur par défaut
    Capteur() : Equipement()
    {
        mesure = 0.0;
    }
    // Constructeur avec paramètres
    Capteur(int sn, double numc, double mes) : Equipement(sn, numc)
    {
        mesure = mes;
    }
    // Destructeur
    ~Capteur() {}
    // Méthode pour afficher les informations d'un capteur
    void afficher()
    {
        Equipement::afficher(); // On appelle la méthode de la classe mère
        cout << "mesure: " << mesure << endl;
    }
};

// Définition de la classe Noeud, qui hérite de la classe Equipement
class Noeud : public Equipement
{
private:                              // Les attributs sont privés pour ne pas être modifiés par les autres classes
    int capacite;                     // Nombre d'équipements que le noeud peut supporter
    vector<Equipement *> equipements; // Vecteur d'équipements connectés au noeud
public:
    // Constructeur par défaut
    Noeud() : Equipement()
    {
        capacite = 0;
    }
    // Constructeur avec paramètres
    Noeud(int sn, double numc, int cap) : Equipement(sn, numc)
    {
        capacite = cap;
    }
    // Destructeur
    ~Noeud() {}
    // Méthode pour afficher les informations d'un noeud
    void afficher()
    {
        Equipement::afficher(); // On appelle la méthode de la classe mère
        cout << "capacite: " << capacite << endl;
        cout << "nombre d'equipements connectes: " << equipements.size() << endl;
        for (int i = 0; i < equipements.size(); i++)
        {
            cout << "Equipement " << i + 1 << ":" << endl;
            equipements[i]->afficher(); // On affiche les informations de chaque équipement
        }
    }
    // Méthode pour ajouter un équipement au noeud
    bool ajouter(Equipement *e)
    {
        if (equipements.size() < capacite)
        {                             // Si le noeud n'est pas plein
            equipements.push_back(e); // On ajoute l'équipement au vecteur
            return true;              // On renvoie vrai pour indiquer le succès
        }
        else
        {
            return false; // On renvoie faux pour indiquer l'échec
        }
    }
};

// Définition de la classe Zone
class Zone
{
private:          // Les attributs sont privés pour ne pas être modifiés par les autres classes
    Noeud *noeud; // Le noeud de la zone
    int rayon;    // Le rayon de couverture de la zone
public:
    // Constructeur par défaut
    Zone()
    {
        noeud = NULL;
        rayon = 0;
    }
    // Constructeur avec paramètres
    Zone(Noeud *n, int r)
    {
        noeud = n;
        rayon = r;
    }
    // Destructeur
    ~Zone() {}
    // Méthode pour afficher les informations d'une zone
    void afficher()
    {
        cout << "Rayon: " << rayon << endl;
        cout << "Noeud:" << endl;
        noeud->afficher(); // On affiche les informations du noeud
    }
    // Méthode pour accepter (ajouter) un terminal à une zone
    bool accepter(Terminal *t)
    {
        if (t->distance(0, 0) <= rayon)
        {                             // Si le terminal est dans le rayon de la zone
            return noeud->ajouter(t); // On essaie de l'ajouter au noeud et on renvoie le résultat
        }
        else
        {
            return false; // On renvoie faux pour indiquer l'échec
        }
    }
    // Méthode pour vérifier si un terminal se trouve dans une zone
    bool verifier(Terminal *t)
    {
        return t->distance(0, 0) <= rayon; // On renvoie vrai si le terminal est dans le rayon de la zone, faux sinon
    }
};
