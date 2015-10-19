#ifndef CARTE_H
#define CARTE_H

#include <string>
#include <ostream>

class Carte
{
    public:
        virtual ~Carte();
        virtual std::string toString() = 0;
        int getRang ();

    protected:
        int rang;

};

std::ostream& operator <<( std::ostream &s , Carte &c ) {
    s << c.toString();
    return s;
}

#endif // CARTE_H
