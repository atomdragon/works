#pragma once
#include <iostream>

class Enemigo;

class Arrenemigo
{
private:
	int cant_enemy;//Cantidad de enemigos
	Enemigo** arreglo_D_E; //Declarando el arreglo de enemigo
public:
	Arrenemigo();//
	void array(Enemigo* enemies);
	void print();
};

