//
//  LesCartes.cpp
//  Game_1000pts
//
//  Created by Willis Pinaud on 19/10/2015.
//  Copyright © 2015 Centrale. All rights reserved.
//

#include "LesCartes.hpp"

//Initialiser le jeu de carte
/*73 cartes:
 - 46 cartes *point* (30 à 50pts, 16 à 100pts)
 - 27 cartes *action* : entraver la marche de l’adversaire ou à lever une entrave de l’adversaire.
 + 3 groupes d’*attaque/parade*:
 * 3 exemplaires de la carte attaque
 * 6 exemplaires de la carte parade*/
LesCartes::LesCartes(){
    //Ajouter un truc qui itere pour le rang des cartes
    std::fill(listeCartes.begin(), listeCartes.begin()+29, CartePoint(50, 1));
    std::fill(listeCartes.begin()+30, listeCartes.begin()+45, CartePoint(100, 1));
//    std::fill(listeCartes.begin()+46, listeCartes.begin()+48, CarteAttaque(0, 1));
//    std::fill(listeCartes.begin()+49, listeCartes.begin()+51, CarteAttaque(1, 1));
//    std::fill(listeCartes.begin()+52, listeCartes.begin()+54, CarteAttaque(2, 1));
//    std::fill(listeCartes.begin()+55, listeCartes.begin()+60, CarteParade(0, 1));
//    std::fill(listeCartes.begin()+61, listeCartes.begin()+66, CarteParade(1, 1));
//    std::fill(listeCartes.begin()+67, listeCartes.begin()+72, CarteParade(2, 1));
}

//Un algo qui mix le vecteur de carte
void LesCartes::melanger(){
    std::random_shuffle ( listeCartes.begin(), listeCartes.end(), listeCartes);
}

/*S’il n’y a plus de cartes dans la pioche, la methode lancera une exception PiocheVideException.*/
Carte* LesCartes::piocher(){
    if (sizeof(listeCartes)>0) {
        Carte* cartePioche;
        cartePioche = listeCartes[0];
        listeCartes.pop_back(); //vérfier quel élément est enlevé
        return cartePioche;
    }
    else {
        throw "PiocheVideException";
    }
}

std::vector<Carte*> LesCartes::distribuer(){
    std::vector<Carte*> carteDistrib(6);
    std::fill(carteDistrib.begin(), carteDistrib.end(), piocher());
    return carteDistrib;
}
