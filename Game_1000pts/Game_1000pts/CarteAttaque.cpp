#include "CarteAttaque.h"

CarteAttaque::CarteAttaque( int groupe, int rang)
{
    //ctor
    this->groupe = groupe;
    this->rang = rang;
}

CarteAttaque::~CarteAttaque()
{
    //dtor
}

void bloqueJoueur (joueur a){
    a.setEtat(false);
}

std::string CartePoint::toString(){
    std::stringstream s;
    s << rang << " : A(" << groupe << ")";
    return s.str();
}
