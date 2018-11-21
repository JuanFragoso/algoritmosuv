#include <iostream>
using namespace std;

int main(){
	char mychar;
	
	cout << "Introduce un caracter: ";
	cin >> mychar;
	
	switch (mychar) {
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			cout << "Es una vocal minuscula\n";
			break;
		default: 
			cout << "No es una vocal minuscula\n";
			break;
	}
	
	return 0;
}