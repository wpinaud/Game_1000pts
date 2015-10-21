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
        cout << carte->toString() << endl;
    } catch (exception &e) {
        cerr << e.what();
    }
}

int main()
{

    LesCartes lesCartes;
    cout << endl<< endl<< "Initialisation des cartes" << endl ;
    for_each(lesCartes.listeCartes.begin(), lesCartes.listeCartes.end(), impr);
    JoueurStrat J1;
    JoueurPourrir J2;
//    fill_n(lesCartes.begin(), 29, new CartePoint(50, ++i));
//    fill_n(lesCartes.begin()+29, 16, new CartePoint(100, ++i));
//    fill_n(lesCartes.begin()+45, 72-46, new CartePoint(50, ++i));

    lesCartes.melanger();
    cout << endl<< endl<< "Cartes mélangées" << endl ;
    for_each(lesCartes.listeCartes.begin(), lesCartes.listeCartes.end(), impr);


    //for_each(lesCartes.listeCartes.begin(), lesCartes.listeCartes.begin()+1, impr);
    J1.setMain(lesCartes.distribuer());
    cout << endl<< endl<< "Main du joueur 1" << endl ;
    vector<Carte*> mainJ1 = J1.getMain();
    for_each(mainJ1.begin(), mainJ1.end(), impr);
    
    J2.setMain(lesCartes.distribuer());
    cout << endl<< endl<< "Main du joueur 2" << endl ;
    vector<Carte*> mainJ2 = J2.getMain();
    for_each(mainJ2.begin(), mainJ2.end(), impr);
    
    //std::fill(mesCartes.begin(), mesCartes.begin()+6, lesCartes.piocher());
    J1.joueurPioche(&lesCartes);
    J1.choisirCarte(J2.tas, lesCartes.defausse);
    
    J2.joueurPioche(&lesCartes);
    J2.choisirCarte(J1.tas, lesCartes.defausse);
    
    cout << endl<< endl<< "Tas du joueur 2" << endl ;
    for_each(J2.tas.begin(), J2.tas.end(), impr);
    
    cout << endl<< endl<< "Tas du joueur 1" << endl ;
    for_each(J1.tas.begin(), J1.tas.end(), impr);
    
    cout << endl<< endl<< "La défausse:" << endl ;
    for_each(lesCartes.defausse.begin(), lesCartes.defausse.end(), impr);
    
    
    


    return 0;
}
