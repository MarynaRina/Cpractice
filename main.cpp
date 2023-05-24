#include <iostream>
#include <utility>

using namespace std;

class Human {
protected:
    string name;
public:
    Human(string n) : name(std::move(n)) {}

    void print() const {
        cout << "I'm human" << endl;
        cout << "My name is: " << name << endl;
    }
};

class Worker : public Human {
private:
    double salary;
public:
    Worker(string n, double s) : salary(s), Human(n) {}

    void print() {
        cout << "I'm worker" << endl;
        cout << "My name is: " << name << endl;
        cout << "My salary is: " << salary << endl;
    }
};


int main() {
    Worker worker("Alex", 500);
    worker.print();

    Human *pWorker = &worker;
    pWorker->print(); // стрелочка потому что используем указатель

    Human &rWorker = worker;
    rWorker.print();
    return 0;
}
