//
//  JoueurPourrir.cpp
//  Game_1000pts
//
//  Created by Willis Pinaud on 19/10/2015.
//  Copyright © 2015 Centrale. All rights reserved.
//

#include "JoueurPourrir.hpp"
/*pourrir la vie de l’adversaire* : utiliser au maximum les attaques et avancer des que l’adversaire est bloque.*/
void JoueurPourrir::choisirCarte(std::vector<Carte*> tasAdv){
    //if carte attaque dans la main && tas adv != carte attaque
        //jouer carte sur le tas adv
    //elseif carte point dans la main && tas adv == carte attaque && mon tas =! carte attaque
        //jouer carte point
    //elseif carte parade dans la main && tas adv == carte attaque && mon tas == carte attaque
        //if groupe(carteparade) == groupe(carteattaque)
            //se débloquer
        //else se défausser
    //else se défausser
}