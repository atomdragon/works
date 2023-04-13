#include "pch.h"
#include <iostream>
#include "Dragon.h"

std::string Dragon_nombre[3] = { "okami","pedro","mantis" };

Dragon::Dragon()
{
	alas = rand() % 2;
	años = rand() % 100000;
	nombre = Dragon_nombre[rand() % 3];
	color = rand() % 4 + 1;
	tipo = rand() % 4 + 1;
}

Dragon::~Dragon() {}

void Dragon::ToString()
{
	std::cout << std::endl << "Nombre: " << nombre << std::endl;
	std::cout << "Years of the dragon: " << años << std::endl;
	std::cout << "Tiene alas (Si = 1)( No = 0): ";
	if (alas)
	{
		std::cout << "Si" << std::endl;
	}
	else {
		std::cout << "No" << std::endl;
	}
	std::cout << "Tipo de dragón (1 = fuego , 2 = agua, 3 = viento , 4 = oscuro): " << tipo << std::endl;
	std::cout << "Color de dragón? (1 = rojo , 2 = azul, 3 = blancos , 4 = negro): " << color << std::endl;
}
