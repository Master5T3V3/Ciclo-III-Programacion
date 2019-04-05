#include <iostream>

using namespace std;

int main () {
	int aux = 4;
	int *puntero = &aux;
	/*cout << "La direccion de memoria es: " << &puntero << endl;
	cout << "El valor es: " << *puntero << endl;*/
	
	///////////////////////////////////////////////////////////////////////////////////////////////
	
	cout << "La direccion de memoria del puntero: " << &puntero << endl;
	cout << "La direccion de memoria del aux: " << &aux << endl;
	cout << "El valor de la variable apuntada: " << *puntero << endl;
	cout << "El valor de la variable apuntada: " << puntero << endl;
	
	return 0;
}
