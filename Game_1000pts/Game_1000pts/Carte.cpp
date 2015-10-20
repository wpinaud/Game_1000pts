#include "Carte.h"

Carte::~Carte()
{
    //dtor
}

int Carte::getRang(){
    return rang;
}

std::ostream& operator <<( std::ostream &s , Carte &c ) {
    s << c.toString();
    return s;
}