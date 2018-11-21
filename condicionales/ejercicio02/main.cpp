#include <iostream>
using namespace std;

int main(){
	int a, b, c;
	
	cout << "Introduce el numero a: ";
	cin >> a;
	cout << "Introduce el numero b: ";
	cin >> b;
	cout << "Introduce el numero c: ";
	cin >> c;
	
	if (a == b && a==c){
		cout << "Los tres son iguales";
	} else if (a >= b && a >= c) {
		cout << "El numero " << a << " es el mayor";
	} else if (b >= a && b >= c ) {
		cout << "El numero " << b << " es el mayor";
	} else {
		cout << "El numero " << c << " es el mayor";
	}
	
	cout << endl;
	
	return 0;
}