#ifndef CARTEPOINT_H
#define CARTEPOINT_H

#include <string>
#include <sstream>
#include "Carte.h"

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
