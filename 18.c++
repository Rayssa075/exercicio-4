#include <iostream>
using namespace std;

void triangulo ( int a, int b, int c, bool &n) {
    if ((a + b > c) && (a + c > b) && (c + b > a ) ){
      n = true; }
      else {
          n = false;
      }
}
    int main () {
        int a= 3, b = 4, c = 5;
        bool resultado = false;
        
      triangulo(a, b, c, resultado);
        
        if (resultado) {
            cout << " Os lados " << a << ", " << b << " e " << c << " formam um triangulo" << endl; }
            else {
                cout << "Não forma um triangulo" << endl;
            }
            return 0;
            
    }
