/*Programa desarrollado por Brian Steve Rodas Hernandez
	Carnet: RH18031
		Tarea de menu de opciones de estudiante*/

///////////////////////////////////////////////////////////////////////////////////////////////////
//Definicion de librerias y parametros del programa
#include <iostream> //Libreria de entradas y salidas
#include <stack> //Libreria de pilas

using namespace std; //Simplificacion del codigo

///////////////////////////////////////////////////////////////////////////////////////////////////
//Estructuras de datos
struct estudiante{ //Estructura para datos de estudiante
	string due; //Variable de codigo
	string nombre; //Variable de nombre
	string apellido; //Variable de apellido
	int edad; //Variable de edad
};

///////////////////////////////////////////////////////////////////////////////////////////////////
int main() {
	inicio:
	system("cls"); //Limpiar pantalla de consola
	system("color 4F"); //Cambiar colores, fondo turquesa, texto blanco
	int opc;
	estudiante eaux;
	estudiante *p;
	char res;
	int c = 1;
    stack<estudiante> pila;
    
    do {
    	cout << endl << endl << endl << endl << endl; //Espacios de linea
	    //Imprimir menu de opciones en pantalla
		cout << "\t\t\t\t ------------------------------------------------- " << endl;
	    cout << "\t\t\t\t|               [[MENU DE OPCIONES]]              |" << endl;
	    cout << "\t\t\t\t|-------------------------------------------------|" << endl;
	    cout << "\t\t\t\t|                                                 |" << endl;
	    cout << "\t\t\t\t|         1. Ingresar nuevo estudiante            |" << endl;
	    cout << "\t\t\t\t|         2. Mostrar estudiantes                  |" << endl;
	    cout << "\t\t\t\t|         3. Eliminar estudiantes                 |" << endl;
	    cout << "\t\t\t\t|         4. Salir                                |" << endl;
	    cout << "\t\t\t\t|                                                 |" << endl;
	    cout << "\t\t\t\t -------------------------------------------------\n\n";
	    cout << "\t\t\t\t\t\tDigite la opcion: "; //Mensaje para pedir ingreso de opcion
	    cin >> opc;
	}while(opc < 1 || opc > 4);
    
    switch(opc) {
    	case 1:
    		do {
				system("cls");
				cout << "--------------------------------------------" << endl;
		    	cout << "Ingrese DUE:" << endl;
		    	cin >> eaux.due;
		    	cout << "--------------------------------------------" << endl;
		    	cout << "Ingrese nombre:" << endl;
		    	cin >> eaux.nombre;
		    	cout << "--------------------------------------------" << endl;
		    	cout << "Ingrese apellido:" << endl;
		    	cin >> eaux.apellido;
		    	cout << "--------------------------------------------" << endl;
		    	cout << "Ingrese edad:" << endl;
		    	cin >> eaux.edad;
		    	cout << "--------------------------------------------" << endl;
		    	pila.push(eaux);
		    	cout << "### Quiere ingresar otro estudiante? (y/n) ###" << endl;
		    	cin >> res;
		    }while(res == 'y' || res == 'Y');
    		goto inicio;
    		
    	case 2:
    		system("cls");
    		p = &pila.top();
			while(c <= pila.size()) {
				eaux = *p;
				cout << eaux.due << endl;
				cout << eaux.nombre << endl;
				cout << eaux.apellido << endl;
				cout << eaux.edad << endl;
				cout << "---------------------------------" << endl;
				p--;
				c++;
			}
			system("PAUSE");
    		goto inicio;
    		
    	case 4:
    		break;
	}
    
	return 0;
}
