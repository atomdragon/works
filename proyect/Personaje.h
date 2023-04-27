#pragma once
#include <iostream>

#define	ANCHO 90 //Tiene que ser más grande
#define ALTO 30 //Tiene que ser más pequeño

using namespace std;
using namespace System;

class Personaje
{
private:
	int x, y, altura, ancho;
	string cabeza, cuerpo, pies;
	/*string* body;*/

public:
	Personaje(int _x, int _y, string _cabeza, string _cuerpo, string pies/*, int _altura*/);
	~Personaje();
	
	void borrar();
	void mover();
	void dibujar();
	void Colision(Personaje* player1, Personaje* player2);

	void set_x(int valor) { x = valor; }
	void set_y(int valor) { y = valor; }
	void set_altura(int valor) { altura = valor; }
	void set_ancho(int valor) { ancho = valor; }
	void set_cabeza(string valor) { cabeza = valor; }
	void set_cuerpo(string valor) { cuerpo = valor; }
	void set_pies(string valor) { pies = valor; }

	int get_x() { return x; }
	int get_y() { return y; }
	int get_altura() { return altura; }
	int get_ancho() { return ancho; }
	string get_cabeza() { return cabeza; }
	string get_cuerpo() { return cuerpo; }
	string get_pies() { return pies; }
};

