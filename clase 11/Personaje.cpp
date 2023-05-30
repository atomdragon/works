#include "Personaje.h"

Personaje::Personaje()
{
	y = x = 0;
	dx = 1; dy = 1;
	Alto = Ancho = 0;
	imagen = new char[20];
}

Personaje::~Personaje()
{
}

void Personaje::cambiarX(int valor)
{
	this->x = valor;
}

void Personaje::cambiarY(int valor)
{
	this->y = valor;
}

void Personaje::cambiar_dx_dy(Direccion teclapulsada)
{
	switch (teclapulsada)
	{
	case Arriba: dx = 0; dy = -1;
		break;
	case Abajo: dx = 0; dy = 1;
		break;
	case Izquiera: dx = -1; dy = 0;
		break;
	case Derecha:dx = 1; dy = 0;
		break;
	case Ninguno:dx = 0; dy = 0;
		break;
	default:
		break;
	}
}

void Personaje::cambiar_imagen(char* valor)
{
	//lo que viene en el parámetro valor lo copiamos a la imagen
		//copia valor de la imagen
	strcpy(imagen, valor);
	//cargar iamgen
	Bitmap^ bitmap = gcnew Bitmap(gcnew System::String(imagen));

	//bitmap tiene la imagen cargada

	Ancho = bitmap->Width / 9;
	Alto = bitmap->Height / 7;

	delete bitmap;
}

int Personaje::retornarX()
{
	return x;
}

int Personaje::retornarY()
{
	return y;
}

int Personaje::retornar_dx()
{
	return dx;
}

int Personaje::retornar_dy()
{
	return dy;
}

int Personaje::retornarAL()
{
	return Alto;
}

int Personaje::retornarAN()
{
	return Ancho;
}

void Personaje::mostrar(Graphics^ canvas)
{
	//Vuelvo a cargar la imagen completa . . . el sprite completo
	Bitmap^ bitmap = gcnew Bitmap(gcnew System::String(imagen));
	//obtener un recuadro o porción del sprite
	Rectangle cuadro = Rectangle(IndiceAN * Ancho, IndiceAL * Alto, x, y);
									// X,				y,		  ancho,alto
	//Para hacer zoom
	Rectangle Zoom = Rectangle(x, y, Ancho * 1, Alto * 1);

	canvas->DrawImage(bitmap, Zoom, cuadro, GraphicsUnit::Pixel);
}

void Personaje::mover(Graphics^ canvas, Direccion teclapulsada)
{
	if (teclapulsada == Direccion::Abajo)IndiceAL = 4;
	if (teclapulsada == Direccion::Arriba)IndiceAL = 6;
	if (teclapulsada == Direccion::Izquiera)IndiceAL = 5;
	if (teclapulsada == Direccion::Abajo)IndiceAL = 7;

	IndiceAN++;

	if (IndiceAN > 9) IndiceAN = 0;
	x = x + dx;
	y = y + dy;

	mostrar(canvas);
}
