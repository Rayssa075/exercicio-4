#include <iostream>
using namespace std;

void triangulo(float a, float b, float c, string &tipo) {
    if (a == b && b == c) {
        tipo = "Equilatero";
    } else if (a == b || a == c || b == c) {
        tipo = "Isosceles";
    } else {
        tipo = "Escaleno";
    }
}
int main() {
    float a = 3, b = 3, c = 3;
    string tipo;
    tipo = "Equilatero";
    triangulo(a, b, c, tipo);
    cout << tipo << endl;
    return 0;
}
