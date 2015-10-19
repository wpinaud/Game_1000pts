#ifndef CARTEACTION_H
#define CARTEACTION_H
#include <sstream>
#include "Carte.h"


class CarteAction : public Carte
{
    public:
        CarteAction();
        virtual ~CarteAction();

        int getGroupe();
    protected:
        int groupe;
};

#endif // CARTEACTION_H
