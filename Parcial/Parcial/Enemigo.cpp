#include "pch.h"
#include "Enemigo.h"
#include "Personaje.h"

Enemigo::Enemigo(int _X, int _Y, int _Altura) :Entidad(_X, _Y, _Altura)
{
	x = _X;
	y = _Y;
	altura = _Altura;
	cuerpo[_Altura];
	Points = 0;

	cuerpo[0] = "|\\---/|";
	cuerpo[1] = "| o_o |";
	cuerpo[2] = " \\_^_/ ";
}

bool Enemigo::Colision(Personaje* Player)
{

	for (int i = 0; i < altura; i++)
	{
		for (int j = 0; j < cuerpo[i].length(); j++)
		{
			for (int ii = 0; ii < Player->get_altura(); ii++)
			{
				for (int jj = 0; jj < cuerpo[ii].length(); jj++)
				{
					if (x + j == Player->get_x() + jj && y + i  == Player->get_y() + ii)
					{
						return true;
					}
				}
			}
		}
	}

	return false;
}

void Enemigo::puntaje(Personaje* Player_1)
{
	if (Colision(Player_1) == true)
	{
		Borrar();
		Points += 1;
		y = 30;
	}

	System::Console::SetCursorPosition(20,3);std::cout << "Puntaje: " << Points;
}
