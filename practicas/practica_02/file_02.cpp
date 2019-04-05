#include <iostream>

using namespace std;

/*int main() {
	int i;
	int *aux;
	int arr[4];
	int *notas = arr;
	
	for(i = 0; i < 4; i++) {
		cout << "Ingrese dato :";
		cin >> *(notas + 1);
		aux = notas + 1;
		cout << aux << endl;
	}
	for (i = 0; i < 4; i++) {
		cout << *(notas + 1);
	}
	
	return 0;
}*/

///////////////////////////////////////////////////////////////////////////////////////////////////

int longitud(char *cadena) {
	char *ptr = cadena;
	while (ptr[0] != '\0'){ //Mientras ptr en cero sea diferente de vacio
		ptr++;
	}
		
	return(int)(ptr-cadena);
}

int main() {
	char *letra = "Hola";
	cout << "Numero de caracteres usados: " << longitud(letra) << endl;
	return 0;
}
