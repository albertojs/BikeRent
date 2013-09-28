#ifndef _INCIDENCIASEMPLEADO_H
#define _INCIDENCIASEMPLEADO_H

#include "incidencia.h"

#include <string>

class IncidenciasEmpleado : public Incidencia {

	private:
		std::string _nombre;

	public:
		IncidenciasEmpleado();
		IncidenciasEmpleado(std::string _nombre);
		IncidenciasEmpleado(const IncidenciasEmpleado &otro);

		std::string nombre();
		void nombre(std::string nom);

		void mostrar();
	

};

#endif