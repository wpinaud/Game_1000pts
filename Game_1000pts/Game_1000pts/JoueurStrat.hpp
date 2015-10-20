//
//  JoueurStrat.hpp
//  Game_1000pts
//
//  Created by Willis Pinaud on 19/10/2015.
//  Copyright © 2015 Centrale. All rights reserved.
//

#ifndef JoueurStrat_hpp
#define JoueurStrat_hpp

#include "Joueur.hpp"

class JoueurStrat : Joueur
{
public:
    void choisirCarte(std::vector<Carte*> tasAdv);
};

#endif /* JoueurStrat_hpp */
