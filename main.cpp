#include "Grille.cpp"
#include "Tictactoe.cpp"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    
    bool partiegagnee = false;
    Tictactoe *jeu = new Tictactoe();

    int colonne;
    int ligne;


    while (!partiegagnee && !(jeu->testeJeuNul()))
    {
        bool choix = false;
        jeu->afficheGrille();
        while (!choix)
        {
            cout << "Quelle ligne?" << endl;
            cin >> ligne;
            cout << "Quelle colonne?" << endl;
            cin >> colonne;
            choix = jeu->ajouteSymbole(ligne, colonne);
        }

        partiegagnee = jeu->testeVictoireDiagonale() || jeu->testeVictoireHorizontale() || jeu->testeVictoireVerticale();
        jeu->finTour();
    }

    jeu->afficheGrille();
    
    if (partiegagnee)
    {
        cout << "Gagné! " << endl;
    }
    else
    {
        cout << "Match nul " << endl;
    }

    return 0;
}