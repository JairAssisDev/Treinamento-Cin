#include <iostream>

using namespace std;
int main1() {
    string  nome ="jair victor";
    int idade = 23;
    string n2;
    cin >> n2;
    cout << "meu nome "<< nome << endl
        << "minha idade "<< idade << endl
        << "curso " << n2;
    //cout << "Hello, World!";
    char var = 'b';
    switch (var) {
        case 'a':
            cout << "caso 1 correto" << endl;
            break;
        case 'b':
            cout << "caso 2 correto" << endl;
            break;
        case 'c':
            cout << "caso 3 correto" << endl;
            break;
        default:
            cout << "caso padrao e correspondente" << endl;
            break;
    }

    return 0;
}
