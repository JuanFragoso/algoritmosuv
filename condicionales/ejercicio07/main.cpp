#include <iostream>
using namespace std;

int main() {
	
	int edad;
	cout << "Cual es tu edad? ";
	cin >> edad;
	
	if(edad >= 18 && edad <= 25){
		cout << edad << " si se encuentra dentro del rango 18-25\n";
	} else {
		cout << edad << " no se encuentra dentro del rando 18-25\n";
	}
}