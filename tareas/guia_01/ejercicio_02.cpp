/*Programa desarrollado por Brian Steve Rodas Hernandez
	Carnet: RH18031
		Ejercicio 2 de guia de ejercicios 1*/

///////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h> //Libreria de funcion de lenguaje c
#include <conio.h> //Libreira de funciones de referencias

///////////////////////////////////////////////////////////////////////////////////////////////////
//Prototipos de funciones a utilizar en el codigo principal
void Intercambio(int, int); //Funcion intercambio con variables
void Intercambio(int *, int *); //Funcion de intercambio con punteros
void Intercambio(int, int &, int &); //Funcion de intercambio con una variable y otras por referencia

///////////////////////////////////////////////////////////////////////////////////////////////////
//Desarrollo del codigo principal
int main() {
	int x = 22, y = 33; //Ingresar x / y con valores de 22 y 33
	printf("x = %d\t y = %d\n", x, y); //Imprimir en pantalla sus respectivos valores
	Intercambio(x,y); //Llamada por valor
	printf("x = %d\t y = %d\n", x, y); //Imprimir nuevamente con sus valores
	Intercambio(1, x, y); //Llamada por referencia
	printf("x = %d\t y = %d\n", x, y); //Imprimir con el intercambio de datos
	Intercambio(&x, &y); //Llamada por puntero
	printf("x = %d\t y = %d\n", x, y); //Se imprimme volveidno a sus valores iniciales
	getch(); //Obtener entrada manual
	
	return 0; //Retornar valores a cero
}

///////////////////////////////////////////////////////////////////////////////////////////////////
//Desarrollo de las funciones
void Intercambio(int a, int b) { //Intercambio por variables
	int aux; //Ingresar auxiliar
	aux = a; //Obtener valor de a
	a = b; //Cambiar el valor de a por el de b
	b = aux; //Obtener del auxiliar el valor para b
}

void Intercambio(int *a, int *b) { //Intercambio por puntero
	int aux; //Ingresar auxiliar
	aux = *a; //Obtener valor de puntero a
	*a = *b; //Cambiar valor de puntero b a puntero a
	*b = aux; //Cambiar valor de puntero b por el del auxiliar
}

void Intercambio(int i, int &a, int &b) { //Intercambio por referencia
	int aux = i; //Auxiliar sera igual al valor de i = 1
	aux = a; //Auxilar sera igual al valor de a del primer
	a = b; //Copiar el valor de la variable b en la variable a
	b = aux; //Copiar valor de la variable auxiliar en variable b
}
