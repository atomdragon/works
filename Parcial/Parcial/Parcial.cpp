#include "pch.h"
#include "Entidad.h"
#include "Personaje.h"
#include "Enemigo.h"
#include "Arrenemigo.h"

using namespace System;

int main(array<System::String ^> ^args)
{
    Console::SetWindowSize(ANCHO, ALTO);
    Console::CursorVisible = false;

    Personaje* player1 = new Personaje(10, 10, 4);
    Arrenemigo* objarray = new Arrenemigo;

    objarray->array(new Enemigo(5, 5, 3));
    objarray->array(new Enemigo(15, 5, 3));
    objarray->array(new Enemigo(15, 20, 3));
    objarray->array(new Enemigo(5, 20, 3));


    player1->Dibujar();

    objarray->print();

    while (1)
    {        
        player1->Movimiento();
    }
    return 0;
}
