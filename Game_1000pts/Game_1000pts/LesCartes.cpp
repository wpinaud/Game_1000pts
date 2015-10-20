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
     std::vector<Carte*> listeC(72);
    //Ajouter un truc qui itere pour le rang des cartes
    generate(listeC.begin(), listeC.begin()+29, []() {return (new CartePoint(50, Carte::currentId));});
    generate(listeC.begin()+29, listeC.begin()+45, []() {return (new CartePoint(100, Carte::currentId));});
    
    generate(listeC.begin()+45, listeC.begin()+48, []() {return (new CarteAttaque(0, Carte::currentId));});
    generate(listeC.begin()+48, listeC.begin()+51, []() {return (new CarteAttaque(1, Carte::currentId));});
    generate(listeC.begin()+51, listeC.begin()+54, []() {return (new CarteAttaque(2, Carte::currentId));});
    
    generate(listeC.begin()+54, listeC.begin()+60, []() {return (new CarteParade(0, Carte::currentId));});
    generate(listeC.begin()+60, listeC.begin()+66, []() {return (new CarteParade(1, Carte::currentId));});
    generate(listeC.begin()+66, listeC.begin()+72, []() {return (new CarteParade(2, Carte::currentId));});
    
    listeCartes = listeC;
}

// random generator function:
int myrandom (int i) {
    std::srand(std::time(NULL));
    return std::rand()%i;
}

//Un algo qui mix le vecteur de carte
void LesCartes::melanger(){
    std::random_shuffle ( listeCartes.begin(), listeCartes.end(), myrandom);
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
