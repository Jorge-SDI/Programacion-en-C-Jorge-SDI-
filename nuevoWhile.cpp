#include <iostream>
using namespace std;

int main() {
	int num;            // número ingresado por el usuario
	int suma = 0;       // suma total
	int positivos = 0;  // contador de números positivos
	int negativos = 0;  // contador de números negativos
	
	cout << "Ingrese un número (0 para terminar): ";
	cin >> num;
	
	while (num != 0) {  // mientras el número no sea 0
		suma += num;    // acumulamos la suma
		
		if (num > 0) {
			positivos++;  // contamos positivos
		} else {
			negativos++;  // contamos negativos
		}
		
		// pedimos otro número al final del ciclo
		cout << "Ingrese otro número (0 para terminar): ";
		cin >> num;
	}
	
	cout << endl;
	cout << "Suma total: " << suma << endl;
	cout << "Cantidad de positivos: " << positivos << endl;
	cout << "Cantidad de negativos: " << negativos << endl;
	
	return 0;
}
