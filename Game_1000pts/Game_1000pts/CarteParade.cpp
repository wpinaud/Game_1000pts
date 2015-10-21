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

std::string CarteParade::toString() const {
    std::stringstream s;
    s << rang << " : P(" << groupe << ")";
    return s.str();
}

