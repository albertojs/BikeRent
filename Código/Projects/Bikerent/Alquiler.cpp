
#include "Alquiler.h"

#include <iostream>
using namespace std;


Alquiler::Alquiler(int id, std::string fAlquiler, std::string fDevolucion, int idBici, Bicicleta::TipoBici tipoBici, float precio){
	_idAlquiler = id;
	_fecha_alquiler = fAlquiler;
	_fecha_devolucion = fDevolucion;
	_id_bici = idBici;
	_tipo_bici = tipoBici;
	_precio_factura= precio;
};

Alquiler& Alquiler::operator=(const Alquiler &otro){
	_idAlquiler = otro._idAlquiler;
	_fecha_alquiler = otro._fecha_alquiler;
	_fecha_devolucion = otro._fecha_devolucion;
	_id_bici = otro._id_bici;
	_tipo_bici = otro._tipo_bici;
	_precio_factura = otro._precio_factura;
	return *this;
}

Alquiler::Alquiler(const Alquiler &otro){
	*this = otro;
}

void Alquiler::id_alquiler(int id){
	_idAlquiler = id;
}

void Alquiler::id_cliente(int id){
	_id_cliente = id;
}

void Alquiler::fecha_alquiler(std::string fAlquiler){
	_fecha_alquiler = fAlquiler;
}

void Alquiler::fecha_devolucion(std::string fDevolucion){
	_fecha_devolucion = fDevolucion;
}

void Alquiler::id_bici(int id){
	_id_bici = id;
}

void Alquiler::tipo_bici(Bicicleta::TipoBici tipo){
	_tipo_bici = tipo;
}

void Alquiler::precio_factura(float precio){
	_precio_factura = precio;
}

//Accedentes
int Alquiler::idAlquiler() const{
	return _idAlquiler;
}

std::string Alquiler::fecha_alquiler() const{
	return _fecha_alquiler;
}

std::string Alquiler::fecha_devolucion() const{
	return _fecha_devolucion;
}

int Alquiler::id_bici() const{
	return _id_bici;
}

int Alquiler::id_cliente() const{
	return _id_cliente;
}

Bicicleta::TipoBici Alquiler::tipo_bici() const{
	return _tipo_bici;
}
float Alquiler::precio_factura() const{
	return _precio_factura;
}
//mostrar un alquiler
void Alquiler::mostrar() const{
	cout << "/n idAlquiler:   " << _idAlquiler;
	cout << "/n fecha de alquiler: " << _fecha_alquiler;
	cout << "/n fecha de devolución: " << _fecha_devolucion;
	cout << "/n idBici:       " << _id_bici;
	cout << "/n tipo de bici: " <<_tipo_bici;
	cout << "/n precio:       " << _precio_factura << "/n";
}

std::string Alquiler::tipoAString(Bicicleta::TipoBici tipo) const
{
	switch(tipo){
	case Bicicleta::Montanya:
			return "Montaña";
		case Bicicleta::Carretera:
			return "Carretera";
		case Bicicleta::Paseo:
			return "Paseo";
		default:
			return "Montaña";
	}
}