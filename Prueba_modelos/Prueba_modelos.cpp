#include"pch.h"
#include "ArrHotel.h"
#include <conio.h>

using namespace System;
int Menu() {

	int op;
	do {

		cout << " Menu de Opciones " << endl;
		cout << "1.- Registrar Hotel" << endl;
		cout << "2.- Mostrar Registro de Hoteles " << endl;
		cout << "3.- Modificar un Registro de Hotel " << endl;
		cout << "4.- Eliminar Un Registro de Hotel " << endl;
		cout << "5.- Reporte de ubicacion de Hoteles CAMPOS-ELISEOS" << endl;
		cout << "6.- Reporte de HOTELES CON DESAYUNO" << endl;
		cout << "7.- Reporte de HOTELES CON SERVICIO AEROPUERTO" << endl;
		cout << "8.- Salir " << endl;
		cout << " Ingrese opcion: "; cin >> op;
	} while (op < 1 || op> 8);

	return op;
}

int main()
{
	ArrHotel* objArreglo = new ArrHotel();
	Hotel* objHotel;
	string nombre;
	string ubicacion;
	int  estrellas;
	bool desayuno;
	int telefono;
	bool servicio;

	while (true)
	{
		Console::Clear();
		int op;

		op = Menu();

		if (op == 1)
		{
			objHotel = new Hotel();
			cout << "  nombre del contacto: "; cin >> nombre;
			objHotel->setNombre(nombre);
			cout << " Ubicacion: "; cin >> ubicacion;
			objHotel->setUbicacion(ubicacion);
			cout << " Estrellas: "; cin >> estrellas;
			objHotel->setEstrellas(estrellas);
			cout << " Desayuno: "; cin >> desayuno;
			objHotel->setDesayuno(desayuno);
			cout << " Telefono: "; cin >> telefono;
			objHotel->setTelefono(telefono);
			cout << " Servicio: "; cin >> servicio;
			objHotel->setServicio(servicio);


			objArreglo->agregarHotel(objHotel);


		}
		if (op == 2)
		{
			objArreglo->mostrar();
		}

		if (op == 3)
		{
			int pos;
			int opcionM;
			cout << "Ingrese la poscion  que desee Modificar "; cin >> pos;
			Hotel* objHotel = objArreglo->modificar(pos);
			string nombre;
			string ubicacion;
			int  estrellas;
			bool desayuno;
			int telefono;
			bool servicio;

			cout << "Que desea Modificar del Objeto: " << endl;
			cout << " 1 .- Nombre el Nombre " << endl;
			cout << " 2 .- Ubicacion " << endl;
			cout << " 3 .- Estrellas" << endl;
			cout << " 4 .- Desayuno " << endl;
			cout << " 5 .- Telefono " << endl;
			cout << " 6 .- Servicio " << endl;
			cin >> opcionM;

			switch (opcionM)
			{
			case 1:

				cout << "  nombre del contacto  : (" << objHotel->getNombre() << ") :"; cin >> nombre;
				objHotel->setNombre(nombre);
				break;
			case 2:

				cout << " Ubicacion  : (" << objHotel->getUbicacion() << ") :"; cin >> ubicacion;
				objHotel->setUbicacion(ubicacion);
				break;
			case 3:

				cout << " Estrellas : (" << objHotel->getEstrellas() << ") :"; cin >> estrellas;
				objHotel->setEstrellas(estrellas);
				break;
			case 4:

				cout << " Desayuno : (" << objHotel->getDesayuno() << ") :"; cin >> desayuno;
				objHotel->setDesayuno(desayuno);
				break;
			case 5:

				cout << " Telefono : (" << objHotel->getTelefono() << ") :"; cin >> telefono;
				objHotel->setTelefono(telefono);
				break;
			case 6:

				cout << " Servicio : (" << objHotel->getServicio() << ") :"; cin >> servicio;
				objHotel->setServicio(servicio);
				break;

			case 7:

				break;

			default:
				cout << " Ha digitado un numero invalido " << endl;
				break;
			}


		}

		if (op == 4)
		{

			int pos;

			cout << "Ingrese la poscion que desee Eliminar: "; cin >> pos;
			objArreglo->eliminarPos(pos);

		}

		if (op == 5)
		{

			objArreglo->reporte1();
		}

		if (op == 6)
		{

			objArreglo->reporte2();

		}

		if (op == 7)
		{
			objArreglo->reporte3();
		}
		if (op == 8)
		{
			return 0;
		}


		getch();
	};
}