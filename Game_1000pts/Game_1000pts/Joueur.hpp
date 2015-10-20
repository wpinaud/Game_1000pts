//
//  Joueur.hpp
//  Game_1000pts
//
//  Created by Willis Pinaud on 19/10/2015.
//  Copyright © 2015 Centrale. All rights reserved.
//

#ifndef Joueur_hpp
#define Joueur_hpp

#include <stdio.h>
#include <vector>
#include "Carte.h"

class Joueur
{
public:
    virtual ~Joueur();
    //une methode abstraite permettant de choisir la carte a jouer a partir du tas de l’adversaire
    virtual void choisirCarte(std::vector<Carte*> tasAdv);
    int score();
    Carte getFirstOnDeck();
    bool estJouable(Carte* carte);
    
protected:
    std::vector<Carte*> cartes;
    std::vector<Carte*> tas;
};

#endif /* Joueur_hpp */
