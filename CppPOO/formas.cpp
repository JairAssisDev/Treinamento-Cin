#include <iostream>
#include <stdlib.h>

using namespace std;

class Forma {
	public:
	    virtual void desenhar() = 0;
};

class Circulo : public Forma {
	public:
	    void desenhar() override {
	        cout << "Desenhando um círculo." << endl;
	    }
};

class Retangulo : public Forma {
	public:
	    void desenhar() override {
	        cout << "Desenhando um retângulo." << endl;
	    }
};


int main(){
	
	Forma *forma;
    Circulo circle;
    Retangulo rectangle;
    forma = &circle;
    forma->desenhar();
    forma = &rectangle;
    forma->desenhar();

	system("pause"); 
	return 0;
}
