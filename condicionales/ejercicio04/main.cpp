#include <iostream>
using namespace std;

int main() {
	int numero;
	
	cout << "Introduce un numero: ";
	cin >> numero;
	
	if (numero == 0) {
		cout << "El numero es 0\n";
	} else if (numero > 0) {
		cout << "El numero es positivo\n";
	} else {
		cout << "El numero es negativo\n";
	}
	
	return 0;
}