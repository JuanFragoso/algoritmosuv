#include <iostream>
using namespace std;

int main() {
	int n, x = 0, y = 1, z = 0;
	
	cout << "Hasta que numero deseas calcular la serie Fibonacci?: ";
	cin >> n;
	
	for(int i = 1; i <= n; i++) {
		z = x + y;
		cout << z << " ";
		x = y;
		y = z;
	}
	
	return 0;
}