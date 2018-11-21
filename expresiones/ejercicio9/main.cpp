#include <iostream>
#include <math.h>
using namespace std;

int main() {
	float x, y, resultado = 0;
	
	cout << "Digite el valor de x: ";
	cin >> x;
	cout << "Digite el valor de y:" ;
	cin >> y;
	
	resultado = (sqrt(x))/(pow(y,2)-1);
	
	cout.precision(4);
	cout << "El resultado de la funcion es: " << resultado << endl;
	
	return 0;
	}