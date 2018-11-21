// Escriba un programa que lea dos números y determine cuál de ellos es el mayor.

#include <iostream>
using namespace std;

int main() {
	int a, b;
	cout << "Introduce el número a: ";
	cin >> a;
	cout<< "Introduce el número b: ";
	cin >> b;
	
	if (a == b) {
		cout << "Los numeros son iguales\n";
	} else if (a > b){
		cout << "El numero " << a << " es mayor que " << b << endl;
	} else {
		cout << "El numero " << b << " es mayor que " << a << endl;
	}
	
	return 0;
}