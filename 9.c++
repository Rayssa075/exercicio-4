#include <iostream>
using namespace std;

int mdc ( int a, int b) {
    if (b == 0) {
        return a;}
    return mdc (b, a % b);
}

int main () {
    int a = 12;
    int b = 8;
    int resultado = mdc (a,b);
    
    cout << " O MDC (Maximo Divisor Comum) de " << a << " e " << b << " é " << resultado << endl;
    return 0;
}
