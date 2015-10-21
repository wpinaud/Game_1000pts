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
    if (tas.size()>0){
        return tas.back();
    }
    else{
        Carte* carteNulle = new CartePoint(0, 9999);
        return carteNulle;
    }
}

bool Joueur::estJouable(Carte* carte, Carte* carteAdv){
    std::string monTypeDeCarte = carte->getType();
    std::string typeCarteAdv = carteAdv->getType();

    std::string maPremiereCarte = getFirstOnDeck()->getType();
    //la carte donnée est une carte point
    // et la première carte de mon tas est une point ou une parade
    if (monTypeDeCarte == "Point"){
        if (maPremiereCarte == "Point" || maPremiereCarte == "Parade"){
            return true;
        }
        else{ // et la première carte de mon tas est une attaque
            return false;
        }
    }

    //La carte donnée est une carte attaque
    // et la première carte du tas de l'adversaire est une point ou une parade
    if (monTypeDeCarte == "Attaque"){
        if (typeCarteAdv == "Point" || typeCarteAdv == "Parade"){
            return true;
        }
        else{ // et la première carte du tas de l'adversaire est une attaque
            return false;
        }
    }
    //La carte donnée est une carte parade
    // et la première carte de mon tas est une point ou une parade
    if (monTypeDeCarte == "Parade"){
        if (maPremiereCarte == "Point" || maPremiereCarte == "Parade"){
            return false;
        }
        else{ // et la première carte de mon tas est une attaque
            return true;
        }
    }
    return false;
}
