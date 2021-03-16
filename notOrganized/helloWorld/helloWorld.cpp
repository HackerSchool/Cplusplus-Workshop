#include <iostream>
#include <string>
using namespace std;

int add2Numbers(int x, int y) {
    return x + y;
}

void printMyNumber(int x) {
    cout << x;
}

void dizOla() {
    cout << "ola";
}


void main() {
    
    dizOla();

    int minhaVariavel1 = 1;
    int minhaVariavel2 = 2;
    string minhaVariavel3 = "coisas";
    float minhaVariavel4 = 1.4;
    string minhaVariavel5 = "c";
    int minhaVariavel6 = add2Numbers(minhaVariavel2, minhaVariavel1);
    int minhaVariavel7 = add2Numbers(minhaVariavel2, minhaVariavel4);

    printMyNumber(minhaVariavel7);

    cout << (minhaVariavel1 + minhaVariavel2);
    cout << (minhaVariavel3);
    cout << (minhaVariavel4);


}




void typesOfNumbers() {
    int var1 = 1;
    float var2 = 2.1f;
    double var3 = 2.1f;
    unsigned int var4 = 1;
    long var5 = 2;

}