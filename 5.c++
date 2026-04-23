#include <iostream>
using namespace std;
int quantidadeDeNumeros (int a) {
    if ( a == 0) {
        return 0;
    }
    return 1 + quantidadeDeNumeros ( a / 10);
}
 int main () {
    int numero = 12345;
    int resultado = quantidadeDeNumeros (numero);

    cout << "A quantidade de numeros do numero" << numero << " é:" << resultado << endl;
    return 0;
    
 }
