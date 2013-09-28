#ifndef OFERTA_H_
#define OFERTA_H_

#include <string>

class Oferta {
	public:
		enum TipoBicicleta {Montanya, Carretera, Paseo, tipoNulo};
		//Constructor por defecto.
		Oferta(){};
		//Destructor.
		~Oferta(){};
		//Constructor con parametros - inicializa una oferta con sus atributos.
		Oferta(int id, TipoBicicleta tipo, int numAlquileres, float desc);
		//Constructor de copia - inicializa una oferta con otra.
		Oferta(const Oferta &otra);
		//Operador de copia - sobreescribe una oferta con otra.
		Oferta& Oferta::operator=(const Oferta &otra);
		//Mutadores
		void idOferta(int id);
		void tipoBici(TipoBicicleta tipo);
		void numAlquileres(int num);
		void descuento(float des);
		//Accedentes
		int idOferta() const;
		TipoBicicleta tipoBici();
		int numAlquileres();
		float descuento();
		//Funcion que muestra una oferta
		void mostrar() const;
		//
		std::string tipoAString(TipoBicicleta tipo) const;
	private:
		int _idOferta;
		TipoBicicleta _tipoBici;
		int _numAlquileres;
		float _descuento;
};

#endif