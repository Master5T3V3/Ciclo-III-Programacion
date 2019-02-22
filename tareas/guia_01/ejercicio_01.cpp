/*Programa desarrollado por Brian Steve Rodas Hernandez
	Carnet: RH18031
		Ejercicio 1 de la guia propuesta*/

#include <iostream> //Libreria de entradas y salidas

using namespace std; //Simplificacion del codigo

///////////////////////////////////////////////////////////////////////////////////////////////////
//Desarrollo de funciones creadas por el programador
void DemoLocal(int valor) {
	cout <<  "Dentro de DemoLocal, valor =" << valor << endl; //Mostrar valor obtenido de n
	valor = 75; //Cambiar el valor propuesto por 75
	cout << "Dentro de DemoLocal, valor =" << valor << endl; //Mostrar nuevo valor de la variable
}

///////////////////////////////////////////////////////////////////////////////////////////////////
//Desarrollo del cuerpo del codigo
int main(void) {
	int n = 10; //Agregar variable n con valor inicial de 10
	cout << "Antes de llamar a DemoLocal, n= " << n << endl; //Mostrar valor de n
	DemoLocal(n); //Ejecutar funcion antes propuesta
	cout << "Despues de llamar a DemoLocal, n= " << n << endl; //Mostrar nuevamente valor de n
	cout << "Pulse Intro para continuar"; //Pedir al usuario la introduccion por teclado
	cin.get(); //Aceptar entrada por medio de teclado
	
	return 0; //Retornar valores a cero
}
