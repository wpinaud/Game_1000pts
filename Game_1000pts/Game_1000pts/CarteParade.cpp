#include "CarteParade.h"

CarteParade::CarteParade(int groupe, int rang)
{
    //ctor
    this->groupe = groupe;
    this->rang = rang;
}

CarteParade::~CarteParade()
{
    //dtor
}

void libereJoueur (joueur a){
    a.setEtat(true);
}

std::string CartePoint::toString(){
    std::stringstream s;
    s << rang << " : P(" << groupe << ")";
    return s.str();
}
