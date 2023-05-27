#include <iostream>

using namespace std;

class Human {
protected:
    string name;
public:
    Human(string n) : name(n){}

    virtual void print() const {
        cout << "I'm human" << endl;
        cout << "My name is: " << name << endl;
    }
};

class Worker : public Human {
private:
    double salary;
public:
    Worker(string n, double s) : salary(s), Human(n) {}

    void print() const override {
        cout << "I'm worker" << endl;
        cout << "My name is: " << name << endl;
        cout << "My salary is: " << salary << endl;
    }
};


class Animal{
public:
    virtual void say() = 0;
    virtual ~Animal(){
        cout<<"~Animal"<<endl;
    }
};

class Dog:public Animal{
public:
    void say()override {
        cout<<"Woof"<<endl;
    }

    ~Dog(){
        cout<<"~Dog"<<endl;
    }
};

class Cat:public Animal{
public:

};

void Say(Animal* animal){
    animal->say();
}


int main() {
    Animal* cat = new Cat();
    Animal* dog = new Dog();

    Say(cat);
    Say(dog);

    delete cat;
    delete dog;
}
