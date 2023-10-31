#include "header.h"
#include <iostream>
#include <string>

using namespace std;

Voyage::Voyage(int id, string villeOrigine, string villeDestination, string dateDepart, string dateRetour, float prix, Hotel *hotel)
{
    this->id = id;
    this->villeOrigine = villeOrigine;
    this->villeDestination = villeDestination;
    this->dateDepart = dateDepart;
    this->dateRetour = dateRetour;
    this->prix = prix;
    this->hotel = hotel;
}
