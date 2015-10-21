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

std::string CarteAttaque::toString() const {
    std::stringstream s;
    s << rang << " : A(" << groupe << ")";
    return s.str();
}

