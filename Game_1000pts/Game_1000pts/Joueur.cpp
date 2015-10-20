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
    return score;
}

<<<<<<< HEAD
Carte* Joueur::getFirstOnDeck(){
    return tas[0]; //Vérfier que c'est bien le premier élement
=======
Carte Joueur::getFirstOnDeck(){
    return *tas[0]; //Vérfier que c'est bien le premier élement
>>>>>>> origin/master
}

bool Joueur::estJouable(Carte* carte){
    //Si la premiere carte est pas compatible elle n'est pas jouable
    return true;
}

<<<<<<< HEAD
void Joueur::setEtat(bool etat){
    this->etat = etat;
}
=======
>>>>>>> origin/master
