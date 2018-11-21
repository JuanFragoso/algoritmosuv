#include <iostream>
using namespace std;

int main() {
	
	float a, b, c, d, e, f, res;
	cout << "Introduce el valor de a: ";
	cin >> a;
	cout << "Introduce el valor de b: ";
	cin >> b;
	cout << "Introduce el valor de c: ";
	cin >> c;
	cout << "Introduce el valor de d: ";
	cin >> d;
	cout << "Introduce el valor de e: ";
	cin >> e;
	cout << "Introduce el valor de f: ";
	cin >> f;
	
	res = (a+b/c)/(d+e/f);
	cout << "El resultado de la expresión es " << res << endl;
}
