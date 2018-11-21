#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int opcion, numero;
	
	cout << "\t::MENU::\n";
	cout << "1.  Cubo de un numero\n";
	cout << "2.  Numero par o impar\n";
	cout << "3.  Salir\n";
	cout << "Opcion: ";
	cin >> opcion;
	
	switch(opcion) {
		case 1:
			cout << "Introduce un numero a elevar al cubo: ";
			cin >> numero;
			cout << "El cubo del numero es " << pow(numero,3) << endl;
			break;
		case 2:
			cout << "Introduce un numero para determinar si es par o impar: ";
			cin >> numero;
			if (numero % 2 == 0) {
				cout << "El numero es par\n";
			} else {
				cout << "El numero es impar\n";
			}
			break;
		case 3:
			cout << "Vuelve pronto\n";
			break;
		default:
			cout << "Opcion no valida\n";
			break;
	}
	
	return 0;
}