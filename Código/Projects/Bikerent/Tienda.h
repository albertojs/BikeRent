#ifndef __TIENDA_H
#define __TIENDA_H
#include "ListaClientes.h"
#include "ListaBicicleta.h"
#include "ListaOfertas.h"
#include "listaIncidencias.h"

class Tienda
{
public:
	
	bool anyadeBici(const Bicicleta &nuevaBici);
	bool buscaBiciPorRegistro(int numRegistro, Bicicleta &bici);
	bool borraBici(int numRegistro);
	void muestraBicis()const;
	bool modificarBici(int numRegistro,Bicicleta &bici);
	bool anyadeCliente(const Cliente &nuevoCliente);
	bool buscaClientePorCodigo(int numCodigo, Cliente &cliente)const;
	bool borraCliente(int numCodigo);
	void muestraClientes()const;
	bool alquila (int codigoCliente, int codigoBici, std::string fAlquiler, std::string fDevolucion,Bicicleta::TipoBici tipo, float precio);
	//bool devuelve(int codigoCliente, int codigoBici);
	//bool quienTiene(int codigoBici, Cliente &s)const;
	void muestraAlquileres()const;
	void ponUltimoRegBici(const int &numLibros);
	int dameUltimoRegBici() const;
	void ponUltimoCodCliente(const int &numLibros);
	int dameUltimoCodCliente() const;
	ListaBicicleta dameBicis()const;
	ListaClientes dameClientes()const;
	ListaOfertas dameOfertas()const;
	bool anyadeOferta(const Oferta &nuevaOferta);
	void ponUltimoRegOferta(const int &numOfertas);
	int dameUltimoRegOferta() const;
	bool buscaOfertaPorRegistro(int numRegistro, Oferta &oferta)const;
	bool buscaOfertaPorTipo(Bicicleta::TipoBici b, Oferta &oferta)const;
	bool borraOferta(int numRegistro);
	bool modificarOferta(int numRegistro,Oferta &oferta);
	bool buscaClientePorDni (std::string dni, Cliente &cliente)const;
	bool buscaIncidenciaPorId(int id, Incidencia &incidencia) const;
	bool anyadeIncidencia(const Incidencia &nueva);
	bool borraIncidencia(int id);
	int dameUltimoIdIncidencia()const;
	void ponUltimoIdIncidencia(const int &ultimo);
	ListaIncidencias dameIncidencias()const;
	bool modificarCliente(int numReg,Cliente &cli);
	bool modificarIncidencia(int idInci,Incidencia & inci);
	static Tienda* Instance();
	static void DestroySingleton();

protected:
	ListaBicicleta _bicis;
	ListaClientes _clientes;
	ListaOfertas _ofertas;
	ListaIncidencias _incidencias;
	int _ultimoRegBici;
	int _ultimoCodCliente;
	int _ultimoRegOferta;
	int _ultimoIdIncidencia;
	Tienda();
private:
	static Tienda *_singleton;
	
};

#endif