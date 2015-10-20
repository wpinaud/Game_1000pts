#ifndef CARTEATTAQUE_H
#define CARTEATTAQUE_H

#include "CarteAction.h"

class CarteAttaque : public CarteAction
{
    public:
        CarteAttaque(int groupe, int rang);
        virtual ~CarteAttaque();
        std::string toString();
        void bloqueJoueur (Joueur* a);

};

#endif // CARTEATTAQUE_H
