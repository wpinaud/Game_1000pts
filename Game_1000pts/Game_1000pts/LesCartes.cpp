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
    listeCartes.push_back(*new CartePoint(50, rang));
    
    listeCartes.push_back(*new CartePoint(100, rang));
    
    listeCartes.push_back(*new CarteAttaque(0, rang));
    
    
}

void LesCartes::melanger(){
    
}

/*S’il n’y a plus de cartes dans la pioche, la methode lancera une exception PiocheVideException.*/
std::vector<Carte> LesCartes::piocher(){
    
    
}

std::vector<Carte> LesCartes::distribuer(){
    
}
