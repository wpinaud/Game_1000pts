#ifndef CARTEATTAQUE_H
#define CARTEATTAQUE_H
#include "CarteAction.h"

#include "CarteAction.h"

class CarteAttaque : public CarteAction
{
    public:
<<<<<<< HEAD
        CarteAttaque(int groupe, int rang);
=======
        CarteAttaque(int groupe, int rang));
>>>>>>> origin/master
        virtual ~CarteAttaque();
        std::string toString();
        void bloqueJoueur (Joueur* a);

<<<<<<< HEAD
=======
        std::string toString();

        void bloqueJoueur (joueur);
    protected:
    private:
>>>>>>> origin/master
};

#endif // CARTEATTAQUE_H
