//
//  LesCartes.hpp
//  Game_1000pts
//
//  Created by Willis Pinaud on 19/10/2015.
//  Copyright © 2015 Centrale. All rights reserved.
//

#ifndef LesCartes_hpp
#define LesCartes_hpp
#include "Carte.h"
#include "CarteAction.h"
#include "CartePoint.h"
#include <stdlib.h>
#include <vector>

class LesCartes
{
private:
    int nbCartes;
    std::vector<Carte> listeCartes;
    
public:
    LesCartes();
    virtual ~LesCartes();
    void melanger();
    std::vector<Carte> piocher();
    std::vector<Carte> distribuer();
    
};


#endif /* LesCartes_hpp */
