#include <iostream>
using namespace std;

int main() {
	int suma = 0, n;
	cout << "Cuantos elementos deseas sumar?: ";
	cin >> n;
	
	for(int i = 1; i <= n; i++) {
		if (i % 2 == 0) {
			suma -= i; 
		} else {
			suma += i;
		}
	}
	
	cout << "El resultado es: " << suma << endl;
	
	return 0;
	}