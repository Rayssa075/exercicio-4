#include <iostream>
using namespace std;

int numero (int n) {
   int n1, n2, n3;
    
    n3 = n % 10;        
    n2 = (n / 10) % 10;   
    n1 = n / 100;
    
    return (n3 * 100) + ( n2 * 10 ) + n1;
    
}

int main () {
    int numerooriginal = 121;
    int palindromo= numero (numerooriginal);

    if (palindromo == numerooriginal) {
        cout << "O numero " << numerooriginal << "é um palindromo." << endl;}
     else
    cout << "O numero " << numerooriginal << "não é um palindromo." << endl;
return 0;}
