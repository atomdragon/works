#pragma once
#include <iostream>

class Patas
{
private:
	int x, y;
	char forma;
public:
	Patas(int _x, int _y, char _forma);//Constructor
	~Patas(); //Destrcutor

	void imprime_pata();
	void setX(int valor);
};

