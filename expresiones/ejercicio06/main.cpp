#include <iostream>
using namespace std;

int main() {
	
	float a, b, c, d;
	cout << "Calcula la media de 4 alumnos\n";
	cout << "Introduce la calificacion del alumno 1: " << endl;
	cin >> a;
	cout << "Introduce la calificacion del alumno 2: " << endl;
	cin >> b;
	cout << "Introduce la calificacion del alumno 3: " << endl;
	cin >>  c;
	cout << "Introduce la calificacion del alumno 4: " << endl;
	cin >> d;
	
	cout << "La calificacion media del grupo es " << (a+b+c+d)/4 << endl;
	
	return 0;
	}
