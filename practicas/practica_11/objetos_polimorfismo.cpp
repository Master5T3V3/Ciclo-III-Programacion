#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

class Figura {
	private:
		float base; //Variable de base de la figura
		float altura; //Variable de altura de la figura
		float ladoHip; //Variable para hipotenusa triangulo
		float ladoH; //Variable para altura triangulo equilatero
	public:
		//CONSTRUCTOR EJ 1
		Figura() { //Establecer valores a cero
			this->base = 0; //Setear base a cero
			this->altura = 0; //Setear altura a cero
			this->ladoHip = 0; //Setear el hipotenusa del triangulo
			this->ladoH = 0; //Setear la altura triangulo equilatero
		}
		//CONSTRUCTOR EJ 2
		Figura(float b, float a) { //Establecer valores egun lo ingresado
			this->base = b; //Valor de b corresponde a la base
			this->altura = a; //Valor de a corresponde a la altura
		}
		void setBase(float b){ //Definir base
			this->base = b; //Recibe los parametros de b a la base
		}
		float getBase() { //Obtener base
			return this->base; //Retornar el valor de la base
		}
		void setAltura(float a){ //Definir altura
			this->altura = a; //Recibe los parametros de a a la altura
		}
		float getAltura() { //Obtener altura
			return this->altura ; //Retornar el valor de la altura
		}
		void setHip(){ //Definir Hipotenusa
			this->ladoHip = 0; //Se inicializa en cero
		}
		float getHip() { //Obtener Hipotenusa
			this->ladoHip = (getAltura() * getAltura())+(getBase() * getBase()); //Primera ecuacion
			return this->ladoHip = sqrt(this->ladoHip); //Retornar valor de la hipotenusa
		}
		void setH(){ //Definir altura del triangulo equilatero
			this->ladoH = 0; //Se inicializa en cero
		}
		float getH() { //Obtener altura del triangulo equilatero
			this->ladoH = (sqrt(3) * getBase()) / 2; //Retornar el valor de la altura
			return this->ladoH; //Retornar valor de la altura del triangulo equilatero
		}
		
		//Virtualizar area y perimetro para su posterior uso
		virtual float area() = 0;
		virtual float perimetro() = 0;
};

class Color { //Para colorear
	public:
		void Colorear() { //Metodo para colorear
			system("color 4F"); //Cambiar color
			cout << "Estoy coloreando..." << endl << endl; //Mostrar mensaje
		}
};

//Paso por herencia
class Rectangulo:public Figura, public Color { //Crear nueva clase hijo heredando parametros del padre
	public:
	float area() { //Obtener area
		return getBase()*getAltura();
	}
	float perimetro() { //Obtener perimetro
		return (2*getBase())+(2*getAltura());
	}
	void imprimirR(){ //Imprimir figura
		for(int i = 0; i < getAltura(); i++){
			cout << endl;
			for(int i = 0; i < getBase(); i++) {
				cout << "# ";
			}
		}
	}
};

class Cuadrado:public Figura { //Crear nueva clase hijo heredando parametros del padre
	public:
	float area() { //Obtener area
		return 2*getBase(); 
	}
	float perimetro() { //Obtener perimetro
		return 4*getBase();
	}
	void imprimirC(){ //Imprimir figura
		for(int i = 0; i < getBase(); i++){
			cout << endl;
			for(int i = 0; i < getBase(); i++) {
				cout << "# ";
			}
		}
	}
};

class TrianguloR:public Figura { //Crear nueva clase hijo heredando parametros del padre
	public:
	float area() { //Obtener area
		return (getBase() * getAltura())/ 2;
	}
	float perimetro() { //Obtener perimetro
		return getBase() + getAltura() + getHip();
	}
	void imprimirTR(){ //Imprimir figura
		if(getBase() < getAltura()) { //Caso que la altura sea mayor
			cout << "---------------------" << endl;
			cout << "        *" << endl;
			cout << "Altura  **" << endl;
			cout << "        ***" << endl;
			cout << "        Base" << endl;
			cout << "---------------------" << endl;
			for(int i = 1; i <= getAltura(); i++){
				for(int j = 1; j <= i; j++) {
					cout << "#";
				}
				cout << endl;
			}
		}
		else if(getBase() > getAltura()) { //Caso que la base sea mayor
			cout << "---------------------" << endl;
			cout << "        *" << endl;
			cout << "Base    **" << endl;
			cout << "        ***" << endl;
			cout << "       Altura" << endl;
			cout << "---------------------" << endl;
			for(int i = 1; i <= getBase(); i++){
				for(int j = 1; j <= i; j++) {
					cout << "#";
				}
				cout << endl;
			}
		}
		else if(getBase() == getAltura()) { //Caso que la altura y la base sean iguales
			for(int i = 1; i <= getBase(); i++){
				for(int j = 1; j <= i; j++) {
					cout << "# ";
				}
				cout << endl;
			}
		}
	}
};

class TrianguloE:public Figura { //Crear nueva clase hijo heredando parametros del padre
	public:
	float area() { //Obtener area
		return (sqrt(3) / 4) * (getBase() * getBase()); //Retornar valor del area
	}
	float perimetro() { //Obtener perimetro
		return getBase() + getBase() + getBase(); //Retornar valor del perimetro
	}
	void imprimirTE(){ //Imprimir figura
		for(int i = 1; i <= getBase(); i++){
			for(int j = 1; j <= getBase() - i; j++) {
				cout << " ";
			}
			for(int j = 1; j <= 2*i-1; j++) {
				cout << "#";
			}
			cout << endl;
		}
	}
};

//Clase principal, para ingresar lo requerido sin ocupar espacio en main
class Principal {
	public:
		Principal() {
			Rectangulo *r = new Rectangulo(); //Crear rectangulo
			r->setBase(6); //Ingresar base
			r->setAltura(4); //Ingresar altura
			r->Colorear(); //Ejecutar metodo de colorear
			//Imprimir propiedades de rectangulo
			cout << "////////////////////////////" << endl;
			cout << "RECTANGULO" << endl;
			cout << "////////////////////////////" << endl;
			cout << "Base: " << r->getBase() << endl;
			cout << "Altura: " << r->getAltura() << endl;
			cout << "Area: " << r->area() << endl;
			cout << "Perimetro: " << r->perimetro() << endl;
			r->imprimirR(); //Imprimir rectangulo
			cout << endl << endl; //Espaciado
			
			Cuadrado *c = new Cuadrado(); //Crear cuadrado
			c->setBase(6); //Ingresar lado del cuadrado
			//Imprimir propiedades del cuadrado
			cout << "////////////////////////////" << endl;
			cout << "CUADRADO" << endl;
			cout << "////////////////////////////" << endl;
			cout << "Base: " << c->getBase() << endl;
			cout << "Area: " << c->area() << endl;
			cout << "Perimetro: " << c->perimetro() << endl;
			c->imprimirC(); //Imprimir cuadrado
			cout << endl << endl; //Espaciado
			
			TrianguloR *tr = new TrianguloR(); //Crear triangulo rectangulo
			tr->setBase(8); //Ingresar base
			tr->setAltura(8); //Ingresar altura
			//Imprimir propiedades del triangulo rectangulp
			cout << "////////////////////////////" << endl;
			cout << "TRIANGULO RECTANGULO" << endl;
			cout << "////////////////////////////" << endl;
			cout << "Cateto adyacente: " << tr->getBase() << endl;
			cout << "Cateto opuesto: " << tr->getAltura() << endl;
			cout << "Hipotenusa: " << tr->getHip() << endl;
			cout << "Area: " << tr->area() << endl;
			cout << "Perimetro: " << tr->perimetro() << endl << endl;
			tr->imprimirTR(); //Imprimir forma del triangulo
			cout << endl << endl; //Espaciado
			
			TrianguloE *te = new TrianguloE(); //Crear triangulo equilatero
			te->setBase(8); //Agregar base que es igual para todos los lados
			//Imprimir propiedades
			cout << "////////////////////////////" << endl;
			cout << "TRIANGULO EQUILATERO" << endl;
			cout << "////////////////////////////" << endl;
			cout << "Altura: " << te->getH() << endl;
			cout << "Area: " << te->area() << endl;
			cout << "Perimetro: " << te->perimetro() << endl << endl;
			te->imprimirTE(); //Imprimir forma del triangulo
			cout << endl << endl; //Espaciado
		}
};

int main() {
	//Figura *t = new Figura(3, 2); //Declarar un objeto = Instanciar un objeto de una clase
	
	//t->setBase(4);
	//t->setAltura(5);
	//cout << t->getBase() << endl;
	//cout << t->getAltura();
	
	/*Rectangulo *r = new Rectangulo(); //Crear rectangulo
	r->setBase(6); //Ingresar base
	r->setAltura(4); //Ingresar altura
	r->Colorear(); //Ejecutar metodo de colorear
	//Imprimir propiedades de rectangulo
	cout << "////////////////////////////" << endl;
	cout << "RECTANGULO" << endl;
	cout << "////////////////////////////" << endl;
	cout << "Base: " << r->getBase() << endl;
	cout << "Altura: " << r->getAltura() << endl;
	cout << "Area: " << r->area() << endl;
	cout << "Perimetro: " << r->perimetro() << endl;
	r->imprimirR(); //Imprimir rectangulo
	cout << endl << endl; //Espaciado
	
	Cuadrado *c = new Cuadrado(); //Crear cuadrado
	c->setBase(6); //Ingresar lado del cuadrado
	//Imprimir propiedades del cuadrado
	cout << "////////////////////////////" << endl;
	cout << "CUADRADO" << endl;
	cout << "////////////////////////////" << endl;
	cout << "Base: " << c->getBase() << endl;
	cout << "Area: " << c->area() << endl;
	cout << "Perimetro: " << c->perimetro() << endl;
	c->imprimirC(); //Imprimir cuadrado
	cout << endl << endl; //Espaciado
	
	TrianguloR *tr = new TrianguloR(); //Crear triangulo rectangulo
	tr->setBase(8); //Ingresar base
	tr->setAltura(8); //Ingresar altura
	//Imprimir propiedades del triangulo rectangulp
	cout << "////////////////////////////" << endl;
	cout << "TRIANGULO RECTANGULO" << endl;
	cout << "////////////////////////////" << endl;
	cout << "Cateto adyacente: " << tr->getBase() << endl;
	cout << "Cateto opuesto: " << tr->getAltura() << endl;
	cout << "Hipotenusa: " << tr->getHip() << endl;
	cout << "Area: " << tr->area() << endl;
	cout << "Perimetro: " << tr->perimetro() << endl << endl;
	tr->imprimirTR(); //Imprimir forma del triangulo
	cout << endl << endl; //Espaciado
	
	TrianguloE *te = new TrianguloE(); //Crear triangulo equilatero
	te->setBase(8); //Agregar base que es igual para todos los lados
	//Imprimir propiedades
	cout << "////////////////////////////" << endl;
	cout << "TRIANGULO EQUILATERO" << endl;
	cout << "////////////////////////////" << endl;
	cout << "Altura: " << te->getH() << endl;
	cout << "Area: " << te->area() << endl;
	cout << "Perimetro: " << te->perimetro() << endl << endl;
	te->imprimirTE(); //Imprimir forma del triangulo
	cout << endl << endl; //Espaciado*/
	
	//Para crear y ejecutar la funcion principal
	Principal *obr = new Principal();
	
	getch();
	return 0; //Retornar valores a cero
}
