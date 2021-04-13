#include <iostream>
using namespace std;

int main() {
    int x = 1;
    // x = x + 1
    cout << "- " << x++ << endl;

    cout << "-- " << x << endl;

    cout << "- " << ++x << endl;
    
    cout << "-- " << x << endl;

    x += 5; // x = x + 5;
    
    cout << "- " << x << endl;

    x-=1; // x = x - 1;
    
    cout << "-- " << x << endl;
    
    cout << "end of section" << endl << endl;
    
    cout << true  << endl;

    cout << false  << endl;

    cout << (bool) 1  << endl;


    //(bool) 2 => true
    cout << (bool) 2  << endl;

    cout << (1 == 1) << endl;

    cout << (1 == 0) << endl;

    // print(1 and 0)
    cout << (1 && 0) << endl;

    // print(1 or 0)
    cout << (1 || 0) << endl;

    return 0;
}