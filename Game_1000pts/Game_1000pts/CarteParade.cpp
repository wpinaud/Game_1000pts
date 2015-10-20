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

void CarteParade::libereJoueur (Joueur* a){
    a->setEtat(true);
}

<<<<<<< HEAD
std::string CarteParade::toString(){
    std::stringstream s;
    s << rang << " : P(" << groupe << ")";
    return s.str();
}
=======
std::string CartePoint::toString(){
    std::stringstream s;
    s << rang << " : P(" << groupe << ")";
    return s.str();
}
>>>>>>> origin/master
