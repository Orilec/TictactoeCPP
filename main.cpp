#include "Grille.cpp"
#include "Tictactoe.cpp"
#include <iostream>
#include <string>

using namespace std;

int main(){

    bool partiegagnee = false;
    Tictactoe * jeu = new Tictactoe();

    int colonne;
    int ligne;



    while(!partiegagnee && !(jeu->testeJeuNul())){
        
        jeu->afficheGrille();
        cin >> colonne;
        cin >> ligne;
        jeu->ajouteSymbole(colonne, ligne);
        partiegagnee = jeu->testeVictoireDiagonale() || jeu->testeVictoireHorizontale() || jeu->testeVictoireVerticale();
        jeu->finTour();
    }

    
    
    return 0;
}