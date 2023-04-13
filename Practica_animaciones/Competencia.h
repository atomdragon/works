#pragma once
#include "Dragon.h"

class Competencia
{
private:
	Dragon** arreglo;
	Dragon* objDragon;
	short meta;
public:
	Competencia();
	~Competencia();
	void inicio_competencia();
	void dibuja_meta();
};

