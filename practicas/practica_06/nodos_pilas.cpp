#include <iostream>
#include <stack>

using namespace std;

class Pila {
	private:
		class Nodo {
			public:
				int info;
				Nodo *sig;
		};
		
		Nodo *raiz;
		public:
			Pila(); //Este es el contructor, funciona para colocar valores por defecto
			~Pila(); //Destructor para el constructor ( se antepone el ~)
			void insertar(int x);
			int extraer;
			void imprimir;
};

//Nombre de la clase::Metodo que le daremos comportamiento
Pila::Pila() {
	RAIZ = NULL;
}

void Pila::insertar(int x) {
	Nodo *nuevo; //Auxiliar
	nuevo = new Nodo(); //Va a terner toda la estructura de nodo
	nuevo -> info = x; 
	if(raiz == NULL) { //Si esta vacio lo ingresa
		raiz = nuevo;
		nuevo -> sig = NULL; //Alamacena un nulo
	}
	else {
		nuevo -> sig = raiz; //Almacena la direccion de raiz
		raiz = nuevo; //Ahora apunta a nuevo
	}
}

int Pila::extraer() {
	if(raiz != NULL) {
		int informacion = raiz -> info;
		Nodo *bor = raiz;
		raiz = raiz -> sig;
		delete bor;
		return informacion
	}
	else {
		return -1;
	}
}

Pila::~Pila() {
	Nodo *reco = raiz;
	Nodo *bor;
	while(reco != NULL) {
		bor = reco;
		reco = reco -> sig;
		delete bor
	}
}

int main() {
	Pila *pila1; //Puntero hacia fila
	pila1 = new Pila(); //Esta es la llamada al constructor
	pila1 -> insertar(10); //Se le asigna un dato nuevo a la raiz
	pila1 -> insertar(40); //Se le asigna un dato nuevo a la raiz
	pila1 -> insertar(3); //Se le asigna una dato nuevo a la raiz
	pila1 -> imprimir(); 
	
	return 0;
}
