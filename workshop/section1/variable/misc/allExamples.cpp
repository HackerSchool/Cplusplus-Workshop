#include <iostream>
using namespace std;

void main() {
    bool algo = true;
    bool outraCoisa = false;

    if(algo) {
        cout << "o algo deu: " << algo << endl;
    }
    else if(outraCoisa) {
        cout << "outraCoisa deu e o algo nao deu" << endl;
    }
    else {
        cout << "nada do que está para cima deu" << endl;
    }
    
    if(outraCoisa) {
        cout << "o outraCoisa deu: " << outraCoisa << endl;  
    }



    int x = 1;
    int y = 0;

    if(x) {
        cout << "o x deu: " << x << endl;
    }
    if(y) {
        cout << "o y deu: " << y << endl;
    }
}