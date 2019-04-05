#include <cstdlib> //Libreria de funciones en C
#include <iostream> //Libreria de funciones de entrada y salida
#include <stack> //Libreria para funciones con pilas

using namespace std; //Activar simplificacion del codigo

///////////////////////////////////////////////////////////////////////////////////////////////////
//Desarrollo del codigo principal del programa
int main(void) {
	stack <char> P; //Crear nueva pila
	for(int i = 'A'; i <= 'Z'; i++){ //Crear ciclo que permita llenar la fila
		P.push(i); //Crear un nuevo nodo en la pila
	}
	
	while(!P.empty()){
		cout << P.top() << " " ; //Imprimir los elementos
		P.pop(); //Hacer un tope para la pila
		cout << P.top() << " " ; //Imprimir los elementos
	}
	cout << endl; //Espacio de linea
	
	system("pause"); //Pusar pantalla de la consola
	
	return 0; //Retornar valores a cero
}
