//
//  Joueur.cpp
//  Game_1000pts
//
//  Created by Willis Pinaud on 19/10/2015.
//  Copyright © 2015 Centrale. All rights reserved.
//

#include "Joueur.hpp"

int Joueur::score(){
    int score;
    //Parcourir le tas et additionner le score de toutes les cartes points
    //std::add(tas.begin(),tas.end(),add_score)
    //fonction add score: carte.getPoint()
    return score;
}

Carte* Joueur::getFirstOnDeck(){
    return tas[tas.end()]; //Vérfier que c'est bien le premier élement
}

bool Joueur::estJouable(Carte* carte, Carte* tasAdv){
    //la carte donnée est une carte point
    // et la première carte de mon tas est une point ou une parade
    if (carte == "point"){
        if (getFirstOnDeck() == "point" || getFirstOnDeck() == "P"){
            return true;
        }
        else{ // et la première carte de mon tas est une attaque
            return false;
        }
    }

    //La carte donnée est une carte attaque
    // et la première carte du tas de l'adversaire est une point ou une parade
    if (carte == "A"){
        if (tasAdv == "point" || tasAdv == "P"){
            return true;
        }
        else{ // et la première carte du tas de l'adversaire est une attaque
            return false;
        }
    }
    //La carte donnée est une carte parade
    // et la première carte de mon tas est une point ou une parade
    if (carte == "P"){
        if (getFirstOnDeck() == "point" || getFirstOnDeck() == "P"){
            return false;
        }
        else{ // et la première carte de mon tas est une attaque
            return true;
        }
    }
}
