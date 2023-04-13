#include "pch.h"
#include "ArrDragon.h"

void ArrDragon::arr_dragon()
{
	arreglo = nullptr;//Se incializa en nulo el arreglo
	N = 1;//Se inicializa en 0 el tamaño
}

void ArrDragon::registrar_dragon(Dragon* obj)
{
	//se declara el arreglo auxiliar, este arreglo tiene el tamaño de N pero + 1
	Dragon** aux = new Dragon * [N + 1];
	for (int i = 0; i < N; i++)
	{
		aux[i] = arreglo[i];
	}
	aux[N] = obj;
	N++;
	if (arreglo != nullptr)
	{
		delete[] arreglo;
	}
	arreglo = aux;
}

void ArrDragon::mostrar_registro_dragon()
{
	for (int i = 0; i < N; i++)
	{
		arreglo[i]->ToString();
	}
}

Dragon* ArrDragon::modificar_datos_dragon(int posicion)
{
	for (int i = 0; i < N; i++)
	{
		return arreglo[posicion];
	}
}

void ArrDragon::eliminar_datos_dragon(int posicion)
{
	for (int i = 0; i < N; i++)
	{
		if (i == posicion)
		{
			for (int j = posicion; j < N - 1; j++)
			{
				arreglo[j] = arreglo[j + 1];
			}
		}
	}
	N--;
}

void ArrDragon::Dragon_anciano()
{
	for (int i = 0; i < N; i++)
	{
		if (arreglo[i]->get_Años() > 100)
		{
			arreglo[i]->ToString();
		}
	}
}

void ArrDragon::Dragones_fuego()
{
	for (int i = 0; i < N; i++)
	{
		if (arreglo[i]->get_Tipo() == '1');
		{
			arreglo[i]->ToString();
		}
	}
}

void ArrDragon::Dragones_agua()
{
	for (int i = 0; i < N; i++)
	{
		if (arreglo[i]->get_Tipo() == '2')
		{
			arreglo[i]->ToString();
		}
	}
}

void ArrDragon::Dragones_luz()
{
	for (int i = 0; i < N; i++)
	{
		if (arreglo[i]->get_Tipo() == '3')
		{
			arreglo[i]->ToString();
		}
	}
}

void ArrDragon::Dragones_Vampiros()
{
	for (int i = 0; i < N; i++)
	{
		if (arreglo[i]->get_Tipo() == '4')
		{
			arreglo[i]->ToString();
		}
	}
}
