//
//  JoueurStrat.cpp
//  Game_1000pts
//
//  Created by Willis Pinaud on 19/10/2015.
//  Copyright © 2015 Centrale. All rights reserved.
//

#include "JoueurStrat.hpp"

/*Avancer le plus vite possible.* En cas de blocage, jouer la parade appropriee ou piocher jusqu’a la trouver*/
void JoueurStrat::choisirCarte(std::vector<Carte*> tasAdv, std::vector<Carte*> defausse){
    //if 1ere carte du tas est une attaque
        //if parade dans la main avec groupe(carteparade) == groupe(carteattaque)
        //else défausser
    //else if carte point dans la main -> mettre carte point dans le tas
    //else
        //if carte attaque dans la main défausser carte attaque de la main
        //else défausser random
    if (tasAdv.back()->getType() == "Attaque") {
        for (int i=0; i<main.size(); i++) {
            if ((main.at(i)->getType() == "Parade") && (main.at(i)->getGroupe() == tasAdv.back()->getGroupe())) {
                tasAdv.push_back(main.at(i));
                iter_swap(main.begin() + i, main.end());
                
            }
            else{
                break;
            }
        }
        
    }
    else if ((std::count_if(main.begin(), main.end(), [](Carte* carte){return (carte->getType()=="Point");}))&&(tasAdv.back()->getType() != "Attaque" )){
        for (int i=0; i<main.size(); i++) {
            if (main.at(i)->getType() == "Point"){
                tas.push_back(main.at(i)); //retourne la premiere carte point trouvée
                iter_swap(main.begin() + i, main.end());
            }
            else{
                break;
            }
        }
    }
    else{
        defausse.push_back(main.at(1));
        iter_swap(main.begin(), main.end());
    }
    main.pop_back(); // ne supprime pas la derniere carte.....
    
    
}