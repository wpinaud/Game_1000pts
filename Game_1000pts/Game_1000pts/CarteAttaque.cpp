#include "CarteAttaque.h"

<<<<<<< HEAD

=======
>>>>>>> origin/master
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

void CarteAttaque::bloqueJoueur (Joueur* a){
    a->setEtat(false);
}

<<<<<<< HEAD
std::string CarteAttaque::toString(){
    std::stringstream s;
    s << rang << " : A(" << groupe << ")";
    return s.str();
}
=======
std::string CartePoint::toString(){
    std::stringstream s;
    s << rang << " : A(" << groupe << ")";
    return s.str();
}
>>>>>>> origin/master
