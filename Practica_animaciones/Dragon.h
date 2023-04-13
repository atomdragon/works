#pragma once
#include "Patas.h"
#include "Cuerpo.h"

class Dragon
{
private:
	float x;
	float y;
	float dx;
	Patas* ObjPatas;
	Cuerpo* ObjCuerpo;
	Patas** arreglo;
public:
	Dragon(float _x, float _y);
	~Dragon();
	void imprimir_dragon();
	void mover_dragon();
	void borrar_dragon();
	float get_X();
};

