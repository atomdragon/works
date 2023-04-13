#pragma once
#include <iostream>

using namespace std;

class Cuerpo
{
private:
	int x, y;
	char forma;
public:
	Cuerpo(int _x, int _y, char _forma);
	~Cuerpo();
	void imprime_cuerpo();
	void setX(int valor);
};

