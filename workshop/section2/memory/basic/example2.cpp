#include <iostream>
using namespace std;

void main() {
    int aArray[5] = {1,2,3,4,5};
    printFirstPositionArray(aArray);

    changeArrayContent1(aArray);
    
    printFirstPositionArray(aArray);
    
    changeArrayContent2(aArray);
    
    printFirstPositionArray(aArray);
}

void printFirstPositionArray(int xArray[]) {
    cout << "My first position is" << xArray[0] << endl;
}

void changeArrayContent1(int xArray[]) {
    xArray[0] = 1;
}

void changeArrayContent2(int xArray[5]) {
    xArray[0] = 1;
}