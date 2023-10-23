#include <iostream>
#include <vector>

using namespace std;

int encontraMaior(const vector<int>& numeros) {
    int Maior = numeros[0];
    for (int i = 1; i < numeros.size(); i++) {
       if (numeros[i] > Maior) {
            Maior = numeros[i];
        }
    }
    return Maior;
}

int main() {
    int numCasos;
    cin >> numCasos;

    for (int caso = 1; caso <= numCasos; caso++) {
        int numFilas;
        cin >> numFilas;

        vector<int> numeros;
        for (int fila = 0; fila < numFilas; fila++) {
            int num;
            cin >> num;
            numeros.push_back(num);
        }

        int Maior = encontraMaior(numeros);

        cout << "Case " << caso << ":" << endl;
        cout << Maior << endl;
    }

    return 0;
}
