#include "pch.h"
#include "Entidad.h"

Entidad::Entidad(int _x, int _y, int _altura)
{
	x = _x;
	y = _y;
	altura = _altura;
	cuerpo = new std::string[altura];
}

void Entidad::Dibujar()
{	
	for (int i = 0; i < altura; i++)
	{
		System::Console::SetCursorPosition(x, y + i); std::cout << cuerpo[i];
	}
}

void Entidad::Borrar()
{
	for (int i = 0; i < altura; i++)
	{
		for (int j = 0; j < cuerpo[i].length(); j++)
		{
			System::Console::SetCursorPosition(x + j, y + i); std::cout << " ";
		}
	}
}

void Entidad::set_x(int valor)
{
	x = valor;
}

void Entidad::set_y(int valor)
{
	y = valor;
}

void Entidad::set_altura(int valor)
{
	altura = valor;
}

int Entidad::get_x()
{
	return x;
}

int Entidad::get_y()
{
	return y;
}

int Entidad::get_altura()
{
	return altura;
}
