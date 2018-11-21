// Ej 10. Escriba un programa que calcule las soluciones de una 
// ecuación de segundo grado de la forma ax^2 + bx + c = 0
#include <iostream>
#include <math.h>
using namespace std;

int main() {
	
	float a, b, c, x1, x2;
	cout << "Introduce el valor de a: ";
	cin >> a;
	cout << "Introduce el valor de b: ";
	cin >> b;
	cout << "Introduce el valor de c: ";
	cin >> c;
	
	x1 = (-1*b + sqrt(pow(b,2)-4*a*c))/(2*a); 
	x2 = (-1*b - sqrt(pow(b,2)-4*a*c))/(2*a); 
	cout << "X1 = " << x1 << endl;
	cout << "X2 = " << x2 << endl;
	return 0;
	}
	
	
	// 1 3 -4, 1 4 5, 1 -8 16