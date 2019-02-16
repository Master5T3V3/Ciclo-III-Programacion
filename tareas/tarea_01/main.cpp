/*Desarrollado por: Brian Steve Rodas Hernandez
	Carnet: RH18031
		Inversion de cadena en C++*/

///////////////////////////////////////////////////////////////////////////////////////////////////
//Definir librerias y opciones del programa
#include <iostream> //Libreria de entradas y salidas
#include <string.h> //Libreria de opciones para cadenas
#define LONGITUD_CADENA 10000 //Definir tama;ode la variable

using namespace std; //Simplificacion del codigo

///////////////////////////////////////////////////////////////////////////////////////////////////
//Definir funciones a utilizar en el programa
char *invert(char text[]); //Funcion para invertir cadena utilizando puntero

///////////////////////////////////////////////////////////////////////////////////////////////////
//Desarrollo el codigo
int main() {
	//Definir variables a utilizar
	char text[LONGITUD_CADENA]; //Variable para la cadena
	
	/*-------------------------------------------------------------------------------------------*/
	//Entrada y salida de datos en consola
	//Imprimir linea de divisiion en consola
	cout << "/////////////////////////////////////////////////////" << endl << endl;
    //Pedir al usuario que ingrese cualquier dato en consola
	cout << "Ingrese la cadena texto a invertir (menor a " <<  LONGITUD_CADENA - 1 << "):" << endl;
	fgets(text, LONGITUD_CADENA, stdin); //Obtener valor ingresado
	text[strcspn(text, "\r\n")] = 0; //Remueve saltos de linea al escanear el texto ingresado
	//Imprimir lenia de divisiion en consola
	cout << endl << "/////////////////////////////////////////////////////" << endl << endl;
	cout << "La cadena de forma invertida es: " << invert(text) << endl; //Imprimir cdena invertia
	//Imprimir lenia de divisiion en consola
	cout << endl << "/////////////////////////////////////////////////////" << endl << endl;
	system("pause"); //Pausar pantalla de consola
	
	return 0; //Retornar valores a cero
}
 
///////////////////////////////////////////////////////////////////////////////////////////////////
//Desarrollo de las funciones
char *invert(char text[]) { //Funcion para invertir cadena utilizando puntero
	//Definir variables a utilizar
	int longitud = strlen(text); //Variable de longitud obtiene tamano de la cadena
	char temporal; //Variable para crear un banco de memoria temporal
	
	/*-------------------------------------------------------------------------------------------*/
	//Desarrollo de la funcion
	//Crear ciclo para crear datos temporales e invertir los elementos de derecha a izquierda
	for(int izquierda = 0, derecha = longitud - 1; izquierda < (longitud / 2);
			izquierda++, derecha--) {
		temporal = text[izquierda]; //Obtiene temporalmente los datos del texto a la izquierda
    	text[izquierda] = text[derecha]; //Obtiene los datos del texto que se encuentra a la derecha
    	text[derecha] = temporal; //Obtiene los datos de la variable temporal
	}
  
  return text; //Retornar valores de la cadena
}
