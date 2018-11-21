#include <iostream>
using namespace std;

int factorial(int num){
	int factorial = 1;
	
	for(int i = 1; i<= num; i++) {
		factorial *= i;
	}
	
	return factorial;
	
}


int main(){
	int numero, resultado = 0;
	
	cout << "Digite un numero para obtener la suma de factoriales: ";
	cin >> numero;
	
	for (int i = 1; i <= numero; i++){
		resultado = resultado + factorial(i);
	}

	cout << "La suma de factoriales hasta " << numero << " es: " << resultado << endl;
	
	return 0;
}