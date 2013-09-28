#ifndef _CLIENTE_H
#define _CLIENTE_H

#include "ListaAlquileres.h"

class Cliente {
	public:

		//Constructor por defecto.
		Cliente(){};
		//Destructor.
		~Cliente(){};
		//Constructor con parametros
		Cliente(int id, std::string dni, std::string nom, std::string ape, std::string dire,int tlf);
		//Constructor de copia
		Cliente(const Cliente &otro);
		//Operador de copia
		Cliente& Cliente::operator=(const Cliente &otro);
		//Mutadores
		void idCliente(int id);
		void dni(std::string dni);
		void nombre(std::string nom);
		void apellidos(std::string ape);
		void direccion(std::string dire);
		void telefono(int tlf);
		void alquileres(ListaAlquileres otros);
		void ponUltimoRegistroAlquiler(int numAlq);

		//Accedentes
		int Cliente::idCliente() const;
		std::string Cliente::dni() const;
		std::string Cliente::nombre() const;
		std::string Cliente::apellidos() const;
		std::string Cliente::direccion() const;
		int Cliente::telefono() const;
		ListaAlquileres Cliente::alquileres();
		int dameUltimoRegistroAlquiler();

		//mostrar un cliente
		void mostrar() const;
		int numAlquileresTipo(Bicicleta::TipoBici b);

	private:

		int _idCliente;
		int _ultimoRegistroAlquiler;
		std::string _dni;
		std::string _nombre;
		std::string _apellidos;
		std::string _direccion;
		int _telefono;
		ListaAlquileres _alquileres;
};

#endif