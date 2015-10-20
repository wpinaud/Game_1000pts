//
//  Joueur.hpp
//  Game_1000pts
//
//  Created by Willis Pinaud on 19/10/2015.
//  Copyright © 2015 Centrale. All rights reserved.
//

#ifndef Joueur_hpp
#define Joueur_hpp

#include "Carte.h"

class Joueur
{
public:

    //une methode abstraite permettant de choisir la carte a jouer a partir du tas de l’adversaire
    void choisirCarte(std::vector<Carte*> tasAdv){};
    int score();
    Carte* getFirstOnDeck();
    bool estJouable(Carte* carte);
    void setEtat(bool etat);
    
protected:
    std::vector<Carte*> cartes;
    std::vector<Carte*> tas;
    bool etat;
};

#endif /* Joueur_hpp */
