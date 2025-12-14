#include <iostream>
using namespace std;

int main() {
	string juegos[5] = {"Crystal Palace - Manchester City", "Forest - Spurs", "West Ham - Villa", "Sunderland - Newcastle", "Brentford - Leeds"}; 
	string partidos[5];
	for(int i  = 0; i < 5; i++){
		cout << "Ingrese el resultado del partido no°" << i << " (" << juegos[i] << ") " << ": ";
		cin >> partidos[i];
	}

	cout << endl;
	cout << "Estas fueron sus predicciones" << endl;
	cout << "!Mucha Suerte!!" << endl;
	for(int j = 0; j < 5; j++){
		cout << juegos[j] << " --> " << partidos[j] << endl;
	}
	return 0;
}

