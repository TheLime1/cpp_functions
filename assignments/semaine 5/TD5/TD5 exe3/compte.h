#ifndef COMPTE_H_INCLUDED
#define COMPTE_H_INCLUDED



using namespace std;


class Compte
{
protected:
    float rib;
    float solde;
public:
    Compte();
    Compte(float,float);
    virtual ~Compte();
    void deposer(float);
    float getRib()const{return rib;}
    void retirer(float);
    virtual void afficher();


};






#endif // COMPTE_H_INCLUDED
