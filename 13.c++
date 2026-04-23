#include <iostream>
using namespace std;

void notas(float n1, float n2, float &media, bool &aprovado) {
    media= (n1 + n2) / 2;
    
    if(media >= 6.0)
      aprovado = true;
    else aprovado = false;
}
int main() {
    float n1 = 7, n2 = 5;
    float media;
    bool aprovado;
    notas(n1, n2, media, aprovado);
    cout << "Media: " << media << endl;
    if (aprovado) {
        cout << "aprovado" << endl;
    } else {
        cout << "reprovado" << endl;
    }
    return 0;
}
