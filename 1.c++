#include <iostream>
using namespace std;
int somarecursiva (int n) {

    if ( n<= 1) {
        return 1;
    }
    return n + somarecursiva ( n - 1);
}

int main () {
    int n = 5;
    int resultado = somarecursiva (n);
    cout<< "O calculo da soma dos numeros inteiros de 1 a "<< n << " é:" << resultado << endl;
    return 0;
}
