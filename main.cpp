#include <iostream>

using namespace std;
int sum(int x, int y) {
    return x+y;
};

int mult(int x, int y) {
    return x*y;
};

int main() {
    int (*pF)(int, int) = sum;
    int result = pF(4,2);
    cout << result << endl;

    pF = mult;
    result = pF(4,3);
    cout << result << endl;

}
