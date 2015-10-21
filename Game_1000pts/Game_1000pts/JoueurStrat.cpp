//
//  JoueurStrat.cpp
//  Game_1000pts
//
//  Created by Willis Pinaud on 19/10/2015.
//  Copyright © 2015 Centrale. All rights reserved.
//

#include "JoueurStrat.hpp"
/*Avancer le plus vite possible.* En cas de blocage, jouer la parade appropriee ou piocher jusqu’a la trouver*/
void JoueurStrat::choisirCarte(std::vector<Carte*> tasAdv){
    //if 1ere carte du tas est une attaque
        //if parade dans la main avec groupe(carteparade) == groupe(carteattaque)
        //else défausser
    //else if carte point dans la main -> mettre carte point dans le tas
    //else
        //if carte attaque dans la main défausser carte attaque de la main
        //else défausser random
}