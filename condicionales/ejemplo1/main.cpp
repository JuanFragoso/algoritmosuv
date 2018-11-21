/* La sentencia if
 * 
  if (condicion) {
	código 1;
	}
	else {
	código 2; 
	}
*/
#include <iostream>
using namespace std;

int main() {
	int numero;
	
	cout << "Digita un numero: ";
	cin >> numero;
	
	if (numero == 5){		// == 	!=	>	<	>=	<=
		cout << "El numero es igual a 5\n";
	} else {
		cout << "El numero no es 5\n";
	}
	
	
	return 0;
}