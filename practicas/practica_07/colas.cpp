#include <iostream> //Libreira de entradas y salidas
#include <queue> //Libreria para trabajar con colas
#include <conio.h> //Libreria de operaciones matematicas

using namespace std; //Simplificacion del codigo

///////////////////////////////////////////////////////////////////////////////////////////////////
//Desarrollo del codigo principal
int main() {
	queue<char> cola; //Agregar nueva cola / cada nodo es 1 byte por ser char
	char *puntero; //Puntero para usar el metodo 2, sin eliminar
	
	for(int i = 'A'; i <= 'Z'; i++) { //Va a repetir la cantidad de veces necasaria para llegar a Z
		cola.push(i); //Para colocar cada elemento
	}
	
	//Este metodo deja vacia la cola
	/*while(!cola.empty()) {
		cout << cola.front() << " "; //Front da el primer elemento de la cola
		cola.pop(); //Para eliminar el primer elemento
	}*/
	
	//Metodo con punteros que no vacia la cola
	puntero = &cola.front(); //Para que almacene la direccion del primer elemento
	for(int i = 0; i < cola.size(); i++) {
		cout << *puntero << " ";
		puntero ++;
	}
	
	
	cout << endl << endl;
	system("pause"); //Pausar pentalla en el sistema
	
	getch(); //Retornar valores
	return 0; //Retornar valores a cero
}
