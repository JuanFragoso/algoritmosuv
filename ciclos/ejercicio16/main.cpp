#include <iostream>
using namespace std;

int main() {
	int numero;
	
	cout << "Numero para descomponer en factores: ";
	cin >> numero;
	
	for (int i = 2; numero > 1; i++) {
		while(numero % i == 0) {
			cout << i << " ";
			numero /= i;
	
		}
	}
	
	cout << endl;
	
	return 0;
}


/*
20/2
10/2
5/5
1
*/




// cin.getline(var, size, '\n');