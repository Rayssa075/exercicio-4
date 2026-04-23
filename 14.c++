#include <iostream>
using namespace std;

float divi(float a, float b) {
    if (b == 0) {
        cout << "Erro" << endl;
        return 0; 
    } else {
        return a / b;
    }
}

int main() {
    float a = 10, b = 2;
    float resultado = divi(a, b);

    if (b != 0) {
        cout << "Resultado: " << resultado << endl;
    }

    return 0;
}
