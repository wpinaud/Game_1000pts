#ifndef CARTE_H
#define CARTE_H

#include <string>
#include <ostream>
#include <stdio.h>
#include <vector>
#include <sstream>


class Carte
{
    public:
    
        virtual ~Carte();
        virtual std::string toString()=0;
        int getRang ();
    
        Carte() : id(++currentId) {}
        int id;
        static int currentId;

    protected:
        int rang;

};



#endif // CARTE_H
