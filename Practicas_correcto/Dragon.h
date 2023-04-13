#pragma once
#include <iostream>

class Dragon
{
private:
	bool alas;
	int años;
	std::string nombre;
	int color;
	int tipo;
public:
	/*Este es un constructor este debe ser lo primordial en tus metodos debido
	ya que incializa los valores lo cual hace que no haya ningun error*/
	Dragon();

	/*Este es un destructor, se utiliza para liberar espacio de meomria en un
	objeto, es decir si creo el objeto Dragon rojo y luego quiero liberar la
	memoria del objeto llamada Dragon Rojo utilizo " ~Dragon Dragon rojo()"*/
	~Dragon();

	//Get: El get devuelve o retorna un valor
	bool get_Alas() { return alas; };
	int get_Años() { return años; };
	std::string get_Nombre() { return nombre; };
	int get_Color() { return color; };
	int get_Tipo() { return tipo; };

	//Set: Modifica un valor o asigna un valor 
	void set_Alas(bool valor) { alas = valor; };
	void set_Años(int valor) { años = valor; };
	void set_Nombre(std::string valor) { nombre = valor; };
	void set_Color(int valor) { color = valor; };
	void set_Tipo(int valor) { tipo = valor; };
	void ToString();

};