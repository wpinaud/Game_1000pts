#ifndef CARTEPOINT_H
#define CARTEPOINT_H

<<<<<<< HEAD
=======
#include <string>
>>>>>>> origin/master
#include "Carte.h"
#include <sstream>

class CartePoint : public Carte
{
    public:
        CartePoint(int nbPts, int rang);
        virtual ~CartePoint();

        std::string toString();

        int getNbPoint();

    private:
        int nbPoint;
};

#endif // CARTEPOINT_H
