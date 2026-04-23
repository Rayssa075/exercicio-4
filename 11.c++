#include <iostream>
using namespace std;

int maior (int a, int b){
    if ( a > b) {return a;
    } else{
            return b; }
}
int menor (int a, int b){
    if ( a < b) { 
        return a; 
    } else{
         return b;} 
}
        
int main () {
    int a = 5;
    int b = 7;
    int resultadomaior = maior(a, b);
    int resultadomenor = menor(a,b);
    cout<< "O maior numero é: " << resultadomaior<< " e o menor é " <<resultadomenor<< endl;
    return 0;
}
