#include <iostream>
using namespace std;

int inverter ( int n, int rev = 0) {
  if (n == 0) {
        return rev;
}
return inverter ( n / 10, rev * 10 + n % 10);
}

int main () {
    int n = 123;
    cout<< " Original" << n << endl;
    cout<< " Invertido: " << inverter (n) << endl;
    return 0;
}
