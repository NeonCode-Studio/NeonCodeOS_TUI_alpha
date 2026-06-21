#include <iostream>
#include "calculator.h"
using namespace std;

double calculator::oblicz(double a,double b,char znak) {
    switch (znak){
        case '+':
            return a+b;
        case '-':
            return a-b;
        case '*':
            return a*b;
        case '/':
            if(b != 0){
                return a/b;
            } else {
                cout<<"BŁĄD! Nie dziel przez zero"<<endl;
                return 0;
            }
        default:
            cout<<"|BŁĄD| nieznany znak działania"<<endl;
            return 0;
    }   
}