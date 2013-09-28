#ifndef _BICICLETA_H
#define _BICICLETA_H

#include <string>



class Bicicleta {

public:
	
	enum EstadoBici{Disponible,Alquilada,enTaller,estadoNulo};
	enum TipoBici{Montanya,Carretera,Paseo,tipoNulo};
	enum TamanyoBici{Pequenya,Mediana,Grande,tamanyoNulo};

	Bicicleta(){};
	~Bicicleta(){};
	
	void 	muestra() const;
	Bicicleta lee();
	std::string estadoAString(EstadoBici estado) const;
	std::string tamanyoAString(TamanyoBici tam) const;
	std::string tipoAString(TipoBici tipo) const;
	EstadoBici stringAEstado(std::string estado);
	TamanyoBici stringATamanyo(std::string tam);
	TipoBici stringATipo(std::string tipo);
	//Mutadores
	void setIdBicicleta(int id);
	void setTamanyo(TamanyoBici tam);
	void setTipo(TipoBici tipo);
	void setEstado(EstadoBici estado);
	void setPrecioPorDia(float precio);

	//Accedentes
	int getIdBicicleta() const;
	TamanyoBici getTamanyo() const;
	TipoBici getTipo() const;
	EstadoBici getEstado() const;
	float getPrecio() const;

	std::string escribeEstado() const;

private:

	int _id_bicicleta;
	TamanyoBici _tamanyo;
	TipoBici _tipo;
	EstadoBici _estado;
	float _precio_por_dia;
	
};




#endif