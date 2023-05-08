#pragma once
#include "Entidad.h"

class Personaje : public Entidad
{
public:
	Personaje(int _X, int _Y, int _Altura);
	void Movimiento();
};

