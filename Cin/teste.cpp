#include <iostream>

using namespace std;

int main(){

    int idade;
    double altura;
    char letra;

    idade = 25;
    altura = 1.75;
    letra = 'A';
    cout << "\n hello word \n"; 
    if (idade >= 18) {
        cout << "Pode dirigir!" << endl;
    } else {
        cout << "Não pode dirigir!" << endl;
    }
    int contador = 0;
    while (contador < 5) {
        cout << "Contagem: " << contador << endl;
        contador++;
    }
    int meuVetor[5];
    meuVetor[0] = 10;
    meuVetor[1] = 20;
    
    return 0;
}