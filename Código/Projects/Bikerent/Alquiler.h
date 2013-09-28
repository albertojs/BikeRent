#ifndef __ALQUILER_H
#define __ALQUILER_H

#include "Bicicleta.h"

class Alquiler {

	public:

		Alquiler(){};
		~Alquiler(){};
		//Constructor parametrizado
		Alquiler(int id, std::string fAlquiler, std::string fDevolucion, int idBici, Bicicleta::TipoBici tipoBici, float precio);
		//Constructor de copia
		Alquiler(const Alquiler &otro);
		//Operador de copia
		Alquiler& Alquiler::operator=(const Alquiler &otro);
		//Mutadores
		void id_alquiler(int id);
		void fecha_alquiler(std::string fAlquiler);
		void fecha_devolucion(std::string fDevolucion);
		void id_bici(int id);
		void id_cliente(int id);
		void tipo_bici(Bicicleta::TipoBici tipo);
		void precio_factura(float precio);
		//Accedentes
		int idAlquiler() const;
		std::string fecha_alquiler() const;
		std::string fecha_devolucion() const;
		int id_bici() const;
		int id_cliente() const;
		Bicicleta::TipoBici tipo_bici() const;
		float precio_factura() const;
		//mostrar un alquiler
		void mostrar() const;
		std::string tipoAString(Bicicleta::TipoBici tipo) const;

	private:

		int _idAlquiler;
		std::string _fecha_alquiler;
		std::string _fecha_devolucion;
		int _id_bici;
		int _id_cliente;
		Bicicleta::TipoBici _tipo_bici;
		float _precio_factura;
};

#endif