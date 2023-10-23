#include <iostream>
#include <vector>
using namespace std;
int calMDC(int a, int b) {
    int R = 0;
    while (a % b > 0) {
        R = a % b;
        a = b;
        b = R;
}
    return b;
}

int main() {
    int numCasos;
    cin >> numCasos;

    for (int caso = 1; caso <= numCasos; caso++) {
        int numFilas;
        cin >> numFilas;

        cout << "Case " << caso << ":" << endl;

        for (int fila = 0; fila < numFilas; fila++) {
            int a, b;
            cin >> a >> b;
            int mdc = calMDC(a, b);
            cout << mdc << endl;
                 }
    }
    return 0;
}
