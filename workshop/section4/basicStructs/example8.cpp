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
    Cat *gato1 = new Cat();
    Cat *gato2 = new Cat("2");
    Cat *gato3 = new Cat("3",-1);

    (*gato1).printCat();
    (*gato2).printCat();
    (*gato3).printCat();

    gato1->printCat();
    gato2->printCat();
    gato3->printCat();

    cout << "showing an example:" << gato1->name << endl;
    
    return 0;
}