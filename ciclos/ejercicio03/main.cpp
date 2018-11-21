#include <iostream>
using namespace std;

int main() {
	int cuadrado, suma = 0;
	
	for (int i = 1; i <= 10; i++){
		cuadrado = i * i;
		suma += cuadrado;
		
	}
	
	cout << "La suma de los cuadrados de los 10 primeros numeros es: " << suma << endl;
	
	return 0;
}