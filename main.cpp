#include <iostream>
#include <string>
#include "osinfo.h"
#include "login.h"
#include "calculator.h"
#include "game.h"
using namespace std;


int main() {
    cout<<"----WItaj w neoncode OS----"<<endl;
    string username;
    cout<<"Podaj nazwe uzytkownika:";
    cin>>username;
    login user_1(username,3); 
    user_1.log();

    int i;
    while (true){
        cout<<"1.Info o systemie"<<endl;
        cout<<"2.Kalkulator"<<endl;
        cout<<"3.Ciekawa gierka"<<endl;
        cout<<"0. wyjscie"<<endl;
        cin >> i;

        if (i == 1) {
            showVersion();
        } else if (i == 0 ){
            break;
        } else if (i == 2 ){
            double liczba1, liczba2;
            char operacja;

            cout << "--- NeonCode Calculator ---" << endl;
            cout << "Podaj pierwsza liczbe: ";
            cin >> liczba1;
            cout << "Wybierz dzialanie (+, -, *, /): ";
            cin >> operacja;
            cout << "Podaj druga liczbe: ";
            cin >> liczba2;

            calculator moj_kalkulator;
            double wynik = moj_kalkulator.oblicz(liczba1, liczba2, operacja);

            cout << "Wynik: " << wynik << endl;
            cout << "---------------------------" << endl;
        } else if (i ==3){
            game moja_gra;
            moja_gra.start();
        }
    }
}
