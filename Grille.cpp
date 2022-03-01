#ifndef GRILLE_CPP
#define GRILLE_CPP

#include "Grille.h"
#include <iostream>

using namespace std;

Grille::Grille() : _nombreColonnes(3), _nombreLignes(3)
{
    for (int i = 0; i < _nombreColonnes; i++)
    {
        for (int j = 0; j < _nombreLignes; j++)
        {
            _tableau.push_back(' ');
        }
    }
}

Grille::Grille(int nbColonnes, int nbLignes) : _nombreLignes(nbLignes), _nombreColonnes(nbColonnes)
{
    // à compléter
}

// renvoie le contenu de la case de coordonnées x,y dans [0;2]
char Grille::getContent(int x, int y)
{

    return _tableau.at(3 * x + y);
}

// ajoute un contenu dans une case de coordonnées x,y dans [0;2]
// le contenu est un entier non nul
void Grille::setContent(int x, int y, char nouveauContenu)
{

    _tableau.at(3 * x + y) = nouveauContenu;
}

void Grille::affiche()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << _tableau.at(3 * i + j);
        }
        cout << "" << endl;
    }
}

void Grille::resetContent()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            _tableau.at(3 * i + j) = ' ';
        }
    }
}
#endif