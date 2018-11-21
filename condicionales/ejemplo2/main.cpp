/* La sentencia switch

	switch(expresion){
		case literal1:
			bloque de instrucciones1;
			break;
		
		case literal2:
			bloque de instrucciones2;
			break;
			
		case literal3:
			bloque de instrucciones3;
			break;
		
		default:
			bloque de instrucciones por defecto;
			break;
	}
*/

#include <iostream>
using namespace std;

int main() {
	int numero;
	
	cout << "Digite un numero entre 1-4: ";
	cin >> numero;
	
	switch(numero){
		case 1:
			cout << "Es el numero 1\n"; 
			break;
			
		case 2:
			cout << "Es el numero 2\n";
			break;
			
		case 3:
			cout << "Es el numero 3\n";
			break;
			
		case 4:
			cout << "Es el numero 4\n";
			break;
			
		default:
			cout << "No esta en el rango de 1-4\n";
			break;
			
	}
	
	return 0;
}