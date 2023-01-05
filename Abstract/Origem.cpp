#include <iostream>

using namespace std;

class Primeira {
public:
	Primeira() {
		cout << "Iniciando primeira...." << endl;
	}
	~Primeira() { cout << "Terminando a primeira" << endl; }
	void fmembro1() {
		cout << "fmembro da primeira" << endl;
	}
};

class Segunda {
public:
	Segunda() {
		cout << "Iniciando Segunda...." << endl;
	}
	~Segunda() { cout << "Terminando a Segunda" << endl; }
	void fmembro2() {
		cout << "fmembro da Segunda" << endl;
	}
	// Para a classe ser abstrata precisa de uma ou mais funcções virtuais igualadas a zero
	virtual void f_membro() = 0;
};

class Terceira: public Primeira, public Segunda {
public:
	Terceira() {
		cout << "Iniciando Terceira...." << endl;
	}
	~Terceira() { cout << "Terminando a Terceira" << endl; }
	void fmembro3() {
		cout << "fmembro da Terceira" << endl;
	}
	virtual void f_membro() {
		cout << "Utilizando metodo da classe abstrata" << endl;
	}
};

struct A {
	virtual void f() = 0;
};

struct B : A {
	virtual void f() { cout << "Teste" << endl; }
};
int main() {
	Terceira terceira;
	terceira.f_membro();
}