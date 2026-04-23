#include <iostream>
using namespace std;
void novo(int salario, int &aumento, int &total){
    if(salario<=1000){
        aumento=salario*0.20;
        total= salario+aumento;
        return;
    }
    if(salario<=2000){
        aumento=salario*0.10;
        total= salario+aumento;
        return;
    }
    if(salario>2000){
        aumento=salario*0.05;
        total=salario+aumento;
        return;
    }
}
int main(){
    int aumento, total, salario=1000;
    novo(salario, aumento, total);
    cout<< "Seu novo salario é: " <<total;
    
}
