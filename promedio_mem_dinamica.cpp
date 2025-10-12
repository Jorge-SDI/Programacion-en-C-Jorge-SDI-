#include <iostream>
using namespace std;

int main() {
	int suma = 0;
	int n;

	cout << "Cuantos numeros desea ingresar? : ";
	cin >> n;
	
	int *ptr = new int [n];
	
	for (int i=0; i < n; i++){
		cout << "Ingresa el numero [" << i << "] : ";
		cin >> ptr[i];
		suma += ptr[i];
		
		float promedio = suma / n;
		cout << "El promedio es: " << promedio << endl;
	}
	
	delete[] ptr;
	
	
	
	return 0;
}

