#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	
	setlocale(LC_CTYPE,"Spanish");
	 
	int edad;
	char sexo[10];
	float altura;
	
	cout << "Cuántos años tienes? ";
	cin >> edad;
	cout << "Sexo? ";
	cin >> sexo;
	cout << "Cuánto mides? ";
	cin >> altura;
	
	cout << "\nTienes " << edad << " años.\n";
	cout << "Sexo: " << sexo << ".\n";
	cout << "Mides " << altura << "m.\n";
	
	return 0;
}