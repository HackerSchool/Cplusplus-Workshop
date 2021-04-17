//what happens when you comment this?
#include <iostream>
#include <string>

//exemplo, why is private good?

using namespace std;

class Cat;

void printACat1(Cat& gato);

void printACat2(Cat& gato);

void printACat3(Cat& gato);

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

    void setName(string dname) {
        if(dname.length() < 3) {
            name = dname;
        }
    }
};

int main() {
    Cat gato1 = Cat();
    Cat gato2 = Cat("Maria");
    Cat gato3 = Cat("José",-1);

    gato1.printCat();
    gato2.printCat();
    gato3.printCat();
    gato2.setName("1");
    gato3.setName("1234");

    cout << "versus" << endl;

    cout << endl;

    printACat1(gato2);
    printACat2(gato2);
    printACat3(gato2);

    gato1.name = "1";
    gato2.name = "1234";

    //cout << "showing an example:" << gato1->name << endl;
    
    return 0;
}

void printACat1(Cat& gato) {
    cout << "My cat is named: " << gato.name << endl;
}

void printACat2(Cat& gato) {
    cout << "My cat's name is: " << gato.name << endl;
}

void printACat3(Cat& gato) {
    cout << "My cat's name is: " << gato.name << 
        " and it's age is: " << gato.age << endl;
}