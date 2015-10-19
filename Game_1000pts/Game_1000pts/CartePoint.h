#ifndef CARTEPOINT_H
#define CARTEPOINT_H


class CartePoint : public Carte
{
    public:
        CartePoint();
        virtual ~CartePoint();

        ostream& operator <<( ostream &s , CartePoint const &c ) {
        s << c.getRang() << " : +(" << c.getNbPoint << ")";
        return s;
        }

        int getNbPoint();
    private:
        int nbPoint;
};

#endif // CARTEPOINT_H
