#ifndef CARTEATTAQUE_H
#define CARTEATTAQUE_H
#include "CarteAction.h"


class CarteAttaque : public CarteAction
{
    public:
        CarteAttaque(int groupe, int rang));
        virtual ~CarteAttaque();

        std::string toString();

        void bloqueJoueur (joueur);
    protected:
    private:
};

#endif // CARTEATTAQUE_H
