#include <iostream>
using namespace std;

int main() {
	
	/*Pida al usuario cuántos números desea ingresar.
		
		Guarde esos números en un arreglo dinámico.
		Recorra el arreglo y determine cuántos números son pares y cuántos son impares.
		
		Muestre:
		Los valores ingresados.
		La cantidad de números pares.
		La cantidad de números impares.
	*/
	
	int n;
	cout << "Cuantos valores va a ingresar?: ";
	cin >> n;
	
	int *arregloN = new int [n];
	
	for(int  i=0; i < n; i++){
		cout << "Introduzca los valores para los indices [" << i << "]: ";
		cin >> arregloN[i];
	}
	
	//arreglo
	cout << "Arreglo --> [";
	for(int i = 0; i < n; i++){
		cout << arregloN[i];
			if(i < n-1){
			cout << ", ";
		}
	}
	cout << "] " << endl;

	
	//pares
	cout << "Valores pares en el arreglo --> [";
	for(int i = 0; i < n; i++){
		if(arregloN[i] % 2 == 0){
			cout << arregloN[i];
		if(i < n-1)
			cout << ", ";
		}
	}
	cout << "] " << endl;
	
	
	//impares
	cout << "Valores impares del arreglo --> [";
	for(int i = 0; i < n; i++){
		if(arregloN[i] % 2 != 0){
			cout << arregloN[i];
		if(i < n-1)
			cout << ", ";
		}
	}
	cout << "] " << endl;
	
	delete[] arregloN;
	return 0;
}

