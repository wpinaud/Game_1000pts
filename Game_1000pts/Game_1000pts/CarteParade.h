#ifndef CARTEPARADE_H
#define CARTEPARADE_H
#include "CarteAction.h"

class CarteParade : public CarteAction
{
    public:
        CarteParade(int groupe, int rang);
        virtual ~CarteParade();

        std::string toString();

        void libereJoueur (joueur);
    protected:
    private:
};

#endif // CARTEPARADE_H
