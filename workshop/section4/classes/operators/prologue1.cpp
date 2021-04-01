//what happens when you comment this?
#include <iostream>
#include <string>

//exemplo, why is private good?

using namespace std;

class Cat {
    public:

    string name;
    int age;

    public:

    Cat(): Cat("no name", 0) {}
    
    Cat(string dName): Cat(dName, 0) {}
    
    Cat(string dName, int dAge): name(dName),
        age(dAge) {}

    void printCat() {
        printName();
        cout << " ";
        printAge();
        cout << endl;
    }

    void printName() {
        cout << name;
    }

    void printAge() {
        cout << age;
    }
};

int main() {
    int x;
    int y;
    
    cin >> x;
    cin >> y;

    if(x == y) {
        cout << x << endl;
    }
    else if(x < y) {
        cout << y << endl;
    }
    else {
        cout << x + y << endl;
    }
    cout << x++ << endl;

    return 0;
}