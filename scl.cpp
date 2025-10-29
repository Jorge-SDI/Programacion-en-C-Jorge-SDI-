#include <iostream>
using namespace std;
/* Crea un programa en C++ que haga lo siguiente:

Pida al usuario cuántos números desea ingresar.
Guarde los números en un arreglo dinámico.
Muestre el arreglo original.

Calcule y muestre:

Cuántos números son pares y cuántos son impares.
La suma de los pares y la suma de los impares.
El número par más grande y el impar más pequeño (si existen).

Finalmente, muestre el promedio general de todos los números.
*/
int main() {
	int n;
	cout << "Ingrese la cantidad de numeros para el arreglo: ";
	cin >> n;
	
	int *scl = new int [n];
	
	int suma = 0, numPar = 0, numImp = 0, sumPar = 0, sumImp = 0, mayPar = 0 , menImp = 999999;
	for(int i = 0; i < n; i++){
		cout << "Ingrese el valor para el indice [" << i << "]: ";
		cin >> scl[i];
		suma += scl[i];
		
		if(scl[i] % 2 == 0){
			numPar++;
			sumPar += scl[i];
			if(mayPar < scl[i]) mayPar = scl[i];
		}
		else{
			numImp++;
			sumImp += scl[i];
			if(menImp > scl[i]) menImp = scl[i];
		}
	}
	
	double promedio = static_cast<double> (suma) / n;
	
	cout << "Arreglo --> [";
	for(int i = 0; i < n; i++){
		cout << scl[i];
		if(i < n-1){
			cout << ", ";
		}
	}
	cout << "] ";
	cout << endl;
	
	
	
	cout << "Resultados: " << endl;
	cout << "Numeros pares: " << numPar << endl;
	cout << "Numeros impares: " << numImp << endl;
	cout << "Suma de los pares: " << sumPar << endl;
	cout << "Suma de los impares: " << sumImp << endl;
	cout << "Par mayor: " << mayPar	<< endl;
	cout << "Impar menor: " << menImp << endl;
	cout << "Promedio: " << promedio << endl;
	
	
	delete[] scl;
	
	return 0;
}

