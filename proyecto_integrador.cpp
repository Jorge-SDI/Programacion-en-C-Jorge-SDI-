#include <iostream>
#include <string>
using namespace std;

//Declaracion de estructura 
struct Producto {
	string nombre;
	float precio;
	int cantidad;
};

//arreglo global que contiene como maximo 100 productos
Producto productos[100];

//Variable para almacenar el total de productos ingresados
int totalProductos = 0;

//1. Registrar Productos
void registrarProductos(){
	int n;
	cout << "Cantidad de productos para su ingreso: "; 
	cin >> n;
	while(n <= 0 || totalProductos + n > 100){
	if(n <= 0){
		cout << "*Error. Sin productos ingresados.*" << endl;
	}
	else if(totalProductos + n > 100){ 
		cout << "*Error. Ha excedido el limite.*" << endl;
	}
	cout << "Intente de nuevo: ";
	cin >> n;
	}
	
	for(int i = 0; i < n; i++){
		cout << "Producto " << totalProductos + 1 << " " << endl;
		cout << "Nombre: ";
		cin >> productos[totalProductos].nombre;
		cout << "Precio: ";
		cin >> productos[totalProductos].precio;
		while(productos[totalProductos].precio <= 0){
			cout << "*El precio no debe ser 0*" << endl;
			cout << "Ingrese un nuevo precio: ";
			cin >> productos[totalProductos].precio;
		}
		cout << "Cantidad: ";
		cin >> productos[totalProductos].cantidad;
		while(productos[totalProductos].cantidad <= 0){
			cout << "*La cantidad no debe ser cero*" << endl;
			cout << "Ingrese una nueva cantidad: ";
			cin >> productos[totalProductos].cantidad;
		}
		cout << endl;
		totalProductos++;
	}
	
	cout << "!Productos registrados exitosamente!" << endl;
	cout << "Total actual de productos: " << totalProductos << endl;
	
}

//2. Mostrar Productos
void mostrarProductos(){
	if(totalProductos == 0){
		cout << "No tiene productos registrados";
	}
	
	cout << "===== Lista de productos =====" << endl;
	cout << "Nombre" << "      " << " Precio " << "      " << " Cantidad" << endl;
	cout << "----------------------------------------------" << endl;
	//Mostrar cada producto segun su orden de ingreso
	for(int i = 0; i < totalProductos; i++){
		cout << productos[i].nombre << "       " << productos[i].precio << "       " << productos[i].cantidad << endl;
	}
	cout << endl;
}
	

//3.Ordenar por metodos
void ordenarBurbuja(){
	//Con un solo producto no se puede ordenar nada por ello minimo 2
	if(totalProductos < 2){
		cout << "*No hay suficientes productos para ordenar*";
		return;
	}
	//Estructura BubbleSort
	for(int i = 0; i < totalProductos - 1; i++){
		for(int j = 0; j < totalProductos - i - 1; j++){
			if(productos[j].precio > productos[j+1].precio){
				Producto temp = productos[j];
				productos[j] = productos[j+1];
				productos[j+1] = temp;
			}
		}
	}
	cout << "Productos ordenados con BubbleSort(por Precio)";
	cout << endl;
}
	
void ordenarInsertion(){
	//No se puede ordenar un solo producto, minimo 2
	if(totalProductos < 2){
		cout << "*No hay suficientes productos para ordenar*";
		return;
	}
	//Estructura InsertionSort
	int key, j;
	for(int i = 1; i < totalProductos; i++){
		key = productos[i].precio;
		j = i - 1;
		
		while(j >= 0 && key < productos[j].precio){
			productos[j+1].precio = productos[j].precio;
			j = j - 1;
		}
		productos[j+1].precio = key;
	}
	cout << "Productos ordenados con InsertSort(por Precio)";
	cout << endl;
}
	
void ordenarSeleccion(){
	//No se puede ordenar con un solo producto, minimo dos
	if(totalProductos < 2){
		cout << "*No hay suficientes productos para ordenar*";
		return;
	}
	//Estructura SelectionSort
	for(int i = 0; i < totalProductos - 1; i++){
		int minIndex = i;
		for(int j = i + 1; j < totalProductos; j++){
			if(productos[j].precio < productos[minIndex].precio){
				minIndex = j;
			}
		}
		int temp = productos[i].precio;
		productos[i].precio = productos[minIndex].precio;
		productos[minIndex].precio = temp;
	}
	cout << "Productos ordenados con SelectionSort(por precio)";
	cout << endl;
}

//Buscar un producto	
void buscarProducto(){
	if(totalProductos == 0){
		cout << "Error";
		return;
	}
	//bool para verificar si verdaderamente fue encontrado el producto
	bool encontrado = false;
	string nombreBuscado;
	cout << "Ingrese el nombre del producto a buscar: ";
	cin >> nombreBuscado;
	cout << endl;
	for(int i = 0; i < totalProductos; i++){
		//si esta, mostrar sus datos y validar el bool
		if(productos[i].nombre == nombreBuscado){
			cout << "!Producto encontrado!" << endl;
			cout << "Nombre: " << productos[i].nombre << endl;
			cout << "Precio: " << productos[i].precio << endl;
			cout << "Cantidad: " << productos[i].cantidad << endl;
			encontrado = true;
			break;
		}
	}
	//de lo contrario...
	if(encontrado == false){
		cout << "El producto no existe en el inventario" << endl;
	}
	cout << endl;
}
	
//Actualizar un producto por precio o cantidad
void actualizarProducto(){
	if(totalProductos == 0){
		cout << "Error" << endl;
		return;
	}
	//mostrar los productos actuales disponibles
	for(int i = 0; i < totalProductos; i++){ 
		cout << i << " - " << productos[i].nombre << endl; 
	}
	int indice; 
	cout << "Ingrese el indice del producto que desea actualizar: "; 
	cin >> indice;
		if(indice < 0 || indice >= totalProductos){ 
			cout << "Error. Este índice no existe." << endl;
			return;
		}
		cout << endl;
		cout << "¿Que desea actualizar?" << endl; 
		cout << "1. Precio" << endl; 
		cout << "2. Cantidad" << endl; 
		int opcion; 
		cout << "Opción: "; 
		cin >> opcion; 
		if(opcion < 1 || opcion > 2){
			cout << "Opcion invalida. Intenté de nuevo" << endl; 
			return; 
		} 
		switch(opcion){ 
			case 1: 
				float nuevoPrecio; 
				cout << "Nuevo precio: "; 
				cin >> nuevoPrecio; 
				//el valor antiguo de la variable sera igual al que recien asignemos
				productos[indice].precio = nuevoPrecio; 
				cout << "!Producto Actualizado!"; 
				break; 
				
			case 2: 
				int nuevaCantidad; 
				cout << "Nueva cantidad: "; 
				cin >> nuevaCantidad; 
				//el valor antiguo de la variable sera igual al que recien asignemos
				productos[indice].cantidad = nuevaCantidad; 
				cout << "!Producto Actualizado!" << endl; 
				break; 
		}
}

//Generar un reporte/resumen final	
void reporteFinal(){
	float sumaReporte = 0;
	if(totalProductos == 0){
		cout << "Error" << endl;
		return;
	}
	int mayorCantidadreporte = productos[0].cantidad;
	string mayorNombrereporte = productos[0].nombre;
	cout << "==== Reporte Final ====" << endl;
	cout << "Total de productos registrados: " << totalProductos << endl;
	for(int i = 0; i < totalProductos; i++){
		sumaReporte += productos[i].cantidad * productos[i].precio;
		if(productos[i].cantidad > mayorCantidadreporte){
			mayorCantidadreporte = productos[i].cantidad;
			mayorNombrereporte = productos[i].nombre;
		}
	}
	cout << "Valor de productos en el inventario: " << sumaReporte << endl;
	cout << "Producto con mayor cantidad: " << mayorNombrereporte << " " << "(" << mayorCantidadreporte << ")" << endl;
	cout << endl;
}
	
int main() {
	int opcion;
	//el menu se ejecutara una y otra vez hasta que se escriba la opcion 7 (salir)
	do{
		cout << endl;
		cout << "SISTEMA BASICO DE GESTION DE PRODUCTOS";
		cout << endl;
		cout << "1. Registrar Productos" << endl;
		cout << "2. Mostrar Productos" << endl;
		cout << "3. Ordenar Productos" << endl;
		cout << "4. Buscar Producto" << endl;
		cout << "5. Actualizar Producto" << endl;
		cout << "6. Generar reporte final" << endl;
		cout << "7. Salir" << endl;
		cout << "Seleccione una opcion: ";
		cin >> opcion;
		cout << endl;
		//validar que la opcion este en el rango de las del menu y si sobrepasa, lanzar una advertencia
		if(opcion < 1 || opcion > 7){
			cout << "!Error. Opcion inexistente!" << endl;
			cout << "Intente nuevamente.";
			cout << endl;
			continue;
			cout << endl;
		}
		
		//que funcion llamar en caso de elegir una opcion
		switch(opcion){
			case 1:
				//registro de productos
				registrarProductos();
				break;
			
			case 2:
				if(totalProductos == 0){
					cout << "Error" << endl;
					break;
				}
				//mostrar productos registrados
				mostrarProductos();
				break;
			
			case 3:
				if(totalProductos == 0){ 
					cout << "Error" << endl;
					break;
				}

				//submenu para ordenar productos por metodo de ordenamiento a eleccion
				int m;
				cout << "Metodos de ordenamiento" << endl;
				cout << "1. Ordenamiento Burbuja" << endl;
				cout << "2. Ordenamiento Insercion" << endl;
				cout << "3. Ordenamiento Seleccion" << endl;
				cout << "Seleccione un metodo(opcion): ";
				cin >> m;
				cout << endl;
				
				switch(m){
					case 1:
						ordenarBurbuja();
						mostrarProductos();
						break;
				    case 2:
						ordenarInsertion();
						mostrarProductos();
						break;
					case 3:
						ordenarSeleccion();
						mostrarProductos();
						break;
					default:
						cout << "Opcion invalida, intente de nuevo";
						break;
				}
				break;
			
			case 4:
				if(totalProductos == 0){
					cout << "Error" << endl;
					break;
				}
				//buscar producto por nombre
				buscarProducto();
				break;
			
			case 5:
				if(totalProductos == 0){
					cout << "Error" << endl;
					break;
				}
				//actualizar producto
				actualizarProducto();
				break;
			
			case 6:
				if(totalProductos == 0){
					cout << "Error" << endl;
					break;
				}
				//generar reporte
				reporteFinal();
				break;
			
			case 7:
				cout << "Hasta luego...";
				break;
			
		}
	} while(opcion != 7);
	
	return 0;
}

