#include <iostream>
#include <stdlib.h>

using namespace std;

class Pessoa{
    public:
    string nome;
    int idade;
    void apresentar(){
        cout <<  "Ola, eu seu " << nome << " e tenho " << idade << " anos." << endl;
    }
};

int main(){
	Pessoa pessoa1;
	pessoa1.nome = "Jair Victor";
	pessoa1.idade = 23;
	pessoa1.apresentar();
	
	system("pause");
	
	return 0;
}
