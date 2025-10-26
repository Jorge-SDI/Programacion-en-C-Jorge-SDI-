#include <iostream>
using namespace std;

int main() {
	/*Escribe un programa en C++ que:
	Pida al usuario cuántos números desea ingresar.
	Guarde esos números en un arreglo dinámico.
	
	Calcule y muestre:
	
	La suma total
	El promedio
	El mayor y el menor valor
	Cuántos números son pares y cuántos impares*/
	
	int n;
	cout << "Teclee cuantos numeros contendra su arreglo: ";
	cin >> n;
	
	int *gdconta = new int [n];
	
	float suma = 0;
	for(int i = 0; i < n; i++){
		cout << "Ingrese el valor del numero [" << i << "]: ";
		cin >> gdconta[i];
		suma += gdconta[i];
	}
	cout << endl;
	
	double promedio = static_cast <double>(suma) / n;
	
	int mayor = gdconta[0];
	int menor = gdconta[0];
	for(int i = 0; i < n;i++){
		if(gdconta[i] > mayor)mayor = gdconta[i];
		if(gdconta[i] < menor)menor = gdconta[i];

	}

	int pares = 0;
	int impares = 0;
	for(int i = 0; i < n; i++){
		if(gdconta[i] % 2 == 0){
			pares++;
		}
		else if(gdconta[i] % 2 != 0){
			impares++;
		}
	}
	
	cout << "Resultados: " << endl;
	cout << "Arreglo original --> [";
	for (int i = 0; i < n; i++){
		cout << gdconta[i];
		if(i < n-1){
			cout << ", ";
		}
	}
	cout << "] " << endl;
	cout << endl;
	
	cout << "La suma es: " << suma << endl;
	cout << "El promedio es: " << promedio << endl;
	cout << "El numero mayor es: " << mayor << endl;
	cout << "El numero menor es: " << menor << endl;
	cout << "Cantidad de numeros pares: " << pares << endl;
	cout << "Cantidad de numeros impares: " << impares << endl;
	
	delete[] gdconta;
	
	return 0;
}

