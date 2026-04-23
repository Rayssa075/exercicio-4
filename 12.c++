#include <iostream>
using namespace std;

void verificar(int n, bool &resultado) {
    resultado = (n % 2 == 0);
}
int main() {
    int n = 4;
    bool resultado;
    verificar(n, resultado);
    if (resultado) {
        cout << n << " é par" << endl;
    } else {
        cout <<  n << " é impar" << endl;
    }
    return 0;
}
