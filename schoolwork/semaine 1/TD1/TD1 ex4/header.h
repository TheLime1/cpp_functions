#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

class Article
{
public:
    int r�ference;
    string designation;
    float prix;

    void saisir();
    void afficher();
    float prix_ttc(float TVA);
};

#endif // HEADER_H_INCLUDED
