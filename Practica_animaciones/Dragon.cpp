#include "pch.h"
#include "Dragon.h"

Dragon::Dragon(float _x, float _y)
{
	x = _x;
	y = _y;

	dx = 0.1 + (float)rand() / RAND_MAX;
	arreglo = new Patas*[4];
	ObjPatas = new Patas(x, y, 254);
	arreglo[0] = ObjPatas;
	ObjPatas = new Patas(x + 2, y, 254);
	arreglo[1] = ObjPatas;
	ObjPatas = new Patas(x, y + 2, 254);
	arreglo[2] = ObjPatas;
	ObjPatas = new Patas(x + 2, y + 2, 254);
	arreglo[3] = ObjPatas;

	ObjCuerpo = new Cuerpo(x, y + 1, 219);
}

Dragon::~Dragon()
{
}

void Dragon::imprimir_dragon()
{
	for (int i = 0; i < 4; i++)
	{
		arreglo[i]->imprime_pata();
	}
	ObjCuerpo->imprime_cuerpo();
}

void Dragon::mover_dragon()
{
	x += dx;
	arreglo[0]->setX(x);
	arreglo[1]->setX(x + 2);
	arreglo[2]->setX(x);
	arreglo[3]->setX(x + 2);
	ObjCuerpo->setX(x);

}

void Dragon::borrar_dragon()
{
	for (int i = 0; i < 4; i++)
	{
		System::Console::SetCursorPosition(x, y + i); std::cout << "    ";
	}
}

float Dragon::get_X()
{
	return x;
}
