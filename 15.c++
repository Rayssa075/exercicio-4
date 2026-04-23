#include <iostream>
using namespace std;

void trocar(int &a, int &b) {
    int  algo = a;
    a = b;
    b = algo;
}

int main() {
    int a = 2, b = 8;
    trocar(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}
