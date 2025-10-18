#include <iostream>
using namespace std;

int main() {

	//numero de valores declarar
	int n;
	cout << "Cuantos numeros desea ingresar: ";
	cin >> n;
	
	//arreglos con memdinamica
	int *numeros = new int[n];
	int *result = new int[n];
	
	//pedir valores para los indices
	for(int i = 0; i < n; i++){
		cout << "Ingrese los valores para los indices [" << i << "] : ";
		cin >> numeros[i];
	}
	
	int multiplicador;
	cout << "Ingrese el valor que multiplicara los valores de arriba: ";
	cin >> multiplicador;
	
	//multiplicar
	for(int i=0; i < n; i++){
		result[i] = numeros[i] * multiplicador;
	}
	
	//mostrar arreglo original
	cout << "Arreglo original --> [";
	for(int i = 0; i < n; i++){
		cout << numeros[i];
		if(i < n-1)
			cout << ", ";
	}
	cout << "] " << endl;
	
	cout << "Arreglo multiplicado --> [";
	for(int i=0; i < n; i++){
		cout << result[i];
		if(i < n - 1)
			cout << ", ";
	}
	cout << "] " << endl;
	
	
	delete [] numeros;
	delete [] result;
	
	return 0;
}

