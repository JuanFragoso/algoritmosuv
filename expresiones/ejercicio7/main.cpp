#include <iostream>
using namespace std;

int main () {
	float practica, teoria, participacion, calificacion_final=0;
	
	cout << "Evaluación práctica: ";
	cin >> practica;
	cout << "Evaluacion teoria: ";
	cin >> teoria;
	cout << "Evaluacion participacion: ";
	cin >> participacion;
	
	practica = practica * 0.3;
	teoria = teoria * 0.6;
	participacion = participacion * 0.1;
	
	calificacion_final = teoria + practica + participacion;
	
	cout << endl << "La califiacion final es " << calificacion_final << endl;
	
	return 0;
}