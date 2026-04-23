#include <iostream>
using namespace std;
void analise(int a, int b, int c, int &maior){
    if(a>=b && a>=c){
        maior=a;
    }
    if(b>=a && b>=c){
        maior=b;
    }
    if(c>=a && c>=b){
        maior=c;
    }
}
int main (){
    int a=10, b=7, c=15, maior;
    analise(a, b, c, maior);
    cout<<"O maior é: " <<maior;
    return 0;
}
