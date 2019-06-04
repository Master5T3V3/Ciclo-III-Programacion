#include <iostream> //LIbreria de entradas y salidas
#include <FL/Fl.H> //Libreria de funciones basicas de fltk
#include <FL/Fl_Window.H> //Libreria de ventanas
#include <FL/Fl_Box.H> //Libreria de cajas
#include <FL/Fl_Button.H> //Libreria de botones
#include <FL/fl_message.H> //Libreria de mensajes
#include <FL/Fl_Widget.H> //Libreria de funciones de ventana
#include <stdlib.h> //Libreria de funciones de C, para los rand
#include <time.h> //Libreria de funciones de tiempo
#include <stdio.h> //Libreria de opciones adicionales
#include <errno.h> //Libreria para errores
#include <string.h> //Libreria para opciones de string

using namespace std; //Simplificaion de codigo

class Screen : public Fl_Window {
	Fl_Window *window; //Objeto de ventana
	Fl_Box *titulo; //Objeto para titulo
	Fl_Box *bg1; //Objeto para diseno de pantalla 1
	Fl_Box *bg2; //Objeto para diseno de pantalla 2
	Fl_Button *b1; //Objeto par boton 1
	Fl_Button *b2; //Objeto par boton 2
	Fl_Button *b3; //Objeto par boton 3
	Fl_Button *b4; //Objeto par boton 4
	Fl_Button *b5; //Objeto par boton 5
	Fl_Button *escape; //Objeto par boton de salir
	int randn1; //Variale de dato numerico aleatorio 1
	int randn2; //Variale de dato numerico aleatorio 2
	int randn3; //Variale de dato numerico aleatorio 3
	int randn4; //Variale de dato numerico aleatorio 4
	int randn5; //Variale de dato numerico aleatorio 5
	const char *npais[20] = { //Arreglo para nombre de paises
		"Estados Unidos",
		"Canada",
		"Mexico",
		"El Salvador",
		"Honduras",
		"Guatemala",
		"Costa Rica",
		"Argentina",
		"Bolivia",
		"Peru",
		"Espana",
		"Inglaterra",
		"Alemania",
		"Brasil",
		"China",
		"Cuba",
		"Egipto",
		"Francia",
		"Grecia",
		"Venezuela"
	};
	const char *ncapital[20] = { //Arreglo para nombre de capitales
		"Capital: Washington D.C",
		"Capital: Ottawa",
		"Capital: Ciudad de Mexico",
		"Capital: San Salvador",
		"Capital: Tegucigalpa",
		"Capital: Ciudad de Guatemala",
		"Capital: San Jose",
		"Capital: Buenos Aires",
		"Capital: Sucre",
		"Capital: Lima",
		"Capital: Madrid",
		"Capital: Londres",
		"Capital: Berlin",
		"Capital: Brasilia",
		"Capital: Pekin",
		"Capital: La Habana",
		"Capital: El Cairo",
		"Capital: Paris",
		"Capital: Atenas",
		"Capital: Caracas"
	};

	public: //Variables y metodos publicos
		Screen() : Fl_Window(500,350,"Menu de paises") { //Metodo para la ventana
			begin(); //Inicio ventana
			
			srand(time(0)); //Generar un tiempo aleatorio de actializacion
			randn1 = rand()%20; //Primer numero aleatorio entre 0 y 19
			do {
				randn2 = rand()%20; //Segundo numero aleatorio entre 0 y 19
			}while(randn1 == randn2); //Si el numero es igual al anterior genera otro
			do {
				randn3 = rand()%20; //Tercer numero aleatorio entre 0 y 19
			}while(randn1 == randn3 || randn2 == randn3); //Si el numero es igual a los anteriores genera otro
			do {
				randn4 = rand()%20; //Cuarto numero aleatorio entre 0 y 19
			}while(randn1 == randn4 || randn2 == randn4 || randn3 == randn4); //Si el numero es igual a los anteriores genera otro
			do {
				randn5 = rand()%20; //Quinto numero aleatorio entre 0 y 19
			}while(randn1 == randn5 || randn2 == randn5 || randn3 == randn5 || randn4 == randn5); //Si el numero es igual a los anteriores genera otro
			
			const char *p1 = npais[randn1]; //Obtener nombre del pais con el primer numero generado
			const char *p2 = npais[randn2]; //Obtener nombre del pais con el segundo numero generado
			const char *p3 = npais[randn3]; //Obtener nombre del pais con el tercer numero generado
			const char *p4 = npais[randn4]; //Obtener nombre del pais con el cuarto numero generado
			const char *p5 = npais[randn5]; //Obtener nombre del pais con el quinto numero generado
			
			Fl_Color bv = fl_rgb_color(66, 66, 66); //Color aqua para fondo
			Fl_Color lbw = fl_rgb_color(240, 240, 240); //Color para label/blancodebil
			Fl_Color lbwl = fl_rgb_color(250, 250, 250); //Color para label/blancofuerte
			Fl_Color lbb = fl_rgb_color(30, 30, 30); //Color para label/negro/debil
			Fl_Color bp1 = fl_rgb_color(211, 47, 47); //Color para boton/rojopastel
			Fl_Color bp2 = fl_rgb_color(205, 220, 57); //Color para boton/lime
			Fl_Color bp3 = fl_rgb_color(0, 188, 212); //Color para boton/celeste
			Fl_Color bp4 = fl_rgb_color(247, 159, 31); //Color para boton/yellowsunflower
			Fl_Color bp5 = fl_rgb_color(181, 52, 113); //Color para boton/vino
			Fl_Color bgc1 = fl_rgb_color(80, 80, 90); //Color para boton/midnight black
			Fl_Color bgc2 = fl_rgb_color(234, 181, 67); //Color para boton/honey glow
			
			color(bv); //Aniadir color al fondo
			bg1 = new Fl_Box(0,310,500,40); //Caja de diseno 1
			bg1->box(FL_FLAT_BOX); //Estilo diamante
			bg1->color(bgc1); //Color preestablecido
			bg2 = new Fl_Box(0,0,500,75); //Caja de diseno 2
			bg2->box(FL_FLAT_BOX); //Estilo cuadrado
			bg2->color(bgc2); //Color preestablecido

			titulo = new Fl_Box(125,0,260,75,"PAISES"); //Titulo
			titulo->box(FL_NO_BOX); //Tipo de caja para titulo
			titulo->labelcolor(lbw); //Aniadir color al label
			titulo->labelsize(36); //Tamanio de titulo
			titulo->labelfont(FL_SCREEN_BOLD); //Fuente de titulo
			
			b1 = new Fl_Button(80,110,150,40,p1); //Boton de pais uno
			b1->type(FL_NORMAL_BUTTON); //Tipo de boton uno
			b1->box(FL_BORDER_BOX); //TIpo de caja uno
			b1->color(bp1); //Color de boton uno
			b1->labelfont(FL_TIMES_BOLD); //Fuente del texto uno
			b1->labelcolor(lbw); //Color del texto uno
			b2 = new Fl_Button(270,110,150,40,p2); //Boton de pais dos
			b2->type(FL_NORMAL_BUTTON); //Tipo de boton dos
			b2->box(FL_BORDER_BOX); //TIpo de caja dos
			b2->color(bp2); //Color de boton dos
			b2->labelfont(FL_TIMES_BOLD); //Fuente del texto dos
			b2->labelcolor(lbb); //Color del texto dos
			b3 = new Fl_Button(80,170,150,40,p3); //Boton de pais tres
			b3->type(FL_NORMAL_BUTTON); //Tipo de boton tres
			b3->box(FL_BORDER_BOX); //TIpo de caja tres
			b3->labelfont(FL_TIMES_BOLD); //Fuente del texto tres
			b3->labelcolor(lbb); //Color del texto tres
			b3->color(bp3); //Color de boton tres
			b4 = new Fl_Button(270,170,150,40,p4); //Boton de pais cuatro
			b4->type(FL_NORMAL_BUTTON); //Tipo de boton cuantro
			b4->box(FL_BORDER_BOX); //TIpo de caja cuatro
			b4->color(bp4); //Color de boton cuatro
			b4->labelfont(FL_TIMES_BOLD); //Fuente del texto cuatro
			b4->labelcolor(lbwl); //Color del texto cuatro
			b5 = new Fl_Button(175,230,150,40,p5); //Boton de pais cinco
			b5->type(FL_NORMAL_BUTTON); //Tipo de boton cinco
			b5->box(FL_BORDER_BOX); //TIpo de caja cinco
			b5->color(bp5); //Color de boton cinco
			b5->labelfont(FL_TIMES_BOLD); //Fuente del texto cinco
			b5->labelcolor(lbwl); //Color del texto cinco
			escape = new Fl_Button(407,317,90,30,"SALIR"); //Boton guardar
			escape->type(FL_NORMAL_BUTTON); //Tipo de boton
			escape->box(FL_SHADOW_BOX); //TIpo de caja para boton salir
			escape->color(lbw); //Color de boton salir
			escape->labelfont(FL_TIMES_BOLD); //Fuente de boton salir
			escape->labelsize(13); //Tamano de letra de texto salir
			escape->labelcolor(bv); //COlor de texto de salir
			
			b1->callback(Capital_CB, (void*)this); //LLamada a ventana emergente
			b2->callback(Capital_CB, (void*)this); //LLamada a ventana emergente
			b3->callback(Capital_CB, (void*)this); //LLamada a ventana emergente
			b4->callback(Capital_CB, (void*)this); //LLamada a ventana emergente
			b5->callback(Capital_CB, (void*)this); //LLamada a ventana emergente
			escape->callback(Salir_CB, (void*)this); //LLamada a salir
			end(); //Fin ventana
		}
		static void Capital_CB(Fl_Widget *a, void *data) { //Metodo para guardar datos
			Screen *v = (Screen*)data; ////La nueva ventana sera igual a la ventana linkeada
			
			if(strcmp(a->label(), v->npais[v->randn1]) == 0) { //Si se preciona el boton 1
				const char *c1 = v->ncapital[v->randn1]; //Obtener capital del pais 1
				fl_message("%s",c1); //Mostrar capital del pais 1
			}
			else if(strcmp(a->label(), v->npais[v->randn2]) == 0) { //Si se preciona el boton 2
				const char *c2 = v->ncapital[v->randn2];  //Obtener capital del pais 2
				fl_message("%s",c2); //Mostrar capital del pais 2
			}
			else if(strcmp(a->label(), v->npais[v->randn3]) == 0) { //Si se preciona el boton 3
				const char *c3 = v->ncapital[v->randn3];  //Obtener capital del pais 3
				fl_message("%s",c3); //Mostrar capital del pais 3
			}
			else if(strcmp(a->label(), v->npais[v->randn4]) == 0) { //Si se preciona el boton 4
				const char *c4 = v->ncapital[v->randn4];  //Obtener capital del pais 4
				fl_message("%s",c4); //Mostrar capital del pais 4
			}
			else if(strcmp(a->label(), v->npais[v->randn5]) == 0) { //Si se preciona el boton 5
				const char *c5 = v->ncapital[v->randn5];  //Obtener capital del pais 5
				fl_message("%s",c5); //Mostrar capital del pais 5
			}
		}
		static void Salir_CB(Fl_Widget *a, void *data) { //Metodo para cerrar ventana
			Screen *v = (Screen*)data; //La nueva ventana sera igual a la ventana linkeada
			v->hide(); //Cerrar ventana
		}

		~Screen() {} //Destructor de la clase
};

int main(int argc, char **argv) {
	Screen *v = new Screen(); //Crear nuevo objeto de ventana
	v->show(); //Mostrar ventana
	
	return Fl::run(); //Detener procesos
}
