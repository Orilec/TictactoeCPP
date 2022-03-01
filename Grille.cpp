#ifndef GRILLE_CPP
#define GRILLE_CPP

#include "Grille.h"
#include <iostream>

    Grille::Grille() : _nombreColonnes(3), _nombreLignes(3) { 
        // à compléter
    }
    
    Grille::Grille(int nbColonnes, int nbLignes) : _nombreLignes(nbLignes), _nombreColonnes(nbColonnes) {
        // à compléter
    }

    // renvoie le contenu de la case de coordonnées x,y dans [0;2]
    char Grille::getContent(int x, int y){ 
        // à compléter
    }    

        // ajoute un contenu dans une case de coordonnées x,y dans [0;2]
        // le contenu est un entier non nul
    void Grille::setContent(int x, int y, char nouveauContenu){
        // à compléter
    }
        
    void Grille::affiche(){
        // à compléter
    }

    void Grille::resetContent(){
        // à compléter
    }


#endif