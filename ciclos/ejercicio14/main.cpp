#include <iostream>
using namespace std;

int main() {
	float ex1, ex2, ex3;
	int aprobaronTodos = 0, aprobaronUno = 0, aprobaronUltimo = 0;
	
	for(int i = 1; i <= 5; i++) {
		cout << i << ". Calificacion del primer examen: ";
		cin >> ex1;
		cout << i << ". Calificacion del segundo examen: ";
		cin >> ex2;
		cout << i << ". Calificacion del tercer examen: ";
		cin >> ex3;
		cout << endl;
		
		if(ex1 >= 6 && ex2 >= 6 && ex3 >= 6)
			aprobaronTodos++;
			
		if(ex1 >= 6 || ex2 >= 6 || ex3 >= 6)
			aprobaronUno++;
			
		if(ex1 < 6 && ex2 < 6 && ex3 >= 6 )
			aprobaronUltimo++;
	}
	
	cout << "\nAlumnos que aprobaron todos los examenes: " << aprobaronTodos;
	cout << "\nAlumnos que aprobaron un examen: " << aprobaronUno;	
	cout << "\nAlumnos que aprobaron el ultimo examen: " << aprobaronUltimo << endl;
	return 0; 
}