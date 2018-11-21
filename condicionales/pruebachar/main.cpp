#include <iostream>
using namespace std;

int main() {
	char colores_res[10] = "RGBC";
	cout << colores_res[1] << endl;
	
	char palabra[] = "Masculino";
	char nombre[20];
	
	cout << palabra << endl;
	cout << "Digite su nombre: ";
	cin >> nombre;
	gets(nombre);
	cin.getline(nombre,20,'\n');
	cout << nombre << endl;
	
	return 0;
}