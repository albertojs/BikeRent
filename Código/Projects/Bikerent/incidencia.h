#ifndef _INCIDENCIA_H
#define _INCIDENCIA_H

#include <string>




class Incidencia{
	public:
		enum EstadoInci{Resuelta, EnProceso};
		//FCO
		Incidencia();
		Incidencia(std::string fechaC,std::string fechaR, int idB, std::string concepto, float importe,EstadoInci est=EnProceso, std::string nombre="");
		Incidencia(const Incidencia &otro);
		//Incidencia& operator=(const Incidencia &otro);
		static std::string estadoAString(EstadoInci estado);

		//Accedentes
		int idIncidencia() ;
		std::string fechaCreacion();
		std::string fechaResolucion();
		int idBici();
		std::string concepto();
		float importe();
		EstadoInci estadoI();
		std::string nombre();

		//Mutadores
		void idIncidencia(int idInc);
		void fechaCreacion(std::string fecha);
		void fechaResolucion(std::string fecha);
		void idBici(int idBic);
		void concepto(std::string concep);
		void importe(float import);
		void estadoI(EstadoInci est);
		void mostrar ();
		void nombre(std::string nombre);

		
	private:
		static int _incidenciasTotales;
		int _idIncidencia;
		std::string _fechaCreacion;
		std::string _fechaResolucion;
		int _idBici;
		std::string _concepto;
		float _importe;
		EstadoInci _estadoI;
		std::string _nombre;
};

//
#endif