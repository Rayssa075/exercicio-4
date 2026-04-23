#include <iostream>
using namespace std;
void cat(int idade, string &categoria){
    if(idade<=12){
       categoria= "criança";
       return;
    }
    if(idade<18){
       categoria= "adolescente";
       return;
    }
    if(idade<60){
        categoria= "adulto";
        return;
    }
    if(idade>59){
        categoria= "idoso";
        return;
    }
}
int main(){
    int idade = 20;
    string categoria;
    cat(idade, categoria);
    cout<< "Sua categoria é: " <<categoria;
    return 0;
}
