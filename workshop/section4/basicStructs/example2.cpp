//what happens when you comment this?
#include <iostream>
#include <string>

using namespace std;

struct Cat {
    string name;
    int age;

    Cat(string dName, int dAge) {
        name = dName;
        age = dAge;
    }
};

int main() {
    //no longer works
    //Cat gato = Cat();

    Cat gato = Cat("1",32);

    cout << gato.name << " " << gato.age << endl;

    //this still works
    gato.name = "things";
    gato.age = 100;
        
    cout << gato.name << " " << gato.age << endl;

    return 0;
}