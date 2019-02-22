/*Programa desarrollado por Brian Steve Rodas Hernandez
	Carnet: RH18031
		Ejercicio propuesto 5 - Convertir el numero menor a cero*/

///////////////////////////////////////////////////////////////////////////////////////////////////
//Definicion de librerias y parametros a utilizar en el programa
#include <iostream> //Libreria de entradas y salidas

using namespace std; //Activar simplificacion del codigo

///////////////////////////////////////////////////////////////////////////////////////////////////
//Prototipos de funciones a utilizar en el programa
void menorAcero(float &, float &); //Funcion para cambiar valor del numero menor a cero

///////////////////////////////////////////////////////////////////////////////////////////////////
//Desarrollo del codigo principal del programa
int main() {
	float a; //Variable de primer numero
	float b; //Variable de segundo numero
	
	//Imprimir lineas de division
	cout << "///////////////////////////////////////////////////////////////////" << endl;
	cout << "Introduzca primer numero (a): "; //Pedir al usuario que ingrese el primer valor
	cin >> a; //Agregar valor a la primer variable
	//Imprimir lineas de division
	cout << "-------------------------------------------------------------------" << endl;
	cout << "Introduzca segundo numero (b): "; //Pedir al usuario que ingrese el segundo valor
	cin >> b; //Agregar valor a la segunda variable
	//Imprimir lineas de division
	cout << "===================================================================" << endl;
	menorAcero(a, b); //Ejecutar funcion de intercambio del numero menor
	cout << "a = " << a << "\tb = " << b << endl; //Imprimir valores de las variables
	//Imprimir lineas de division
	cout << "///////////////////////////////////////////////////////////////////" << endl << endl;
	system("pause"); //Pusar pantalla del sistema
	
	return 0; //Retornar valores a cero 
}

///////////////////////////////////////////////////////////////////////////////////////////////////
//Desarrollo de los prototipos de funciones
void menorAcero(float &x, float &y) { //Funfion de intercambio del numero menor a cero
	if (x > y) {
		y = 0; //Cambiar valor a cero
		
		//Imprimir mensaje de resultado
		cout << "Como el primer valor ingresado es mayor, el segundo cambia a cero" << endl;
	}
	else {
		x = 0; //Cambiar valor a cero
		
		//Imprimir mensaje de resultado
		cout << "Como el segundo valor ingresado es mayor, el primero cambia a cero" << endl;
	}
}
