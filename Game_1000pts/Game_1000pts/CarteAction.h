#ifndef CARTEACTION_H
#define CARTEACTION_H


class CarteAction
{
    public:
        CarteAction();
        virtual ~CarteAction();

        int getGroupe();
    protected:
        int groupe;
};

#endif // CARTEACTION_H
