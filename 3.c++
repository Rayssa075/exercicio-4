#include <iostream>
using namespace std;
int recursivaPotencia (int a, int n) {
 if ( n== 0) {
    return 1;
 }
  return a * recursivaPotencia (a, n -1);
}

int main () {
    int base = 2;
    int expoente = 3;
    
    cout << base << " elevado a " << expoente << " é:" << recursivaPotencia ( base, expoente) << endl;
    return 0;
}
