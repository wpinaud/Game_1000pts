#include <iostream>
#include "LesCartes.hpp"
#include "Joueur.hpp"
#include <exception>
using namespace std;

int Carte::currentId = 1;

void impr(Carte* carte){
    try {
        cout << carte->toString() << endl;
    } catch (exception &e) {
        cerr << e.what();
    }
}

int main()
{

    LesCartes lesCartes;
    Joueur J1;
//    fill_n(lesCartes.begin(), 29, new CartePoint(50, ++i));
//    fill_n(lesCartes.begin()+29, 16, new CartePoint(100, ++i));
//    fill_n(lesCartes.begin()+45, 72-46, new CartePoint(50, ++i));

    //lesCartes.melanger();

    //for_each(lesCartes.listeCartes.begin(), lesCartes.listeCartes.begin()+1, impr);
    //J1.setMain(lesCartes.distribuer());
    //std::fill(mesCartes.begin(), mesCartes.begin()+6, lesCartes.piocher());

    for_each(lesCartes.listeCartes.begin(), lesCartes.listeCartes.end(), impr);

    return 0;
}
