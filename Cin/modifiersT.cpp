#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int a = 0;//4 bytes
    short int b = 0;//2 bytes
    long int c = 0;//4 bytes

    int a2 = 0;
    signed int b2 = -10;
    unsigned int c2 = 10;

    cout << sizeof(a) << " - " << a << endl;
    cout << sizeof(b) << " - " << b << endl;
    cout << sizeof(c) << " - " << c << endl;

    cout << endl;

    cout << sizeof(a2) << " - " << a2 << endl;
    cout << sizeof(b2) << " - " << b2 << endl;
    cout << sizeof(c2) << " - " << c2 << endl;


    system("pause");
    return 0;
}