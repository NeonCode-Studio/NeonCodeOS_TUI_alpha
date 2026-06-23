#include <iostream>
#include <string>
#include "game.h"
using namespace std;


void game::start() {
    cout<<"prosta gra w moim OS"<<endl;
    string bron_gracza = "deska";

    cout<<"wchodzisz do jaskini trzymajac w reku:"<<bron_gracza<<endl;

    cout<<"poczatek gry"<<endl;
    cout<<"czym chcesz zaatakowac smoka(np patyk , laczek , miecz itd)"<<endl;
    cin>>bron_gracza;

    if (bron_gracza == "laczek") {
        cout<<"masz legendarna bron. smok ucieka"<<endl;
    } else if(bron_gracza == "kremowka") {
        cout<<"wygrywasz ze smokiem papieska kremowka"<<endl;
    } else {
        cout<<"smok sie zasnial tlyko z twojej:"<<bron_gracza<<"i staneles w plomianiach"<<endl;
    }
    cout<<"---------------------------------------"<<endl;
}