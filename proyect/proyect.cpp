#include "pch.h"
#include <iostream>
#include "Personaje.h"

using namespace System;
using namespace std;

int main()
{
	Console::CursorVisible = false;

	Personaje* principal= new Personaje(5,5,"U","D","L");
	Personaje* enemigo = new Personaje(13,13,"Y","()","/\\");
	
	enemigo->dibujar();

	while (1)
	{
		principal->Colision(principal, enemigo);
		principal->borrar();
		principal->mover();
		principal->dibujar();
		_sleep(100);
	}
    return 0;
}
