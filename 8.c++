#include <iostream>
using namespace std;

int numero ( int a, int b) { 
    if ( b == 0 ) { 
        return 0;
    } return a + numero (a, b - 1);
}

int main () {
    int a = 3;
    int b = 4;
    int resultado = numero (a,b);
    cout << " O resultado para a multiplicação de " <<a<< " e " << b<< " é " << resultado << endl;
    
    return 0; }
