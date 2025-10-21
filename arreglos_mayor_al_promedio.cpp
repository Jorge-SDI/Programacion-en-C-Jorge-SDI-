#include <iostream>
using namespace std;

int main() {
	/*Crea un programa en C++ que:
		
		Pida al usuario cuántos números desea ingresar.
		Guarde esos números en un arreglo dinámico.
		Calcule el promedio de todos los valores.
		Recorra el arreglo y determine:
	
		Cuántos números son mayores que el promedio.
		Cuántos son menores que el promedio.
		Cuántos son iguales al promedio.
		
		Muestre:
		
		Los valore ingresados.
		El promedio calculado.
		La cantidad de mayores, menores e iguales al promedio.
	*/
	
	//pedir cuantos valores tendra el arreglo
	int n;
	cout << "Ingrese con cuantos valores trabajara: ";
	cin >> n;
	
	//declarar el arreglo
	int *est = new int [n];
	
	for(int i = 0; i < n; i++){
		cout << "Ingrese el valor para el indice [" << i << "]: ";
		cin >> est[i];
	}
	
	float suma = 0;
	for(int i = 0; i < n; i++){
		suma += est[i];
	}
	double promedio = suma / n;
	
	//contar cuantos valores son mayores al promedio
	int mayores = 0, menores = 0, iguales = 0;
	for(int i = 0; i < n; i++){
		if(est[i] > promedio){
			mayores ++;
		}
		else if(est[i] < promedio){
			menores ++;
		}
		else{
			iguales ++;
		}
	}
		
	//mostrar el arreglo
	cout << "Valores del arreglo --> [";
	for(int i = 0; i < n; i++){
		cout << est[i];
		if(i < n-1){
			cout << ", ";
		}
	}
	cout << "] ";
	cout << endl;
	
	cout << "Promedio del arreglo: " << promedio << endl;
	cout << "Cantidad de numeros mayores al promedio: " << mayores << endl;
	cout << "Cantidad de numeros menores al promedio: " << menores << endl;
	cout << "Cantidad de numeros iguales al promedio: " << iguales << endl;
		
		
	delete[] est;
		
	return 0;
}

