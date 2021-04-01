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

    bool equalsTo(Cat otherCat) {
        //but string is a class!
        return name == otherCat.name;
    }
    bool lessThan(Cat otherCat) {
        //but string is a class!
        return name < otherCat.name;
    }
};

int main() {
    string name;
    int age;
    
    cin >> name;
    cin >> age;

    Cat gato1 = Cat();
    Cat gato2 = Cat(name, age);

    if(gato1.equalsTo(gato2)) {
        gato1.printCat();
    }
    else if(gato1.lessThan(gato2)) {
        gato2.printCat();
    }
    else {
        cout << "hi" << endl;
    }

    gato1.printCat();
    
    return 0;
}