#include "incidencia.h"

#include <iostream>
using namespace std;

int Incidencia::_incidenciasTotales=1;


//Forma canonica ortodoza
Incidencia::Incidencia(){
	_incidenciasTotales++;
}

Incidencia::Incidencia(std::string fechaC,std::string fechaR, int idB, std::string concepto, float importe, EstadoInci est, std::string nombre){
	_idIncidencia=_incidenciasTotales++;
	_fechaCreacion=fechaC;
	_fechaResolucion=fechaR;
	_idBici=idB;
	_concepto=concepto;
	_importe=importe;
	_estadoI=est;
	_nombre=nombre;
}

Incidencia::Incidencia(const Incidencia &otro){
	_idIncidencia=otro._idIncidencia;
	_fechaCreacion=otro._fechaCreacion;
	_fechaResolucion=otro._fechaResolucion;
	_idBici=otro._idBici;
	_concepto=otro._concepto;
	_importe=otro._importe;
	_estadoI=otro._estadoI;
	_nombre=otro._nombre;

}
/*
Incidencia& Incidencia::operator=(const Incidencia &otro){

}*/

//Accedentes
int Incidencia::idIncidencia() { 
	return _idIncidencia;
}

std::string Incidencia::fechaCreacion(){ 
	return _fechaCreacion;
}

std::string Incidencia::fechaResolucion(){ 
	return _fechaResolucion;
}

int Incidencia::idBici(){ 
	return _idBici;
}

std::string Incidencia::concepto(){ 
	return _concepto;
}

float Incidencia::importe(){
	return _importe;
}

Incidencia::EstadoInci Incidencia::estadoI(){
	return _estadoI;
}

std::string Incidencia::nombre(){
	return _nombre;
}

/*Mutadores*/
void Incidencia::idIncidencia(int idInc){
	_idIncidencia=idInc;
}

void Incidencia::fechaCreacion(std::string fecha){
	_fechaCreacion=fecha;
}

void Incidencia::fechaResolucion(std::string fecha){ 
	_fechaResolucion=fecha;
}

void Incidencia::idBici(int idBic){ 
	_idBici=idBic;
}

void Incidencia::concepto(std::string concep){ 
	_concepto=concep;
}

void Incidencia::importe(float import){
	_importe=import;
}

void Incidencia::estadoI(EstadoInci est){
	_estadoI=est;
}

std::string Incidencia::estadoAString(EstadoInci estado){
	switch(estado){
		case Resuelta:
			return "Resuelta";
		case EnProceso:
			return "En proceso";
		default:
			return "En proceso";
	}
}

void Incidencia::nombre(std::string nombre){
	_nombre=nombre;
}
//Funcion mostrar una incidencia
//void Incidencia::mostrar (){
	//cout << "/***************************************************/" << endl;
	/*cout << "Id incidencia   : " << _idIncidencia << endl;
	cout << "Id bici         : " << _idBici << endl;
	cout << "Fecha creacion  : " ;  
	_fechaCreacion.muestraFecha();
	cout << endl;
	cout << "Fecha resolucion: " ;
	_fechaResolucion.muestraFecha();
	cout << endl;
	cout << "Concepto        : " << _concepto << endl;
	cout << "Importe         : " << _importe << " euros" << endl;
	cout << "Estado bicicleta: ";
	switch(_estado){
		case Disponible:
			cout << "Disponible";
			break;
		case Alquilada:
			cout << "Alquilada";
			break;
		case EnTaller:
			cout << "Taller";
			break;
		default:
			cout << "Estado no disponible";
			break;
	}
	cout << endl;
	//cout << "/***************************************************///" << endl;
//}

