#include <iostream>
#include <string>
#include "game.h"
using namespace std;

class monster {
public:
    string nazwa;
    int hp;

    void ryk() {
        cout<<nazwa<<" wydaje przerazajacy ryk! oraz ma "<<hp<<"hp"<<endl;
    }
};

void game::start() {
    cout<<"prosta gra w moim OS"<<endl;
    monster firstmonster;
    firstmonster.nazwa = "smok";
    firstmonster.hp = 150;

    firstmonster.ryk();

    monster secondmonster;
    secondmonster.nazwa = "mama z laczkiem";
    secondmonster.hp = 10000;

    secondmonster.ryk();

    cout<<"========================="<<endl;
}