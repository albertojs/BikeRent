#ifndef _INCIDENCIASBICI_H
#define _INCIDENCIASBICI_H

#include "incidencia.h"

#include <string>


class IncidenciasBici : public Incidencia{
	
	public:
		enum EstadoInci{Resuelta, EnProceso};

		IncidenciasBici();
		IncidenciasBici(float importe,EstadoInci est, int idBici);
		IncidenciasBici(const IncidenciasBici &otro);
		void mostrar();
		static std::string estadoAString(EstadoInci estado);

		//Accedentes
		float importe();
		EstadoInci estadoI();
		int idBici();
		
		//Mutadores
		void importe(float import);
		void idBici(int idBic);
		void estadoI(EstadoInci est);

	private:
		
		float _importe;
		EstadoInci _estadoI;
		int _idBici;

};

#endif