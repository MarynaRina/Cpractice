#include <iostream>

using namespace std;
class Animal{

};

class Cat : virtual public Animal{

};
class Mouse : virtual public Animal{

};

class Cartoon : public Cat, public Mouse{

};



int main() {

}
