#include <iostream>

using namespace std;

class Dollar{
    //friend Dollar operator+(const Dollar& d1, const Dollar& d2);
private:
    int m_dollar;
public:
    Dollar(int dollar): m_dollar(dollar){}

    int dollar() const{
        return m_dollar;
    }

    Dollar operator+(const Dollar& other) const {
        return Dollar(m_dollar+other.m_dollar);
    }
};

//Dollar operator+(const Dollar& d1, const Dollar& d2){
//    return Dollar(d1.dollar() + d2.dollar());
//}

//Dollar operator+(const Dollar& d1, const Dollar& d2){
//    return Dollar(d1.m_dollar + d2.m_dollar);
//}

int main() {
    Dollar d1(23);
    Dollar d2(11);
    Dollar d3 = d1 + d2;
    cout << d3.dollar() << endl;
}
