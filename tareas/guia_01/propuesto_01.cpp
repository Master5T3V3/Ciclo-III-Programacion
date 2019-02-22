/*Programa desarrollado por Brian Steve Rodas Hernandez
	Carnet: RH18031
		Ejercicio propuesto 1 - Intercambio de numeros cuando uno sea mayor*/
		
///////////////////////////////////////////////////////////////////////////////////////////////////
//Inclusion de librerias y parametros a utilizar en el programa
#include <iostream> //Libreria de entradas y salidas

using namespace std; //Activar simplificacion del codigo

///////////////////////////////////////////////////////////////////////////////////////////////////
//Prototipo de funciones especiales
void mayor(int &, int &); //Funcion de intercambio de numero mayor

///////////////////////////////////////////////////////////////////////////////////////////////////
//Desarrollo del codigo principal
int main() {
	int a; //Variable de primer numero
	int b; //Variable de segundo numerpp
	
	//Imprimir linea de espacio
	cout << "////////////////////////////////////////////////////////////////////" << endl;
	cout << "Digite el primer numero (a): " << endl; //Pedir al usuario primer numero
	cin >> a; //Agregar valor ingresado a variable a
	//Imprimir linea de division
	cout << "====================================================================" << endl;
	cout << "Digite el segundo numero (b): " << endl; //Pedir al usuario segundo numero
	cin >> b; //Agregar valor ingresado a variable b
	//Imprimir linea de division
	cout << "====================================================================" << endl;
	mayor(a, b); //Ejecutar funcion de intercambio por numero mayor
	cout << "a = " << a << "\tb = " << b << endl; //Imprimir valores finales de las variables
	//Imprimir linea de espacio
	cout << "////////////////////////////////////////////////////////////////////" << endl;
	system ("pause"); //Pausar pantalla de consola
	
	return 0; //Retornar valores a cero
}

///////////////////////////////////////////////////////////////////////////////////////////////////
//Desarrollo de los prototipos de funciones
void mayor(int &y, int &z) { //Funcion de intercambio de numero mayor
	int temp; //Variable que almacena temporalmente para hacer el intercambio
	
	if (y > z){ //Si el primer numero ingresado es mayor realizar intercambio
		temp = y; //temp almacena valor de la primera variable
		y = z; //y toma nuevo valor de la segunda variable
		z = temp; //z toma nuevo valor de la variable temporal
		//Imprimir mensaje del resultado del caso es mayor
		cout << "Como el primer numero ingresado es mayor se intercambian los valores" << endl;
	}
	else {
		//Imprimir mensaje del resultado del caso no es mayor
		cout << "Como el primer numero ingresado no es mayor no se intercambian" << endl;
	}
}
