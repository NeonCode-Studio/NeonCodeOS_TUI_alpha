#include <iostream>
#include "login.h"
using namespace std;

login::login(string start_name, int start_ver) {
    nazwa = start_name;
    ver = start_ver;
}

void login::log(){
    cout<<"jestes zalogowany jako"<<nazwa<<endl;
}