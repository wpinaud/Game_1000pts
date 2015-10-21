//
//  JoueurPourrir.cpp
//  Game_1000pts
//
//  Created by Willis Pinaud on 19/10/2015.
//  Copyright © 2015 Centrale. All rights reserved.
//

#include "JoueurPourrir.hpp"
/*pourrir la vie de l’adversaire* : utiliser au maximum les attaques et avancer des que l’adversaire est bloque.*/
void JoueurPourrir::choisirCarte(std::vector<Carte*> tasAdv, std::vector<Carte*> defausse){
    bool tag = true; //permet d'éviter de jouer plusieurs fois en un tour
    for (int i=0; i<main.size(); i++){ //on essaie de jouer une parade, car c'est la priorité.
        if (estJouable(main.at(i), tasAdv.back()) && main.at(i)->getType() == "Parade" && tag){
                tas.push_back(main.at(i));
                iter_swap(main.begin() + i, main.end());
                main.pop_back();
                tag = false;
        }
    }
    if(tag){ //si on n'a pas encore joué
        for (int i=0; i<main.size(); i++){
            if (estJouable(main.at(i), tasAdv.back()) && main.at(i)->getType() == "Attaque" && tag){
                tasAdv.push_back(main.at(i));
                iter_swap(main.begin() + i, main.end());
                main.pop_back();
                tag = false;
            }
        }
    }
     if(tag){ //si on n'a toujours pas joué
         for (int i=0; i<main.size(); i++){
            if (estJouable(main.at(i), tasAdv.back()) && main.at(i)->getType() == "Point" && tag){
            tas.push_back(main.at(i));
                iter_swap(main.begin() + i, main.end());
                main.pop_back();
            tag = false;
            }
        }
    }
    if (tag){ //si à la fin on a pas joué, on doit se défausser d'une carte
        for (int i=0; i<main.size(); i++){
            if (main.at(i)->getType() == "Point"){
                defausse.push_back(main.at(i));
                iter_swap(main.begin() + i, main.end());
                main.pop_back();
            }
        }

    }
            //elseif carte parade dans la main && mon tas == carte attaque && mon tas == carte attaque
                //if groupe(carteparade) == groupe(carteattaque)
                    //se débloquer
                //else se défausser
            //else se défausser

    }

