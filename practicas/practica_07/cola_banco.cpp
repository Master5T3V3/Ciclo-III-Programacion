/*Programa desarrollado por Brian Steve Rodas Hernandez
	//Carnet: RH18031
		Hacer una cola de datos para almacenar el numero de tickets (4 digitos)
			numero de cuenta y edad de un ahorrante
				Hacer agregar ahorrante, eliminar un ahorrante de la cola*/
				
///////////////////////////////////////////////////////////////////////////////////////////////////
//Definicion de parametros a utilizar en el codigo
#include <iostream> //Libreria de entradas y salidas
#include <conio.h> //Libreria de funciones matematicas
#include <queue> //Libreria de filas
#include <string.h>

using namespace std; //Simplificacion del codigo

///////////////////////////////////////////////////////////////////////////////////////////////////
//Decclaracion de prototipos de funciones
void menu(int opc); //Funcion de menu

///////////////////////////////////////////////////////////////////////////////////////////////////
struct cliente { //Estructura de clientes
	string ticket; //Numero de ticket
	string cuenta; //Numero de cuenta
	int edad; //Edad del cliente
};
///////////////////////////////////////////////////////////////////////////////////////////////////
//Desarrollo del codigo principal
int main() {
	int opc; //Variable para almacenar opcion
	
	menu(opc); //Ejecutar funcion de menu
}

///////////////////////////////////////////////////////////////////////////////////////////////////
//Desarrollo de funciones
void menu(int opc) { //Funcion de menu
	cliente c; //Crear nueva entidad para estructura
	cliente *puntero; //Crear puntero para estructura
	char res; //Varaibel de respuesta
	queue<cliente> fila; //Crear nueva fila
	
	retornar: //Punto de retorno para los casos
	do {
		system("cls"); //Limpiar pantalla de consola
		system("color 4F"); //Cambiar colores, fondo turquesa, texto blanco
	    cout << endl << endl << endl << endl << endl; //Espacios de linea
	    //Imprimir menu de opciones en pantalla
		cout << "\t\t\t\t ------------------------------------------------- " << endl;
	    cout << "\t\t\t\t|            [[MENU DE COLA BANCARIA]]            |" << endl;
	    cout << "\t\t\t\t|-------------------------------------------------|" << endl;
	    cout << "\t\t\t\t|                                                 |" << endl;
	    cout << "\t\t\t\t|         1. Agregar cliente a la cola            |" << endl;
	    cout << "\t\t\t\t|         2. Eliminar cliente en la cola          |" << endl;
	    cout << "\t\t\t\t|         3. Mostrar clientes en cola             |" << endl;
	    cout << "\t\t\t\t|         4. Salir                                |" << endl;
	    cout << "\t\t\t\t|                                                 |" << endl;
	    cout << "\t\t\t\t -------------------------------------------------\n\n";
	    cout << "\t\t\t\t\t\tDigite la opcion: "; //Mensaje para pedir ingreso de opcion
	    cin >> opc; //Agregar dato a la variable
	}while(opc < 0 || opc > 4); //Mientras se ingrese uno de los numeros correspondientes
	  
	switch(opc) {
	   	case 1: //Caso uno de ingreso
	    	system("cls"); //Limpiar pantalla de consola
	    	do {
	    		do {
	    			cout << "------------------------------------" << endl;
					cout << "Ingrese numero de ticket" << endl; //Pedir numero de ticket
					cin >> c.ticket; //Agregar dato
				}while(c.ticket.length() != 4); //Mientras ni existan 4 cifras
				do {
					cout << "------------------------------------" << endl;
					cout << "Ingrese numero de cuenta" << endl; //Pedir numero de cuenta
					cin >> c.cuenta; //Agregar nuevo dato
				}while(c.cuenta.length() != 4); //Mientras no existan 4 cifras
				do {
					cout << "------------------------------------" << endl;
					cout << "Ingrese edad del cliente" << endl; //Pedir edad del cliente
					cin >> c.edad; //Ingresar dato
				}while(c.edad < 18); //Mientras sea menor a los 18
				fila.push(c); //Agregar componentes a la fila
				cout << "====================================" << endl;
				cout << "Desea ingresar otro cliente?" << endl; //Preguntar si quiere ingresar
				cin >> res; //Almacenar respuesta
			} while(res == 'y' || res == 'Y'); //Mientrs la respuesta sea afirmativa repetir
	    	goto retornar; //Volver al menu
	    	
	    case 2: //Eliminar de la fila
	    	system("cls"); //Limpiar pantalla de la consola
	    	fila.pop(); //Elimina primer elemento en fila
	    	//Imprimir mensaje para confirmar eliminacion
	    	cout << "//////////////////////////////////////////////////" << endl;
			cout << "/ ### Cliente eliminado de la fila con exito ### /" << endl;
	    	cout << "//////////////////////////////////////////////////" << endl << endl;
			system("pause"); //Pausar pantalla de la consola
	    	goto retornar; //Regresar al menu
	    	
	    case 3: //Mostrar fila
	    	system("cls"); //Limpiar pantalla de la consola
	    	puntero = &fila.front(); //Almacenar diraccion del primer elemento en fila
	    	for(int i = 1; i <= fila.size(); i++) { //Imprimir mientras existan elemenos
	    		c = *puntero; //Recopila datos del puntero
	    		cout << "------------------------------------" << endl;
	    		cout << "Numero de ticket: " << c.ticket << endl; //Imprime numero de ticket
	    		cout << "------------------------------------" << endl;
	    		cout << "Numero de cuenta: " << c.cuenta << endl; //Imprime numero de la cuenta
	    		cout << "------------------------------------" << endl;
	    		cout << "Edad del cliente: " << c.edad << endl; //Imprime edad del cliente
	    		cout << "////////////////////////////////////" << endl;
	    		puntero++; //Pasar al siguiente elemento
			}
				
	    	system("pause"); //Pausar pantalla de consola
	    	goto retornar; //Regresar a menu
	    		
	   	case 4: //Salir
			break; //Termina el proceso
			
	}
}
