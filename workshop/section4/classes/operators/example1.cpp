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



    //operators
    
    friend ostream& operator<<(ostream& os, const Cat& dt);
    
    bool operator ==(const Cat& otherCat) const {
        return name == otherCat.name;
    }

    bool operator <(const Cat& otherCat) const {
        return name < otherCat.name;
    }
    
    //old things
    bool equalsTo(Cat& otherCat) {
        //but string is a class!
        return name == otherCat.name;
    }
    bool lessThan(Cat& otherCat) {
        //but string is a class!
        return name < otherCat.name;
    }

    void incrementAge() {
        age+=1;
    }
};

ostream& operator<<(ostream& os, const Cat& cat) {
        os << cat.name << " " << cat.age << " ";
        return os;
    }


int main() {
    string name;
    int age;
    
    cin >> name;
    cin >> age;

    Cat gato1 = Cat();
    Cat gato2 = Cat(name, age);

    if(gato1 == gato2) {
        cout << gato1 << endl;
    }
    else if(gato1 < gato2) {
        cout << gato2 << endl;
    }
    else {
        cout << "hi" << endl;
    }

    gato1++;
    cout << gato1 << endl;
    
    return 0;
}

int Oldmain() {
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

    gato1.incrementAge();
    gato1.printCat();
    
    return 0;
}

