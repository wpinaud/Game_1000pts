#ifndef CARTEACTION_H
#define CARTEACTION_H

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
