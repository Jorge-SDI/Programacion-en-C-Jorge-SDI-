#include <iostream>
using namespace std;

int main() {
	int suma = 0;
	int extArreglo = 5;
	cout << "Largo del arreglo: " << extArreglo << endl;
	
	
	
	int *ptr = new int [extArreglo];
	
	for(int i=0; i < extArreglo; i++){
		cout << "Valores del arreglo [" << i << "] " << ": ";
		cin >> ptr[i];
		suma += ptr[i];
	}

	cout << "La suma total es: " << suma << endl;
	
	return 0;
}

