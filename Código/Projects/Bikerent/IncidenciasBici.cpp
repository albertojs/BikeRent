#include "IncidenciasBici.h"

IncidenciasBici::IncidenciasBici(){}

IncidenciasBici::IncidenciasBici(float importe,EstadoInci est, int idBici){
	_importe=importe;
	_estadoI=est;
	_idBici=idBici;
}

IncidenciasBici::IncidenciasBici(const IncidenciasBici &otro){
	_importe=otro._importe;
	_estadoI=otro._estadoI;
	_idBici=otro._idBici;
}


void IncidenciasBici::idBici(int idBic){ 
	_idBici=idBic;
}

void IncidenciasBici::importe(float import){
	_importe=import;
}

void IncidenciasBici::estadoI(EstadoInci est){
	_estadoI=est;
}

float IncidenciasBici::importe(){
	return _importe;
}

IncidenciasBici::EstadoInci IncidenciasBici::estadoI(){
	return _estadoI;
}

int IncidenciasBici::idBici(){ 
	return _idBici;
}

std::string IncidenciasBici::estadoAString(EstadoInci estado){
	switch(estado){
		case Resuelta:
			return "Resuelta";
		case EnProceso:
			return "En proceso";
		default:
			return "En proceso";
	}
}