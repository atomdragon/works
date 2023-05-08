#include "pch.h"
#include "Arrenemigo.h"
#include "Enemigo.h"

Arrenemigo::Arrenemigo()
{
	cant_enemy = 0; //Declarando la cantidad de enemigos
	arreglo_D_E = new Enemigo*[cant_enemy]; //Arreglo de enemigos
}

//Funcion arreglo de enemigos que guarda enemigos solo guarda un enemigo a la vez
void Arrenemigo::array(Enemigo* enemies)
{
	//Crado un arreglo aux, para que?, para aumentar el arreglo en uno
	//Guardo el enemigo en este auxiliar
	Enemigo** aux = new Enemigo * [cant_enemy + 1];

	//Coloco en el auxiliar al enemigo
	for (int i = 0; i < cant_enemy; i++)
	{
		aux[i] = arreglo_D_E[i];

	}//Seguro

	aux[cant_enemy] = enemies;

	delete[] arreglo_D_E;

	arreglo_D_E = aux;

	cant_enemy++;
}

void Arrenemigo::print()
{
	for (int i = 0; i < cant_enemy; i++)
	{
		arreglo_D_E[i]->Dibujar();
	}
}
