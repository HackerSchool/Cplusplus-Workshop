//what happens when you comment this?
#include <iostream>
#include <string>

using namespace std;

struct Cat {
    string name;
    int age;

    Cat(string dName, int dAge): name(dName),
        age(dAge) {}
    /*
    Cat(string dName, int dAge) {
        name = dName;
        age = dAge;
    }
    */
};

struct Cat2 {
    string name;
    int age;

    Cat2(string dName, int dAge): name(dName) {
        if(dAge < 0) {
            age = 0;
        }
        else {
            age = dAge;
        }
    }
};

int main() {
    Cat gato = Cat("1",-1);
    Cat2 gato2 = Cat2("2",-3);

    cout << gato.name << " " << gato.age << endl;
    cout << gato2.name << " " << gato2.age << endl;
    
    return 0;
}