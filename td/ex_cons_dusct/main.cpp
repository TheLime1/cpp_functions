#include "header.h"
#include <iostream>
#include <string>

using namespace std;
int main()
{
    Hotel *hotel1 = new Hotel("Boulevard de la Promenade, 8050 Hammamet, Tunisie", 5, "Yasmine Beach");
    Hotel *hotel2 = new Hotel("BP437 / Hammamet 8050 / Tunisie", 2, "la Badira Hammamet");

    Voyage *voyage = new Voyage(1, "Tunis", "Hammamet", "01/01/2024", "01/02/2024", 1000, hotel1);

    voyage->getHotel() ;
    voyage->setNombreEtoiles(1);

    Hotel1->afficher();

    return 1;
}
