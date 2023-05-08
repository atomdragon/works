#pragma once
#include "Entidad.h"

class Personaje;

class Enemigo :public Entidad
{
private:
	int Points;
public:
	Enemigo(int _X, int _Y, int _Altura);
	bool Colision(Personaje* Player);
	void puntaje(Personaje* Player);
};

