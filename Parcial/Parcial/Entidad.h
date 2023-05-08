#pragma once
#include <iostream>

const int ALTO = 25;
const int ANCHO = 80;


class Entidad
{
protected:
	int x, y, altura;
	std::string* cuerpo;
public:
	Entidad(int _x, int _y, int _altura);

	void Dibujar();
	void Borrar();
	
	void set_x(int valor);
	void set_y(int valor);
	void set_altura(int valor);

	int get_x();
	int get_y();
	int get_altura();

};

