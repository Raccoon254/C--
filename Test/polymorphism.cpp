#include <iostream>
#include <string>

using namespace std;

class Animal {
private:
    string name;
public:
    Animal(string name) {
        this->name = name;
    }
    virtual void speak() {
        cout << "I am an animal" << endl;
    }
    string getName() {
        return name;
    }
};

class Dog : public Animal {
public:
    Dog(string name) : Animal(name) {}
    void speak() {
        cout << "Woof!" << endl;
    }
};

int main() {
    Animal* animal1 = new Animal("Bob");
    Animal* animal2 = new Dog("Rover");
    
    cout << animal1->getName() << ": ";
    animal1->speak(); // Outputs "I am an animal"
    
    cout << animal2->getName() << ": ";
    animal2->speak(); // Outputs "Woof!"
    
    delete animal1;
    delete animal2;
    
    return 0;
}
