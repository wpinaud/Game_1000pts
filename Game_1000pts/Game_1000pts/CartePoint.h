#ifndef CARTEPOINT_H
#define CARTEPOINT_H

#include "Carte.h"
#include <sstream>

class CartePoint : public Carte
{
    public:
        CartePoint(int nbPts, int rang);
        virtual ~CartePoint();
        std::string getType() const{return "Point";}
        std::string toString() const;
        int getGroupe(){return 0;}
        int getNbPoint();

    private:
        int nbPoint;
};

#endif // CARTEPOINT_H
