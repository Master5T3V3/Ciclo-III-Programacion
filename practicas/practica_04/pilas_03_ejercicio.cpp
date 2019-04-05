/*Crear un programa que permita crear una pila para almacenar los datos de los estudiantes
	de programacion II. Se debe almacenar DUE, nombre, apellido, edad*/

#include <cstdlib> //Libreria de funciones en C
#include <iostream> //Libreria de funciones de entrada y salida
#include <stack> //Libreria para funciones con pilas

using namespace std; //Activar simplificacion del codigo

struct estudiante {
	char DUE[8];
	char nom[51];
	char ape[51];
	int edad;
}P; 

///////////////////////////////////////////////////////////////////////////////////////////////////
//Desarrollo del codigo principal del programa
int main(void){
	estudiante eaux;
	estudiante *p;
	char res;
	stack <estudiante> pila;
	
	do{
		cout << "DUE" << endl;
		cin >> eaux.DUE;
		cout << "Nombre" << endl;
		cin >> eaux.nom;
		cout << "Apellido" << endl;
		cin >> eaux.ape;
		cout << "Edad" << endl;
		cin >> eaux.edad;
		pila.push(eaux);
		cout << "Desea ingresar otro estudiante?" << endl;
		cin >> res;
	}
	while(res == 'y');
	
	p = &pila.top();
	
	int c = 1;
	while(c <= pila.size()) {
		eaux = *p;
		cout << eaux.DUE << endl;
		cout << eaux.nom << endl;
		cout << eaux.ape << endl;
		cout << eaux.edad << endl;
		cout << "---------------------------------" << endl;
		p--;
		c++;
	}
	cout << endl;
	
	system("pause");
	
	return 0;
}
