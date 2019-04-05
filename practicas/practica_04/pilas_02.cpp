#include <cstdlib> //Libreria de funciones en C
#include <iostream> //Libreria de funciones de entrada y salida
#include <stack> //Libreria para funciones con pilas

using namespace std; //Activar simplificacion del codigo

///////////////////////////////////////////////////////////////////////////////////////////////////
//Desarrollo del codigo principal del programa
int main(void) {
	int c = 1;
	char *ptr;
	stack <char> P; //Crear nueva pila
	
	for(int i = 'A'; i <= 'Z'; i++){ //Crear ciclo que permita llenar la fila
		P.push(i); //Crear un nuevo nodo en la pila
	}
	ptr = &P.top(); //Lograr tope
	
	while(c <= P.size()){
		char aux;
		aux = *ptr;
		cout << aux << " ";
		ptr--;
		c++;
	}
	cout << endl;
	system("pause");
	
	return 0;
}
