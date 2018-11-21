#include <iostream>
using namespace std;

int main(){
	int numero;
	cout << "Introduce un numero: ";
	cin >> numero;
	
	if (numero == 0) {
			cout << "El numero es 0\n";
	} else if (numero % 2 == 0) {
		cout << "El numero es par\n";
	} else {
			cout << "El numero es impar\n";
	}
	
	return 0;
}