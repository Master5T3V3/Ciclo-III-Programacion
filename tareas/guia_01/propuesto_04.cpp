/*Programa desarrollado por Brian Steve Rodas Hernandez
	Carnet: RH18031
		Ejercicio propuesto 4 - Area de un cuadrado y de un cubo*/

///////////////////////////////////////////////////////////////////////////////////////////////////
//Definicion de librerias y parametros a utilizar en el programa
#include <iostream> //Libreria de entradas y salidas
#include <conio.h> //Libreria de funciones de manejo de memoria

using namespace std; //Activar la simplificacion del codigo

///////////////////////////////////////////////////////////////////////////////////////////////////
//Prototipo de funciones
void area(float *, float *, float *); //Funcion de obtencion de area

///////////////////////////////////////////////////////////////////////////////////////////////////
//Desarrollo del codigo principal
int main() {
    float arista; //Variable de almacenar arista
    float a; //Variable para almacenar area del cuadrado
    float b; //Variable para almacenar area del cubo
    
    //Imprimir lineas de division
	cout << "///////////////////////////////////////////////////////////////////" << endl;
    cout << "Introduzca arista (lado): " << endl; //Pedir ingreso de un valor a la arista
    cin >> arista; //Agregar dato a la variable indicada
    //Imprimir linea de division
    cout << "-------------------------------------------------------------------" << endl;
    //Inicar condicion de no permitir numeros iguales o menores de cero
	while(arista <= 0) {
		cout << "Error, la arista debe ser mayor a cero" << endl; //Mostrar mensaje de error
		cout << "Introduzca arista: " << endl; //Pedir ingreso de un valor a la arista
		cin >> arista; //Ingresar dato a la variable
		//Imprimir linea de division
		cout << "-------------------------------------------------------------------" << endl;
	}
    area(&arista, &a, &b); //Ejecutar funcion
    //Imprimir resultado del area de un cuadrado
    cout << "El area de un cuadrado segun el lado ingresado es: " << a << endl;
    //Imprimir linea de division
    cout << "-------------------------------------------------------------------" << endl;
    //Imprimir resultado del area de un cubo
	cout << "El area de un cubo segun el lado ingresado es: " << b << endl << endl;
	//Imprimir lineas de division
	cout << "///////////////////////////////////////////////////////////////////" << endl << endl; 
 
    system("pause"); //Pausar pantall de la consola

    return 0; //Retornar valores a cero
}
///////////////////////////////////////////////////////////////////////////////////////////////////
//Desarrollo de los prototipos de las funciones
void area(float *lado, float*x, float *y) {
	*x = *lado * *lado; //Operacion para obtener area del cuadrado
	
	*y = 6 * (*lado * *lado); //Operacion para obtener el area de un cubo
}
