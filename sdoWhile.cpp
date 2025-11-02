#include <iostream>
using namespace std;

/* 
Crea un programa en C++ que:
Pida al usuario ingresar números enteros (uno por uno).
El programa se detendrá cuando el usuario ingrese el número 0.

Mientras tanto, debe contar:

Cuántos números fueron positivos.
Cuántos fueron negativos.
Calcular la suma total de todos los números ingresados (excepto el 0).

Al final, mostrar los resultados y el promedio general.
*/

int main() {
	
	int num;
	int positivos = 0;
	int negativos = 0;
	int suma = 0;
	double promedio;
	
	cout << "Ingrese un numero (Para salir escriba 0): ";
	cin >> num;
	
	while(num != 0){
		
		suma += num;
		
		if(num > 0){
			positivos++;
		}
		else{
			negativos++;
		}
		
		cout << "Ingrese otro numero (Para salir escriba 0): ";
		cin >> num;
		
	}
	
	promedio = static_cast<double> (suma) / (positivos + negativos);
	
	cout << endl;
	cout << "Positivos: " << positivos << endl;
	cout << "Negativos: " << negativos << endl;
	cout << "Suma: " << suma << endl;
	cout << "Promedio: " << promedio << endl;
	
	return 0;
}

