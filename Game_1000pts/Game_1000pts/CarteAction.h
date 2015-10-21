#ifndef CARTEACTION_H
#define CARTEACTION_H
#include <sstream>
#include "Carte.h"

#include "Carte.h"
#include "Joueur.hpp"

class CarteAction : public Carte
{
    public:
        virtual ~CarteAction();
        int getGroupe();
    protected:
        int groupe;
};

#endif // CARTEACTION_H
