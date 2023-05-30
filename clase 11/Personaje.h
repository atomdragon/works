#pragma once
#include "String.h"

enum Direccion
{
	Arriba, Abajo, Izquiera, Derecha, Ninguno
};
using namespace System::Drawing;

class Personaje
{
private:
	int x, y; //Ubicaciones
	int dx, dy; //Velocidades, pero para este ejemplo usaremos el movimiento con teclas
	char* imagen; //Para el nokmbre del archivo de la imagen 
	int Ancho, Alto; //Ancho,Alto de toda la imagen 
	int IndiceAN, IndiceAL; //Indices numericos de la imagen recortada
public:
	Personaje();
	~Personaje();
	//Metodos de acceso set

	void cambiarX(int valor);
	void cambiarY(int valor);
	void cambiar_dx_dy(Direccion teclapulsada);
	void cambiar_imagen(char* valor);
	//metodos de acceso get

	int retornarX();
	int retornarY();
	int retornar_dx();
	int retornar_dy();
	int retornarAL();
	int retornarAN();
	//Para la animación
	void mostrar(Graphics^ canvas);
	void mover(Graphics^ canvas,Direccion teclapulsada);

};

