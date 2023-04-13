#include <iostream>
#include <string>
using namespace std;

string hotelUbicacion[7] = { "Isla de la Cite", "San Luis", "Barrio Latino", "Montmartre", "La Defensa",
"Campos Eliseos", "Plaza de la Concordia" };
string hotelNombre[7] = { "Marriot  ", "Bolivar  ","Shell   ","Wiston   ","Paris  ","Casa Andina","Trivago  " };

class Hotel {
private:
	string nombre;
	int estrellas;
	string ubicacion;
	bool desayuno;
	int telefono;
	bool servicioA;
public:
	Hotel() {
		nombre = hotelNombre[rand() % 7];
		estrellas = rand() % 5 + 1;
		ubicacion = hotelUbicacion[rand() % 7];
		desayuno = rand() % 2;
		telefono = rand() % 8000000 + 10000000;
		servicioA = rand() % 2;
	}
	~Hotel() {}
	//get
	string getNombre() { return nombre; }
	int getEstrellas() { return estrellas; }
	string getUbicacion() { return ubicacion; }
	bool getDesayuno() { return desayuno; }
	int getTelefono() { return telefono; }
	bool getServicio() { return servicioA; }
	//set
	void setNombre(string n) { nombre = n; }
	void setEstrellas(int e) { estrellas = e; }
	void setUbicacion(string u) { ubicacion = u; }
	void setDesayuno(bool d) { desayuno = d; }
	void setTelefono(int t) { telefono = t; }
	void setServicio(bool s) { servicioA = s; }
	void toString() {
		cout << "Nombre: " << nombre << "\t";
		cout << "Estrellas: " << estrellas << "\t";
		cout << "Ubicacion: " << ubicacion << "\t";
		cout << "Desayuno: ";
		if (desayuno)
			cout << "Si" << "\t";
		else
			cout << "No" << "\t";
		cout << "Telefono: " << telefono << "\t";
		cout << "Servicio: ";
		if (servicioA)
			cout << "Si" << "\t";
		else
			cout << "No" << "\t";
		cout << endl;
	}
};

