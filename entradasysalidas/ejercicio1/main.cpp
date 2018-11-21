#include <iostream>
using namespace std;

int main() {
	
	float a, b, sum, res, mult, div;
	cout << "Introduce el valor de a: ";
	cin >> a;
	cout << "Introduce el vlaor de b: ";
	cin >> b;
	
	sum = a+b;
	cout << sum << endl;
	res = a-b;
	cout << res << endl;
	mult = a*b;
	cout << mult << endl;
	div = a/b;
	cout << div << endl;
	
	return 0;
	}