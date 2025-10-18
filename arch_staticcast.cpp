#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "¿Cuantos valores va a ingresar?: ";
	cin >> n;
	
	int *ptr = new int [n];
	int suma = 0;
	
	for(int i=0; i <n; i++){
		cout << "Ingrese el valor para el indice [" << i+1 << "]: ";
		cin >> ptr[i];
		suma += ptr[i];
	}
	
	int mayor = ptr[0];
	int menor = ptr[0];
	
	for(int i=1; i<n; i++){
		if(ptr[i] > mayor) mayor = ptr[i];
		if(ptr[i] < menor) menor = ptr[i];
	}
	
	double promedio = static_cast<double>(suma) / n;
	
	cout << " -----Resultados---- " << endl;
	cout << "Valores del arreglo: [";
	for(int i=0; i < n; i++){
		cout << ptr[i];
		if (i < n-1) cout << ", ";
	}
	cout << "]" << endl;
	
	cout << "Suma total: " << suma << endl;
	cout << "Promedio: " << promedio << endl;
	cout << "Numero mayor: " << mayor << endl;
	cout << "Numero menor: " << menor << endl;
	
	delete[] ptr; 
	
	return 0;
}

