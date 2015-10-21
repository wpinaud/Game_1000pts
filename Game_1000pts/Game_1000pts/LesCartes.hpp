//
//  LesCartes.hpp
//  Game_1000pts
//
//  Created by Willis Pinaud on 19/10/2015.
//  Copyright © 2015 Centrale. All rights reserved.
//

#ifndef LesCartes_hpp
#define LesCartes_hpp

#include "CartePoint.h"
#include "CarteAttaque.h"
#include "CarteParade.h"
#include <stdlib.h>
#include <algorithm>
#include <time.h>        // std::time



class LesCartes
{
private:
    int nbCartes;
    
public:
    std::vector<Carte*> listeCartes; //to debug
    std::vector<Carte*> defausse;
    LesCartes();
    void melanger();
    Carte* piocher();
    std::vector<Carte*> distribuer();
    
};


#endif /* LesCartes_hpp */
