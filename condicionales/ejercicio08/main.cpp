#include <iostream>
using namespace std;

int main() {
	int a, b, c, d;
	
	cout << "Introduce el primer numero a indexar: ";
	cin >> a;
	cout << "Introduce el segundo numero a indexar: ";
	cin >> b;
	cout << "Introduce el tercer numero a indexar: ";
	cin >> c;
	cout << "Introduce el numero a comparar: ";
	cin >> d;
	
	if(a == d || b == d || c == d) {
		cout << "Si coincide con alguno de los numeros\n";
	} else {
		cout << "No coincide con alguno de los numeros anteriores\n";
	}

	return 0;
}