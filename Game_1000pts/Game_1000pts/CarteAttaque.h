#ifndef CARTEATTAQUE_H
#define CARTEATTAQUE_H
#include "CarteAction.h"

#include "CarteAction.h"

class CarteAttaque : public CarteAction
{
    public:
        CarteAttaque(int groupe, int rang);
        std::string getType() const{return "Attaque";}
        virtual ~CarteAttaque();
        std::string toString() const;

};

#endif // CARTEATTAQUE_H
