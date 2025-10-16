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
	}
	
	double promedio = static_cast<double>(suma) / n;
	cout << "\nEl promedio es: " << promedio << endl;
	
	cout << "Valores del arreglo: [";
	for (int i = 0; i < n; i++) {
		cout << ptr[i];
		if (i < n - 1) cout << ", "; 
	}
	cout << "]" << endl;
	
	
	
	
	
	delete[] ptr;
	
	
	
	return 0;
}

