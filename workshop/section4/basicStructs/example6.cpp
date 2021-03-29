//what happens when you comment this?
#include <iostream>
#include <string>

using namespace std;

struct Cat {
    string name;
    int age;

    Cat(): Cat("no name", 0) {}
    
    Cat(string dName): Cat(dName, 0) {}
    
    Cat(string dName, int dAge): name(dName),
        age(dAge) {}

    void printCat() {
        cout << name << " " << age << endl;
    }
};

int main() {
    Cat gato1 = Cat();
    Cat gato2 = Cat("2");
    Cat gato3 = Cat("3",-1);

    gato1.printCat();
    gato2.printCat();
    gato3.printCat();
    return 0;
}