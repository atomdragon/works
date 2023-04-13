#pragma once
#include <iostream>
#include "Dragon.h"

class ArrDragon
{
private:
	Dragon** arreglo; //Se declara el arreglo de la clase dragon
	int N; //N es un entero que indica el tamaño del arreglo
public:
	void arr_dragon(); //Se inicializa el arreglo y le da el valor nulo
	void registrar_dragon(Dragon* obj); //Registra los datos de un dragon
	void mostrar_registro_dragon();//Muestra los dragones registrados
	Dragon* modificar_datos_dragon(int posicion); //Modifica los datos de un dragon
	void eliminar_datos_dragon(int posicion); //Elimina los datos de un dragon
	void Dragon_anciano(); //Son los dragones con más de 100 años
	void Dragones_fuego(); //Son los dragones que son de fuego
	void Dragones_agua(); //Son los dragones que son de agua
	void Dragones_luz(); //Son los dragones que son de luz
	void Dragones_Vampiros(); //Son los dragones que son vampiros 
};

