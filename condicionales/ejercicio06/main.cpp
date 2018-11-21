#include <iostream>
using namespace std;

int main() {
	
	char mychar;
	
	cout << "Introduce una letra: ";
	cin >> mychar;
	
	switch(mychar){
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		cout << "Es una vocal minuscula\n";
		break;
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
		cout << "Es una vocal mayuscula\n";
		break;
	default:
		cout << "No es una vocal\n";
		break;
	
	}
	
	return 0;
}