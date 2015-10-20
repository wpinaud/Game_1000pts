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
<<<<<<< HEAD
#include <algorithm>
#include <time.h>        // std::time

=======
#include <vector>
#include <algorithm>
>>>>>>> origin/master

class LesCartes
{
private:
    int nbCartes;
<<<<<<< HEAD
    
=======
    std::vector<Carte*> listeCartes;
>>>>>>> origin/master
    
public:
    std::vector<Carte*> listeCartes; //to debug
    
    LesCartes();
    void melanger();
    Carte* piocher();
    std::vector<Carte*> distribuer();
    
};


#endif /* LesCartes_hpp */
