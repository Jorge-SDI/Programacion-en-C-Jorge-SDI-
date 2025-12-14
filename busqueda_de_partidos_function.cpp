#include <iostream>
using namespace std;

int busqueda(string vector[], int tamano, string juego){
	for(int i = 0; i < tamano; i++){
		if(vector[i] == juego){
			return i;
		}
	}
	return -1;
}
int main() {
	string arreglo[3] = {"Forest - Spurs", "West Ham - Villa", "Manchester United - Bournemouth"};
	string juego;
	
	cout << "Elija el partido que desea ver por TNT Sports: ";
	getline(cin, juego);
	
	int resultado = busqueda(arreglo, 3, juego);
	
	if(resultado != -1){
		cout << "El partido " << juego << " si estara disponible por este canal" << endl;
	}
	else{
		cout << "Lo sentimos, este partido no va por nuestra senal";
	}
	return 0;
}

