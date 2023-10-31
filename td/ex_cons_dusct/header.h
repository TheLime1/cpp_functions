#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <iostream>
#include <string>

using namespace std;

class Hotel
{
private:
    string adresse;
    int nombreEtoiles;
    string nomHotel;

public:
    Hotel(string adresse, int nombreEtoiles, string nomHotel);
    ~Hotel();
    void afficher();
    void setNombreEtoiles(int nombreEtoiles);
    int getNombreEtoiles();

};


class Voyage
{
private:
    int id;
    string villeOrigine;
    string villeDestination;
    string dateDepart;
    string dateRetour;
    float prix;
    Hotel *hotel;

public:
    Voyage(int id, string villeOrigine, string villeDestination, string dateDepart, string dateRetour, float prix, Hotel *hotel);
    ~Voyage();
    void afficher();
    void setHotel(Hotel *hotel);
    Hotel *getHotel();
};

#endif // HEADER_H_INCLUDED
