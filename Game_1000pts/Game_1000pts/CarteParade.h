#ifndef CARTEPARADE_H
#define CARTEPARADE_H
#include "CarteAction.h"

class CarteParade : public CarteAction
{
    public:
        CarteParade(int groupe, int rang);
        virtual ~CarteParade();
        void libereJoueur (Joueur* a);
        std::string toString();

};

#endif // CARTEPARADE_H
