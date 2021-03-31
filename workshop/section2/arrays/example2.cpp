#include <iostream>
using namespace std;



//explain for and foreach here also for of for


















void myFunction();

int main() {
    int xarray[] = {1, 2, 3};
    int yarray[3] = {1, 2, 3};

    //does not work
    //int zarray[2] = {1, 2, 3};

    //works, but 4th position will be random
    int zArray[4] = {1,2,3};

    string sarray[] = {"1","ola", "3"};

    cout << yarray << endl;
    cout << sarray << endl;

    //y array is 1 2 3
    //If we access position 0, we're changing 1 to 4
    yarray[0] = 4;

    cout << yarray << endl;
    cout << yarray[1] << endl;

    return 0;
}

void myFunction() {
    cout << "I work" << endl;
}