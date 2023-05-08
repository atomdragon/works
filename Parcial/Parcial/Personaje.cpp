#include "pch.h"
#include "Personaje.h"
#include <conio.h>

Personaje::Personaje(int _X, int _Y, int _Altura) :Entidad(_X, _Y, _Altura)
{
	x = _X;
	y = _Y;
	altura = _Altura;

	cuerpo[0] = "  __      _";
	cuerpo[1] = "o'')}____//";
	cuerpo[2] = " `_/      )";
	cuerpo[3] = " (_(_/-(_/ ";
}

void Personaje::Movimiento()
{
	char tecla;

	if (_kbhit())
	{
		tecla = toupper(_getch());
		switch (tecla)
		{
		case 'A':
			if (x > 0)
			{
				Borrar();
				x -= 1;
				Dibujar();
			}
			break;
		case 'D':
			if (x + cuerpo[1].length() < ANCHO)
			{
				Borrar();
				x += 1;
				Dibujar();
			}
			break;
		case 'S':
			if (y + altura < ALTO)
			{
				Borrar();
				y += 1;
				Dibujar();
			}
			break;
		case 'W':
			if (y > 0)
			{
				Borrar();
				y -= 1;
				Dibujar();
			}
			break;
		default:
			break;
		}
	}
}
