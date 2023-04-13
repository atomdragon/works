#include "Hotel.h"

using namespace std;
class ArrHotel {
private:
	Hotel** arreglo;
	int N;
	int indice;
public:
	ArrHotel() {
		arreglo = nullptr;
		N = 0;
	}
	void agregarHotel(Hotel* obj) {
		Hotel** aux = new Hotel * [N + 1];
		for (int i = 0; i < N; i++)
		{
			aux[i] = arreglo[i];
		}
		aux[N] = obj;
		N++;
		if (arreglo != nullptr)

			delete[] arreglo;

		arreglo = aux;
	}
	void mostrar() {
		for (int i = 0; i < N; i++)
		{
			arreglo[i]->toString();
		}
	}
	void eliminarPos(int pos) {
		for (int i = 0; i < N; i++)
		{
			if (i == pos) {
				for (int j = pos; j < N - 1; j++)
				{
					arreglo[j] = arreglo[j + 1];
				}
			}
		}
		N--;
	}

	Hotel* modificar(int pos) {
		for (int i = 0; i < N; i++)
		{
			return arreglo[pos];
		}
	}
	
	//mostrar todos los campos Eliseos
	void reporte1() {
		for (int i = 0; i < N; i++)
		{
			if (arreglo[i]->getUbicacion() == "Campos Eliseos")
				arreglo[i]->toString();
		}
	}
	//Hoteles que brindan desayuno
	void reporte2() {
		for (int i = 0; i < N; i++)
		{
			if (arreglo[i]->getDesayuno() == true)
				arreglo[i]->toString();
		}
	}
	//hoteles que brindan el servicio de aeropuerto
	void reporte3() {
		for (int i = 0; i < N; i++)
		{
			if (arreglo[i]->getServicio())
				arreglo[i]->toString();
		}
	}


};


