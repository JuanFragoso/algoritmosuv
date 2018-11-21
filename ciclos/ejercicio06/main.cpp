#include <iostream>
using namespace std;

int main() {
	
	int x, y, res = 1;
	
	cout << "Introduce x: ";
	cin >> x;
	cout << "Introduce y: ";
	cin >> y;
	
	for (int i = 1; i <= y; i++) {
			res *= x;
	}
	
	cout << "\nEl resultado de la elevacion es: " << res << endl;;
	
	return 0;
}