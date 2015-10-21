//
//  Joueur.hpp
//  Game_1000pts
//
//  Created by Willis Pinaud on 19/10/2015.
//  Copyright © 2015 Centrale. All rights reserved.
//

#ifndef Joueur_hpp
#define Joueur_hpp

#include "CartePoint.h"


class Joueur
{
public:

    //une methode abstraite permettant de choisir la carte a jouer a partir du tas de l’adversaire
    virtual void choisirCarte(std::vector<Carte*> tasAdv, std::vector<Carte*> defausse)=0;
    int score();
    Carte* getFirstOnDeck();
    bool estJouable(Carte* carte, Carte* carteAdv);
    void setMain(std::vector<Carte*> cartes){ main = cartes; }

protected:
    std::vector<Carte*> main;
    std::vector<Carte*> tas;
};

#endif /* Joueur_hpp */
