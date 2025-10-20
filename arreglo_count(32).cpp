#include <iostream>
using namespace std;

/*Crea un programa en C++ que:
	
	Pida al usuario cu�ntos n�meros desea ingresar.
	Guarde esos n�meros en un arreglo din�mico.
	
	Recorra el arreglo y determine:
	Cu�ntos n�meros son positivos
	Cu�ntos son negativos
	Cu�ntos son ceros
	
	Muestre:
	Los valores ingresados
	La cantidad de positivos, negativos y ceros*/

int main() {
	int n;
	cout << "Ingrese la cantidad de valores con que trabajara: ";
	cin >> n;
	
	int *arreglo = new int [n];
	for(int i = 0; i < n; i++){
		cout << "Ingrese el valor para el indice [" << i << "]: ";
		cin >> arreglo[i];
	}
	
	//valores del arreglo
	cout << "Valores del arreglo --> [";
	for(int i = 0; i < n; i++){
		cout << arreglo[i];
		if(i < n-1){
			cout << ", ";
		}
	}
	cout << "] " << endl;
	
	
	//recorriendo arreglo
	for(int i = 0; i < n; i++){
		if(arreglo[i] > 0){
			cout << "Positivo --> [" << arreglo[i] << "] " << endl;
		}
	}
	
	for(int i = 0; i < n; i++){
		if(arreglo[i] < 0){
		cout << "Negativo --> [" << arreglo[i] << "] " << endl;
		}
	}
	
	for(int i = 0; i < n; i++){
		if(arreglo[i] == 0){
		cout << "Intermedio --> [" << arreglo[i] << "] " << endl;
		}
	}
	
	delete[] arreglo;
	
	return 0;
}

