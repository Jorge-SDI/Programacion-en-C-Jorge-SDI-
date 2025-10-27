#include <iostream>
using namespace std;

int main() {
	/*Crea un programa en C++ que:
	
	Pida al usuario cuántos números desea ingresar.
	Guarde esos números en un arreglo dinámico.
	
	Muestre el arreglo original.
	Ordene el arreglo de menor a mayor.
	Muestre el arreglo ordenado.
	Indique el número mayor y el número menor (después de ordenar)*/
	
	int n;
	cout << "Digite cuantos numeros desea que contenga su arreglo: ";
	cin >> n;
	
	int *mnvdconta = new int [n];
	
	int par = 0;
	int impar = 0;
	double suma = 0;
	for(int i = 0; i< n; i++){
		cout << "Ingrese el valor para el numero [" << i + 1 << "]: ";
		cin >> mnvdconta[i];
		suma += mnvdconta[i];
		if(mnvdconta[i] % 2 == 0){
			par++;
		}
		else{
			impar++;
		}
	}
	cout << endl;
	
	double promedio = static_cast<double>(suma) / n;
	
	cout << "Arreglo original --> [";
	for(int i = 0; i < n; i++){
		cout << mnvdconta[i];
		if(i < n-1){
			cout << ", ";
		}
	}
	cout << "] " << endl;
	
	
	//ordenar el arreglo
	int aux;
	for (int  i = 0; i < n; i++){
		for (int j = 0; j < n - 1; j++){
			if(mnvdconta[j] > mnvdconta[j+1]){
				aux = mnvdconta[j];
				mnvdconta[j] = mnvdconta[j+1];
				mnvdconta[j+1] = aux;
			}
		}
	}
	
	int mayor = mnvdconta[0];
	int menor = mnvdconta[0];
	for(int  i = 0; i < n;i++){
		if(mnvdconta[i] > mnvdconta[0])mayor = mnvdconta[i];
		if(mnvdconta[i] < mnvdconta[0])menor = mnvdconta[i];
	}
	
	cout << "Arreglo ordenado --> [";
	for(int i = 0; i < n; i++){
		cout << mnvdconta[i];
		if(i < n-1){
			cout << ", ";
		}
	}
	cout << "] ";
	cout << endl;
	
	cout << "Valor mayor del arreglo: " << mayor << endl;
	cout << "Valor menor del arreglo: " << menor << endl;
	cout << endl;
	
	cout << "Cantidad de pares: " << par << endl;
	cout << "Cantidad de impares: " << impar << endl;
	cout << "Promedio del arreglo: " << promedio << endl;
	delete[] mnvdconta;
	
	
	return 0;
}

