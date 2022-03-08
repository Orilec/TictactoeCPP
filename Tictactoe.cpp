#ifndef TICTACTOE_CPP
#define TICTACTOE_CPP

#include "Grille.h"
#include "Tictactoe.h"
#include <iostream>

Tictactoe::Tictactoe() : _symboleCourant('X'), _numeroTour(0) {}

void Tictactoe::afficheGrille()
{
    _grilleDeJeu.affiche();
}

bool Tictactoe::ajouteSymbole(int x, int y)
{
    if (_grilleDeJeu.getContent(x, y) == ' '){
        _grilleDeJeu.setContent(x, y, _symboleCourant);
        return true;
    }
    else{
        return false;
    }
    
}

bool Tictactoe::testeVictoireVerticale()
{
    for (int j = 0; j < 3; j++)
    {
        if ((_grilleDeJeu.getContent(0, j) == _grilleDeJeu.getContent(1, j)) && (_grilleDeJeu.getContent(1, j) == _grilleDeJeu.getContent(2, j)) &&(_grilleDeJeu.getContent(0, j) == _symboleCourant))
        {
            return true;
        }
    }
    return false;
}

bool Tictactoe::testeVictoireHorizontale()
{
    for (int j = 0; j < 3; j++)
    {
        if ((_grilleDeJeu.getContent(j, 0) == _grilleDeJeu.getContent(j, 1)) && (_grilleDeJeu.getContent(j, 1) == _grilleDeJeu.getContent(j, 2)) && (_grilleDeJeu.getContent(j, 0) == _symboleCourant))
        {
            return true;
        }
    }
    return false;
}

bool Tictactoe::testeVictoireDiagonale()
{
    if ((_grilleDeJeu.getContent(0, 2) == _grilleDeJeu.getContent(1, 1)) && (_grilleDeJeu.getContent(1, 1) == _grilleDeJeu.getContent(2, 0)) && (_grilleDeJeu.getContent(0, 2) == _symboleCourant))
    {
        return true;
    }
    else if ((_grilleDeJeu.getContent(0, 0) == _grilleDeJeu.getContent(1, 1)) && (_grilleDeJeu.getContent(1, 1) == _grilleDeJeu.getContent(2, 2)) && (_grilleDeJeu.getContent(0, 0) == _symboleCourant))
    {
        return true;
    }
    else {
        return false;
    }
}

bool Tictactoe::testeJeuNul()
{
    if (_numeroTour>8){
        return true;
    }
    else{
        return false;
    }
}

void Tictactoe::finTour()
{
    if (_symboleCourant == 'X')
    {
        _symboleCourant = 'O';
    }
    else
    {
        _symboleCourant = 'X';
    }
    _numeroTour += 1;
}

#endif