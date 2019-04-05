#include <iostream> //Libreria de entradas y salidas

using namespace std; //Activar simplificacion del codigo

void suma(float *, float *, float *); //

int main() {
	float a = 4;
	float b = 6;
	float res;
	
	suma(&a, &b, &res);
	cout << "El resultado de la suma de " << a << " + " << b << " es" << endl;
	cout << res;
	
	return 0;
}

void suma(float *x, float *y, float *z) {
	*z = *x + *y; //Realizar operacion dentro de z
}
