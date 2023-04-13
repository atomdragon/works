#include "pch.h"
#include <iostream>
#include <conio.h>
#include "ArrDragon.h"

int Menu() {
	int op;

	do
	{
		std::cout << " Menu de Opciones Drakonicas" << std::endl;
		std::cout << "1.- Registrar Dragon" << std::endl;
		std::cout << "2.- Mostrar Registro De Dragones " << std::endl;
		std::cout << "3.- Modificar un Registro de Dragones " << std::endl;
		std::cout << "4.- Eliminar Un Registro de Dragones " << std::endl;
		std::cout << "5.- Cantidad De Dragones Ancianos" << std::endl;
		std::cout << "6.- Cantidad De Dragones De Fuego" << std::endl;
		std::cout << "7.- Cantidad De Dragones De Agua" << std::endl;
		std::cout << "8.- Cantidad De Dragones De Luz" << std::endl;
		std::cout << "9.- Cantidad De Dragones Vampiros" << std::endl;
		std::cout << "10.- Salir " << std::endl;
		std::cout << " Ingrese opcion: "; std::cin >> op;
	} while (op < 1 || op > 10);

	return op;
}

//El siguiente programa trata sobre el registro de dragones y los items que puede tener cada uno
int main()
{
	ArrDragon* ObjArrDragon = new ArrDragon();
	Dragon* ObjDragon;
	std::string nombre_D;
	int añoss;
	bool alass;
	int tipoo;
	int colorr;

	while (true)
	{
		System::Console::Clear();

		int op = Menu();

		if (op == 1)
		{
			ObjDragon = new Dragon();
			std::cout << "Nombre del dragon: "; std::cin >> nombre_D;
			ObjDragon->set_Nombre(nombre_D);
			std::cout << "Years of the dragon: "; std::cin >> añoss;
			ObjDragon->set_Años(añoss);
			std::cout << "Tiene alas (Si = 1)( No = 0): "; std::cin >> alass;
			ObjDragon->set_Alas(alass);
			std::cout << "Que tipo será tu dragón? (1 = fuego , 2 = agua, 3 = viento , 4 = oscuro): "; std::cin >> tipoo;
			ObjDragon->set_Tipo(tipoo);
			std::cout << "Que color será tu dragón? (1 = rojo , 2 = azul, 3 = blancos , 4 = negro): "; std::cin >> colorr;
			ObjDragon->set_Color(colorr);

			ObjArrDragon->registrar_dragon(ObjDragon);
			_getch();
		}
		if (op == 2)
		{
			ObjArrDragon->mostrar_registro_dragon();
			_getch();
		}
		if (op == 3)
		{
			System::Console::Clear();
			int pos; //Posición
			int opcionM;
			std::cout << "Ingrese una posición a modificar (Comienza desde 0): "; std::cin >> pos;
			Dragon* ObjDragon = ObjArrDragon->modificar_datos_dragon(pos);
			std::string nombre_D;
			bool alass;
			int tipoo;
			int colorr;

			std::cout << "Seleccione el dato a modificar: " << std::endl;
			std::cout << "1.- Nombre del dragon: " << std::endl;
			std::cout << "2.- Tiene alas (Si = 1)( No = 0): " << std::endl;
			std::cout << "3.- Que tipo será tu dragón? (1 = fuego , 2 = agua, 3 = viento , 4 = oscuro): " << std::endl;
			std::cout << "4.- Que color será tu dragón? (1 = rojo , 2 = azul, 3 = blancos , 4 = negro): " << std::endl;
			std::cout << "5.- Salir al Menú " << std::endl;
			std::cin >> opcionM;
			
			System::Console::Clear();

			switch (opcionM)
			{
				case 1:
					std::cout << "Nombre del dragon a modifcar ( " << ObjDragon->get_Nombre() << " ): " << std::endl;
					std::cout << "Nuevo nombre: "; std::cin >> nombre_D; 
					ObjDragon->set_Nombre(nombre_D);
					_getch();
					break;
				case 2:
					std::cout << "Capacidad de volar ( ";
					if (ObjDragon->get_Alas())
					{
						std::cout << "Si )" << std::endl;
						std::cout << "Perder capacidad (1.- Si) (0.- No) :" << std::endl;
						std::cin >> alass;
						if (alass == 1)
						{
							alass = true;
							ObjDragon->set_Alas(alass);
						}
						else 
						{
							alass = 0;
							ObjDragon->set_Alas(alass);
						}
					}
					else {
						std::cout << "No) " << std::endl;
						std::cout << "Ganar capacidad (1.- Si)(2.- No) :" << std::endl;
						std::cin >> alass;
						if (alass==1)
						{
							alass = true;
							ObjDragon->set_Alas(alass);
						}
						else
						{
							alass = false;
							ObjDragon->set_Alas(alass);
						}
					}
					_getch();
					break;
				case 3:
					std::cout << "Tipo de dragon ( " << ObjDragon->get_Tipo() << ")" << std::endl;
					std::cout << "Nuevo tipo de dragon: "; std::cin >> tipoo;
					ObjDragon->set_Tipo(tipoo);
					_getch();
					break;
				case 4:
					std::cout << "Color de dragon ( " << ObjDragon->get_Color() << ")" << std::endl;
					std::cout << "Nuevo color de dragon: "; std::cin >> colorr;
					ObjDragon->set_Color(colorr);
					_getch();
					break;					
				case 5:
					_getch();
					break;
			default:
				std::cout << "\tDijite un numero válido: ";
				_getch();
				break;
			}
		}
		if (op == 4)
		{
			int pos;
			std::cout << "Ingrese la posición a eliminar: ";
			std::cin >> pos;
			ObjArrDragon->eliminar_datos_dragon(pos);
			_getch();
		}
		if (op == 5)
		{
			ObjArrDragon->Dragon_anciano();
			_getch();
		}
		if (op == 6)
		{
			ObjArrDragon->Dragones_fuego();
			_getch();
		}
		if (op == 7)
		{
			ObjArrDragon->Dragones_agua();
			_getch();
		}
		if (op == 8)
		{
			ObjArrDragon->Dragones_luz();
			_getch();
		}
		if (op == 9)
		{
			ObjArrDragon->Dragones_Vampiros();
			_getch();
		}
		if (op == 10)
		{
			_getch(); 
			break;
		}
	}
	return 0;
}
