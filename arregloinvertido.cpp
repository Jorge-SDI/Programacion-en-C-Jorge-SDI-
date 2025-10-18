#include <iostream>
using namespace std;

int main() {
	
	int n;
	cout << "Cuantos valores va a ingresar?: ";
	cin >> n;
	
	int *arreglo = new int [n];
	int *invert = new int [n];
	
	//arreglo normal
	for(int i = 0; i < n; i++){
		cout << "Ingrese el valor para el indice [" << i << "]: ";
		cin >> arreglo[i];
	}
	
	//arreglo invertido
	for(int i = 0; i < n; i++){
		invert[i] = arreglo[n-1-i];
	}
	
	
	//arreglo original
	cout << "Arreglo original --> [";
	for(int i = 0; i < n; i++){
		cout << arreglo[i];
		if(i < n-1)
			cout << ", ";
	}
	cout << "] " << endl;
	

	//arreglo invertido
	cout << "Arreglo  inverso --> [";
	for(int i = 0; i < n; i++){
		cout << invert[i];
		if(i < n-1)
			cout << ", ";
	}
	cout << "] " << endl;
	
	delete[] arreglo;
	delete[] invert;
	
	
	return 0;
}

