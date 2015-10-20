#include "CartePoint.h"

<<<<<<< HEAD
CartePoint::CartePoint(int nbPts, int rang){
    
    if ((nbPts==50) || (nbPts==100)){
=======
CarteParade    if ((nbPts==50) || (nbPts==100)){
>>>>>>> origin/master
        nbPoint = nbPts;
        this->rang = rang;
    }
    //lever une erreur si le nombre de points demandé n'est pas bon
}

CartePoint::~CartePoint()
{
    //dtor
}

int CartePoint::getNbPoint (){
    return nbPoint;
}

std::string CartePoint::toString(){
    std::stringstream s;
    s << rang << " : +(" << nbPoint << ")" ;
    return s.str();
}