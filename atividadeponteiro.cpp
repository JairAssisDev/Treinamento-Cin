#include <iostream>

using namespace std;

int main2() {
    string comida = "Tapioca";  // Declares a string variable named 'comida' and initializes it with "Tapioca".

    string* ptr = &comida;  // Declares a pointer to a string named 'ptr' and assigns the address of 'comida' to it.

    cout << comida << endl;  // Prints the value of 'comida', which is "Tapioca".
    cout << &comida << endl;  // Prints the address of 'comida'.

    cout << ptr << endl;  // Prints the value of the pointer 'ptr', which is the address of 'comida'.

    cout << *ptr << endl;  // Prints the value that 'ptr' is pointing to, which is the content of 'comida' ("Tapioca").

    return 0;
}
