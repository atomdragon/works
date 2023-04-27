#include "pch.h"
#include "Personaje.h"
#include <conio.h>

Personaje::Personaje(int _x, int _y, string _cabeza, string _cuerpo, string _pies/*, int _altura*/)
{
	x = _x;
	y = _y;

	cabeza = _cabeza;
	cuerpo = _cuerpo;
	pies = _pies;

	altura = 3;
	ancho = 1;

	//altura =_altura;

	//body = new string[altura];

	//body[0] = "U";
	//body[1] = "D";
	//body[2] = "L";

}

Personaje::~Personaje()
{
}

void Personaje::borrar()
{
	for (int yy = 0; yy < altura; yy++)
	{
		for (int i = 0; i < cabeza.length()/* body[yy].length()*/; i++)
		{
			Console::SetCursorPosition(x + i, y + yy); cout << " ";
		}
	}

}

void Personaje::mover()
{
	char tecla;

	if (_kbhit())
	{
		tecla = toupper(_getch());
		switch (tecla)
		{
		case 'W': y--;
			if (y < 0)
			{
				y++;
			}
			break;
		case 'S': y++;
			if (y + altura > ALTO)
			{
				y--;
			}
			break;
		case 'A': x--;
			if (x < 0)
			{
				x++;
			}
			break;
		case 'D': x++;
			if (x + ancho > ANCHO)
			{
				x--;
			}
			break;
		default:
			break;
		}
	}

}

void Personaje::dibujar()
{
	Console::SetCursorPosition(x, y + 0); cout << cabeza;
	Console::SetCursorPosition(x, y + 1); cout << cuerpo;
	Console::SetCursorPosition(x, y + 2); cout << pies;
}

//36152
void Personaje::Colision(Personaje* player1, Personaje* player2)
{
	for (int y = 0; y < player1->altura ; y++)
	{
		for (int x = 0; x < player1->ancho; x++)
		{
			for (int yy = 0; yy < player2->altura; yy++)
			{
				for (int xx = 0; xx < player2->ancho; xx++)
				{
					if (player1->x == player2->x || player1->y == player2->y)
					{
						cout << "Se a colisionado";
						_sleep(800);
						Console::Clear();
						delete player2;
					}
				}
			}
		}
	}
}