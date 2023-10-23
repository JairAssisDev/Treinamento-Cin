#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int num1, num2 ,condicao;
    cout << "Seja bem vindo a nossa primeira calculador" << endl;
    cout << "Digite o primeiro numero: " << endl;
    cin >> num1;
    cout << "Digite o segundo numero: " << endl;
    cin >> num2;

    cout << "escolha a o peracao :" << endl;
    cout << "1 para + " << endl;
    cout << "2 para - " << endl;
    cout << "3 para * " << endl;
    cout << "4 para / " << endl;
    cin >> condicao;

    switch(condicao){
        case 1:
            cout << "resultado : "<< num1 << " + " << num2 << " = " << num1 + num2 << endl;
        break;
        case 2:
            cout << "resultado : "<< num1 << " - " << num2 << " = " << num1 - num2 << endl;
        break;
        case 3:
            cout << "resultado : "<< num1 << " * " << num2 << " = " << num1 * num2 << endl;
        break;
        case 4:
        
            cout << "resultado : "<< num1 << " / " << num2 << " = " << num1 / num2 << endl;
        break;
    }

    system("pause");
    return 0;
}