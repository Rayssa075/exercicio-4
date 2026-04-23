#include <iostream>
using namespace std;
int calculeAsomaDosDigitos (int a) {
    if (a == 0) {
        return 0;
    }
   return (a % 10) + calculeAsomaDosDigitos ( a / 10);
}

int main (){
    int numero = 123;
    int resultado = calculeAsomaDosDigitos (numero);
    cout << "A soma dos sigitos do numero " << numero << "é:" << resultado << endl;
    return 0;
}
