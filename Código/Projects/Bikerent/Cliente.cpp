#include "CLiente.h"

#include <iostream>
using namespace std;

Cliente::Cliente(int id, string dni, string nom, string ape, string dire,int tlf) {
	_idCliente = id;
	_dni = dni;
	_nombre =  nom;
	_apellidos = ape;
	_direccion = dire;
	_telefono = tlf;
	_ultimoRegistroAlquiler=1;
}
Cliente& Cliente::operator=(const Cliente &otro){
	_idCliente = otro._idCliente;
	_dni = otro._dni;
	_nombre =  otro._nombre;
	_apellidos = otro._apellidos;
	_direccion = otro._direccion;
	_telefono = otro._telefono;
	_alquileres = otro._alquileres;
	return *this;
}
Cliente::Cliente(const Cliente &otro){
	*this = otro;
}
///////////////////////////////////
void Cliente::idCliente(int id) {
	_idCliente = id;
}
void Cliente::dni(string dni) {
	_dni = dni;
}
void Cliente::nombre(string nom) {
	_nombre = nom;
}
void Cliente::apellidos(string ape) {
	_apellidos = ape;
}
void Cliente::direccion(string dire) {
	_apellidos = dire;
}
void Cliente::telefono(int tlf) {
	_telefono = tlf;
}
void Cliente::alquileres(ListaAlquileres otros) {
	_alquileres = otros;
}


void Cliente::ponUltimoRegistroAlquiler(int numAlq){
	_ultimoRegistroAlquiler = numAlq;
}

///////////////////////////////////
int Cliente::idCliente() const {
	return _idCliente;
}
string Cliente::dni() const{
	return _dni;
}
string Cliente::nombre() const{
	return _nombre;
}
string Cliente::apellidos() const{
	return _apellidos;
}
string Cliente::direccion() const{
	return _direccion;
}
int Cliente::telefono() const{
	return _telefono;
}
ListaAlquileres Cliente::alquileres(){
	return _alquileres;		
}



int Cliente::dameUltimoRegistroAlquiler(){
	return _ultimoRegistroAlquiler;
}

///////////////////////////////////
void Cliente::mostrar() const{
	cout << "Cliente: " << _idCliente << "\n";
	cout << "DNI: " << _dni << "\n";
	cout << "Nombre: " << _nombre << "\n";
	cout << "Apellidos: " << _apellidos << "\n";
	cout << "Direccion: " << _direccion << "\n";
	cout << "Telefono: " << _telefono << "\n";
	cout << "Alquileres: /n  ";
	for(int i=0; i<_alquileres.numElems(); i++){
		_alquileres.dameElem(i).mostrar();
	}
}

int Cliente::numAlquileresTipo(Bicicleta::TipoBici b){
	int contTipo=0;
	for (int i=0; i < _alquileres.numElems() ; i++){
		if (b==_alquileres.dameElem(i).tipo_bici())
			contTipo++;
	}
	return contTipo;
}

