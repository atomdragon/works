#include "pch.h"
#include "Patas.h"

Patas::Patas(int _x, int _y, char _forma)
{
	x = _x;
	y = _y;
	forma = _forma;
}

Patas::~Patas()
{
}

void Patas::imprime_pata()
{
		System::Console::SetCursorPosition(x, y); std::cout << forma;
}

void Patas::setX(int valor)
{
	x = valor;
}
