#include "IncidenciasEmpleado.h"

#include <iostream>
using namespace std;

IncidenciasEmpleado::IncidenciasEmpleado(){}

IncidenciasEmpleado::IncidenciasEmpleado(string nom){
	_nombre=nom;
}

IncidenciasEmpleado::IncidenciasEmpleado(const IncidenciasEmpleado &otro){
	_nombre=otro._nombre;
}


string IncidenciasEmpleado::nombre(){
	return _nombre;
}
		
void IncidenciasEmpleado::nombre(std::string nom){
	_nombre=nom;
}


void IncidenciasEmpleado::mostrar(){
	cout << _nombre;
}