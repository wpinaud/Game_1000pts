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

bool Joueur::estJouable(Carte* carte){
    //Si la premiere carte est pas compatible elle n'est pas jouable
    return true;
}
