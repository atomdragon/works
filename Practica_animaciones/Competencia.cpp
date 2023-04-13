#include "pch.h"
#include "Competencia.h"

Competencia::Competencia()
{
	arreglo = new Dragon * [3];
	float posx;
	float posy;

	posx = 1; posy = 1; meta = 72;

	for (int i = 0; i < 3; i++)
	{
		objDragon = new Dragon(posx, posy);
		arreglo[i] = objDragon;

		posy += 8;
	}
}

Competencia::~Competencia()
{
}

void Competencia::inicio_competencia()
{
	for (int i = 0; i < 3; i++)
	{
		arreglo[i]->imprimir_dragon();
	}
	dibuja_meta();

	short z = 0;

	while (1)
	{
		for (int i = 0; i < 3; i++)
		{
			arreglo[i]->borrar_dragon();
			arreglo[i]->mover_dragon();
			arreglo[i]->imprimir_dragon();

			if (arreglo[i]->get_X() > meta)
			{
				System::Console::SetCursorPosition(30, 25); cout << "Gano el dragon " << i + 1;
				System::Console::SetCursorPosition(20, 26); cout << " Presione una tecla para terminar...";
				system("pause");
				break;
			}
		}
		_sleep(100);
	}
}

void Competencia::dibuja_meta()
{
	for (int y = 1; y < 30; y++)
	{
		System::Console::SetCursorPosition(meta, y); cout << (char)179;
		y++;
	}
}
