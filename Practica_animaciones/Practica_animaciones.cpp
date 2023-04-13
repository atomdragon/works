#include "pch.h"
#include "Competencia.h"

using namespace System;

int main()
{
    srand((unsigned)time(NULL));
    Console::CursorVisible = false;
    Competencia* ObjCompetencia;

    ObjCompetencia = new Competencia();
    ObjCompetencia->inicio_competencia();

    system("pause");

    return 0;
}
