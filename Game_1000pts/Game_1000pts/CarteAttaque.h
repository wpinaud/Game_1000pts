#ifndef CARTEATTAQUE_H
#define CARTEATTAQUE_H


class CarteAttaque
{
    public:
        CarteAttaque();
        virtual ~CarteAttaque();

        ostream& operator<< ( ostream &s , CarteAttaque const &c ) {
        s << c.getRang() << " : (A)";
        return s;
        }

        void bloqueJoueur (joueur);
    protected:
    private:
};

#endif // CARTEATTAQUE_H
