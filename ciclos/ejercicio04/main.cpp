#include <iostream>
using namespace std;

int main() {
	float temperatura, sumaTotal = 0, mayor = 0, menor = 999999;
	
	for (int i = 0; i < 24; i += 4){
		cout << "Digite la temperatura de la hora " << i << ": ";
		cin >> temperatura;
		
		sumaTotal += temperatura;
		
		if (temperatura > mayor) {
			mayor = temperatura;
			}
		if (temperatura < menor) {
			menor = temperatura;
		}
	
	}
	
	sumaTotal /= 6;
	
	cout << "La temperatura media del dia es: " << sumaTotal << endl;
	cout << "La temperatura mas alta del dia es: "	<< mayor << endl;
	cout << "La temperatura mas baja del dia es: " << menor << endl;
	
	return 0;
}