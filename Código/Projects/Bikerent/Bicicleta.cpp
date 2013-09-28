#include "Bicicleta.h"
#include <iostream>

using namespace std;

#include <string>

void Bicicleta::muestra() const
{
	cout << "Bicicleta: " << _id_bicicleta;
	cout << "  Estado:     " << estadoAString(_estado);
	cout << "  Precio/Dia: " << _precio_por_dia;
	cout << "  Tamaño:     " << tamanyoAString(_tamanyo);
	cout << "  Tipo:       " << tipoAString(_tipo);
}

Bicicleta Bicicleta::lee()
{
	string estado, tamanyo, tipo;
	Bicicleta bici;
	cout << "Bicicleta: ";
	cin >> bici._id_bicicleta;
	cout << "  Estado (Disponible,Alquilada,enTaller): ";
	cin >> estado;
	bici._estado = stringAEstado(estado);
	cout << "  Precio/Dia: ";
	cin >> bici._precio_por_dia;
	cout << "  Tamaño:     ";
	cin >> tamanyo;
	bici._tamanyo = stringATamanyo(tamanyo);
	cout << "  Tipo:       ";
	cin >> tipo;
	bici._tipo = stringATipo(tipo);
	return bici;
}

Bicicleta::EstadoBici Bicicleta::stringAEstado(string estado)
{
		if (estado == "disponible")
			return Disponible;
		else if (estado == "alquilada")
			return Alquilada;
		else if (estado == "en taller")
			return enTaller;
		else 
			return Disponible;
}
Bicicleta::TamanyoBici Bicicleta::stringATamanyo(string tam)
{
		if (tam == "pequeña")
			return Pequenya;
		else if (tam == "mediana")
			return Mediana;
		else if (tam == "grande")
			return Grande;
		else
			return Pequenya;
}
Bicicleta::TipoBici Bicicleta::stringATipo(string tipo)
{
		if (tipo == "montaña")
			return Montanya;
		else if (tipo == "carretera")
			return Carretera;
		else if (tipo == "paseo")
			return Paseo;
		else
			return Montanya;
}

std::string Bicicleta::estadoAString(EstadoBici estado) const
{
	switch(estado){
		case Disponible:
			return "Disponible";
		case Alquilada:
			return "Alquilada";
		case enTaller:
			return "En taller";
		default:
			return "Disponible";
	}
}
std::string Bicicleta::tamanyoAString(TamanyoBici tam) const
{
	switch(tam){
		case Pequenya:
			return "Pequeña";
		case Mediana:
			return "Mediana";
		case Grande:
			return "Grande";
		default:
			return "Pequeña";
	}
}
std::string Bicicleta::tipoAString(TipoBici tipo) const
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

//Mutadores
void Bicicleta::setIdBicicleta(int id)
{
	_id_bicicleta=id;
}
void Bicicleta::setTamanyo(TamanyoBici tam)
{
	_tamanyo=tam;
}
void Bicicleta::setTipo(TipoBici tipo)
{
	_tipo=tipo;
}
void Bicicleta::setEstado(EstadoBici estado)
{
	_estado=estado;
}
void Bicicleta::setPrecioPorDia(float precio)
{
	_precio_por_dia=precio;
}


//Accedentes
int Bicicleta::getIdBicicleta() const
{
	return _id_bicicleta;
}
Bicicleta::TamanyoBici Bicicleta::getTamanyo() const
{
	return _tamanyo;
}
Bicicleta::TipoBici Bicicleta::getTipo() const
{
	return _tipo;
}
std::string Bicicleta::escribeEstado() const
{
	switch(_estado)
	{
		case Disponible:
			return "Disponible";
		break;
		case Alquilada:
			return "Alquilada";
		break;
		case enTaller:
			return "en Taller";
		break;
		default:
			return "";
		break;
	};
}
Bicicleta::EstadoBici Bicicleta::getEstado() const
{
	return _estado;
}
float Bicicleta::getPrecio() const
{
	return _precio_por_dia;
}
