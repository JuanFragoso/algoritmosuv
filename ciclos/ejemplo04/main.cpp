#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main() {
	
	srand(time(NULL));
	// rand()  0 - RAND_MAX 1,623
	int nums[7];
	
	for (int i = 0; i <= 6; i++) {
		cout << "En la posicion " << i << " se guarda " << nums[i] << endl << endl;
	}
	
	for (int i = 1; i <= 4000; i++)
		nums[rand() % 7 + 1]++;
	
	for (int i = 1; i <= 6; i++) {
		cout << i << " se repite " << nums[i] << " veces" << endl;
	}
	
	return 0;
}