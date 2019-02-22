/*Programa desarrollado por Brian Steve Rodas Hernandez
	Carnet: RH18031
		Ejercicio propuesto 3 - Potencia con una base de tipo double y el exponente tipo int*/

///////////////////////////////////////////////////////////////////////////////////////////////////
//Definicion de librerias y parametros a utilizar en el programa
#include <iostream> //Libreria de entradas y salidas
#include <math.h> //Libreria de funciones matematicas

using namespace std; //Activar simplificacion del codigo

///////////////////////////////////////////////////////////////////////////////////////////////////
//Prototipos de funciones a utilizar en el programa
void potencia(double *, int *, double *); //Funcion para calcular potencia

///////////////////////////////////////////////////////////////////////////////////////////////////
//Desarrollo del codigo principal
int main() {
	double base; //Variable para la base
	int p; //Variable para la potenciacion
	double res; //Variable de resultado
	
	//Imprimir lineas de division
	cout << "//////////////////////////////////////////////////////////////////////" << endl;
	
	potencia(&base, &p, &res); //Ejecutar funcion de potenciacion
	
	cout << base << " elevado a la " << p << " es igual a = " << res << endl;
	//Imprimir lineas de division
	cout << "//////////////////////////////////////////////////////////////////////" << endl << endl;
	system("pause"); //Pausar pantalla de la consola
	
	return 0; //Retornar valores a cero
}

void potencia(double *b, int *exp, double *r) {
	cout << "Ingrese numero para la base:" << endl; //Pedir base al usuario
	cin >> *b; //Agregar dato a la variable de base
	//Imprimir lineas de division
	cout << "----------------------------------------------------------------------" << endl;
	//Pedir al usuario numero de potenciacion
	cout << "Ingrese el exponente:" << endl;
	cin >> *exp; //Agregar dato a la variable de potenciacion
	//Imprimir lineas de division
	cout << "----------------------------------------------------------------------" << endl;
	
	*r = pow(*b, *exp); //Obtener valor de la potencia
}
