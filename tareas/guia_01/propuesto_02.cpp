/*Programa creado por Brian Steve Rodas Hernandez
	Carnet: RH18031
		Ejercicio propuesto 2 - Multiplicacion por 10*/

///////////////////////////////////////////////////////////////////////////////////////////////////
//Definicion de librerias y parametros a utilizar en el programa
#include <iostream> //Libreria de entradas y salidas

using namespace std; //Activar simplificacion del codigo

///////////////////////////////////////////////////////////////////////////////////////////////////
//Prototipos de funciones
void multi(float &); //Funcion de miltuplicacion

///////////////////////////////////////////////////////////////////////////////////////////////////
//Desarrollo del codigo principal
int main() {
	float x; //Variable de numero a ingresar
	
	//Imprimir en pantalla linea divisora
	cout << "////////////////////////////////////////////////" << endl;
	//Pedir ingreso por tacledo al usuario
	cout << "Ingrese un numero para multiplicar por 10:" << endl;
	cin >> x; //Agregar dato ingresado a la variable
	//Imprimir en pantalla linea de division
	cout << "================================================" << endl;
	multi(x); //Ejecutar funcion de multiplicacion
	//Imprimir mensaje de resultados
	cout << "Resultado de la multiplicacion por 10:" << endl;
	cout << x << endl; //Mostrar variable modificada por la multiplicacion
	//Imprimir en pantalla linea divisora
	cout << "////////////////////////////////////////////////" << endl << endl;
	system("pause"); //Pausar pantalla del sistema
	
	return 0; //Retornar valores a cero
}

///////////////////////////////////////////////////////////////////////////////////////////////////
//Desarrollo de los prototipos de funciones
void multi(float &y) {
	float z = 10; //Variable para almacenar valor con el que se multiplicara
	 
	y = y * z; //Realizar multiplicacion y almacenar en variable
}
