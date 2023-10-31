#include "header.h"
#include <iostream>
#include <string>

using namespace std;


Hotel::Hotel(string adresse, int nombreEtoiles, string nomHotel)
{
    this->adresse = adresse;
    this->nombreEtoiles = nombreEtoiles;
    this->nomHotel = nomHotel;
}


void Hotel::afficher()
{
    cout << "Adresse: " << this->adresse << endl;
    cout << "Nombre d'etoiles: " << this->nombreEtoiles << endl;
    cout << "Nom d'hotel: " << this->nomHotel << endl;
}

void Hotel::setNombreEtoiles(int nombreEtoiles)
{
    this->nombreEtoiles = nombreEtoiles;
}

int Hotel::getNombreEtoiles()
{
    return this->nombreEtoiles;
}
