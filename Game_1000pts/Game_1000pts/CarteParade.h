#ifndef CARTEPARADE_H
#define CARTEPARADE_H


class CarteParade
{
    public:
        CarteParade();
        virtual ~CarteParade();

        ostream& operator<< ( ostream &s , CarteAttaque const &c ) {
        s << c.getRang() << " : (P)";
        return s;
        }

        void libereJoueur (joueur);
    protected:
    private:
};

#endif // CARTEPARADE_H
