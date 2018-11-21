#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int suma = 0, n;
	
	cout << "Introduce el numero de elementos a sumar: ";
	cin >> n;
	
	for (int i = 1; i <= n; i++) {
		suma = suma + pow(2,i);
		
	}
		cout << "El resultado es: " << suma << endl;
	
	return 0;
}