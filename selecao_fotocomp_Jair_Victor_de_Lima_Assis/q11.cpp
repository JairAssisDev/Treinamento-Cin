#include <iostream>
#include <vector>

using namespace std;

int main() {
    int numCasos;
    cin >> numCasos;

    for (int caso = 1; caso <= numCasos; caso++) {
        int numFileiras;
        cin >> numFileiras;

        cout << "Case " << caso << ":" << endl;

        if (numFileiras == 0) {
            cout << "Empty case!" << endl;
            continue;
        }

        for (int fileira = 0; fileira < numFileiras; fileira++) {
            int numero1, numero2, numero3;
            cin >> numero1 >> numero2 >> numero3;
            int soma = numero1 + numero2 + numero3;
            cout << soma << endl;
        }
    }

    return 0;
}
