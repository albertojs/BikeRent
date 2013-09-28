#include "Oferta.h"
#include <string>
#include <iostream>
using namespace std;

//Constructor con parametros - inicializa una oferta con sus atributos.
Oferta::Oferta(int id, TipoBicicleta tipo, int numAlquileres, float desc) {
	_idOferta = id;
	_tipoBici = tipo;
	_numAlquileres = numAlquileres;
	_descuento = desc;
}
Oferta& Oferta::operator=(const Oferta &otra){
	_idOferta = otra._idOferta;
	_tipoBici = otra._tipoBici;
	_numAlquileres = otra._numAlquileres;
	_descuento = otra._descuento;
	return *this;
}
Oferta::Oferta(const Oferta &otra){
	*this = otra;
}
//Mutadores
void Oferta::idOferta(int id) {
	_idOferta = id;
}
void Oferta::tipoBici(TipoBicicleta tipo) {
	_tipoBici = tipo;
}
void Oferta::numAlquileres(int num) {
	_numAlquileres = num;
}
void Oferta::descuento(float des) {
	_descuento = des;
}
//Accedentes
int Oferta::idOferta() const {
	return _idOferta;
}
Oferta::TipoBicicleta Oferta::tipoBici() {
	return _tipoBici;
}
int Oferta::numAlquileres() {
	return _numAlquileres;
}
float Oferta::descuento() {
	return _descuento;
}
//Funcion que muestra una oferta
void Oferta::mostrar() const{
	cout << "Oferta: " << _idOferta << "\n";
	cout << "Tipo de bicicleta: " << _tipoBici << "\n";
	cout << "Numero de alquileres: " << _numAlquileres << "\n";
	cout << "Descuento: " << _descuento << "%\n";
}

std::string Oferta::tipoAString(Oferta::TipoBicicleta tipo) const
{
	switch(tipo){
		case Montanya:
			return "Montaña";
		case Carretera:
			return "Carretera";
		case Paseo:
			return "Paseo";
		default:
			return "Montaña";
	}
}