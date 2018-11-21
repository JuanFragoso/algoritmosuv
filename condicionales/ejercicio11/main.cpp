#include <iostream>
using namespace std;

int main() {
	int opcion;
	float deposito, retiro, saldo = 1000;
	cout << "\tBienvenido a Fragobank!" << endl;
	cout << "\tSu saldo actual es de $" << saldo << endl;
	cout << "1.  Realizar deposito en cuenta\n";
	cout << "2.  Realizar retrio de la cuenta\n";
	cout << "3.  Salir\n";
	cout << "Opcion: ";
	cin >> opcion;
	
	switch(opcion){
		case 1:
			cout << "Digite la cantidad de dinero a depositar: $";
			cin >> deposito;
			saldo += deposito;
			cout << "Dinero en cuenta: $" << saldo << endl;
			break;
		case 2:
			cout << "Digite la cantidad de dinero a retirar: $";
			cin >> retiro;
			if (retiro > saldo){
				cout << "NO tiene fondos suficientes\n";
			} else {
				saldo -= retiro;
				cout << "Dinero en cuenta: $" << saldo << endl;
			}
			break;
		case 3:
			cout << "Cerrando sesion...  Hasta pronto\n"; 
			break;
		}
	
	return 0;
}