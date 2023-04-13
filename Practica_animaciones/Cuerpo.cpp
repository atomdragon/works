#include "pch.h"
#include "Cuerpo.h"

Cuerpo::Cuerpo(int _x, int _y, char _forma)
{
	x = _x;
	y = _y;
	forma = _forma;
}

Cuerpo::~Cuerpo()
{
}

void Cuerpo::imprime_cuerpo()
{
	for (int i = 0; i < 4; i++)
	{
		System::Console::SetCursorPosition(x + i, y); cout << forma;
	}
	
}

void Cuerpo::setX(int valor)
{
	x = valor;
}
