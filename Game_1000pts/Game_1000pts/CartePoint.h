#ifndef CARTEPOINT_H
#define CARTEPOINT_H

#include <string>
#include <iostream>
#include "Carte.h"

class CartePoint : public Carte
{
    public:
        CartePoint(int nbPts, int rang);
        virtual ~CartePoint();
<<<<<<< HEAD
        std::string toString();
=======

        ostream& operator<< ( ostream &s , CartePoint const &c ) {
        s << c.getRang() << " : +(" << c.getNbPoint << ")";
        return s;
        }

>>>>>>> origin/master
        int getNbPoint();
    
    private:
        int nbPoint;
};

#endif // CARTEPOINT_H
