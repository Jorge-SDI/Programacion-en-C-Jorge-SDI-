#include <iostream>
using namespace std;

/*
Crea un programa en C++ que:

Pida al usuario cu�ntos n�meros desea ingresar
Guarde los n�meros en un arreglo din�mico.

Calcule:
El mayor n�mero.
El menor n�mero.
El promedio de todos los valores.

Muestre en pantalla:
Los valores ingresados.
El n�mero mayor, el menor y el promedio. */


int main() {
	//pedir el tama�o del arreglo
	int n;
	cout << "Teclee con cuantos valores trabajara: ";
	cin >> n;
	
	//declarar arreglo dinamico
	int *aglo = new int [n];
	
	//pedirlos los valores
	for(int i = 0; i < n; i++){
		cout << "Ingrese el valor para el indice [" << i << "]: ";
		cin >> aglo[i];
	}
	
	//suma
	double suma = 0;
	for(int i = 0; i < n; i++){
		suma += aglo[i];
	}
	
	//mayor y menor del arreglo
	int mayor = aglo[0];
	int menor = aglo[0];
	
	for(int i = 0; i < n; i++){
		if(aglo[i] > mayor) mayor = aglo[i];
		if(aglo[i] < menor) menor = aglo[i];
	}
	
	//promedio
	double promedio = static_cast<double>(suma) / n;
	
	//mostrar:
	cout << "Valores del arreglo --> [";
	for(int i = 0; i < n; i++){
		cout << aglo[i];
		if(i < n-1){
			cout << ", ";
		}
	}
	cout << "] ";
	cout << endl;
	
	cout << "Numero mayor: " << mayor << endl;
	cout << "Numero menor: " << menor << endl;
	cout << "Promedio del arreglo: " << promedio << endl;
	
	//liberar memoria
	delete[] aglo;
	
	return 0;
}

