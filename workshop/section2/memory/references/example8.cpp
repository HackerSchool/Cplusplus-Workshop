#include <iostream>
using namespace std;

int main() {
    int xArray[] = {1,2,3};
    
    for(int &x : xArray) {
        x++;
    }
    for(int x: xArray) {
        cout << "X is: " << x << " ";
    }
    cout << endl;
    for(int x: xArray) {
        x++;
    }

    for(int x: xArray) {
        cout << "X is: " << x << endl;
    }

    cout << endl;
    return 0;
}