#include <iostream>

using namespace std;

int main(){
    int varInt = 100;
    char c = 'r';
    double pFlutuante=5.99;

    cout << "o valor de variavel varInt é: " << varInt << endl;
    cout << "o valor da variavel c é: " << c << endl;
    cout << "o valor da variavel pFlutuante é: " << pFlutuante << endl;
    cout << endl;
    cout << "Memória da variavel vaInt: " << sizeof(varInt) << " Bytes" << endl;
    cout << "Memória da variavel c: " << sizeof(c) << " Bytes" << endl;
    cout << "Memória da variavel pFlutuante: " << sizeof(pFlutuante) << " Bytes" << endl;


    return 0;
}