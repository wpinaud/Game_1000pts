#include <iostream>
#include "LesCartes.hpp"
#include "JoueurStrat.hpp"
#include "JoueurPourrir.hpp"
#include <exception>
#include <typeinfo>
using namespace std;

int Carte::currentId = 1;

void impr(Carte* carte){
    try {
        std::string pts = "Attaque";
        std::string type = typeid(*carte).name();
        cout << type.find(pts) << endl;
    } catch (exception &e) {
        cerr << e.what();
    }
}

int main()
{

    LesCartes lesCartes;
    JoueurStrat J1;
    JoueurPourrir J2;
//    fill_n(lesCartes.begin(), 29, new CartePoint(50, ++i));
//    fill_n(lesCartes.begin()+29, 16, new CartePoint(100, ++i));
//    fill_n(lesCartes.begin()+45, 72-46, new CartePoint(50, ++i));

    lesCartes.melanger();


    //for_each(lesCartes.listeCartes.begin(), lesCartes.listeCartes.begin()+1, impr);
    J1.setMain(lesCartes.distribuer());
    J2.setMain(lesCartes.distribuer());
    //std::fill(mesCartes.begin(), mesCartes.begin()+6, lesCartes.piocher());
    J1.Joueur::choisirCarte(J2.tas, lesCartes.defausse);
    //J2.Joueur::choisirCarte(J1.tas, lesCartes.defausse);
    cout << J1.estJouable(J1.getFirstOnDeck(), J1.getFirstOnDeck());

    //for_each(lesCartes.listeCartes.begin(), lesCartes.listeCartes.end(), impr);


    return 0;
}
