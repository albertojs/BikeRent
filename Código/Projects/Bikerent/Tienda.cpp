#include <iostream>
#include "Tienda.h"
using namespace std;
////////////////////////////////////////////////////////////
Tienda* Tienda::_singleton = 0;
////////////////////////////////////////////////////////////
Tienda* Tienda::Instance ()
{
  if (_singleton == 0)  // ¿Es la primera llamada?
  {
    _singleton = new Tienda(); // Creamos la instancia
  }
  return _singleton; // Retornamos la dirección de la instancia
}
////////////////////////////////////////////////////////////
void Tienda::DestroySingleton(){
	if(_singleton != NULL) 
	{
		delete _singleton;
	}
}
////////////////////////////////////////////////////////////
ListaIncidencias Tienda::dameIncidencias()const{
	return _incidencias;
}
////////////////////////////////////////////////////////////
ListaOfertas Tienda::dameOfertas()const{
	return _ofertas;
}
////////////////////////////////////////////////////////////
ListaBicicleta Tienda::dameBicis()const{
	return _bicis;
}
////////////////////////////////////////////////////////////
ListaClientes Tienda::dameClientes()const{
	return _clientes;
}
///////////////////////////////////////////////////////////
void Tienda::ponUltimoRegBici(const int &ultimoRegBici){
	_ultimoRegBici = ultimoRegBici;
}
////////////////////////////////////////////////////////////
int Tienda::dameUltimoRegBici() const{
	return _ultimoRegBici;
}
////////////////////////////////////////////////////////////
void Tienda::ponUltimoCodCliente(const int &ultimoCodCliente){
	_ultimoCodCliente = ultimoCodCliente;
}
////////////////////////////////////////////////////////////
int Tienda::dameUltimoCodCliente() const{
	return _ultimoCodCliente;
}
////////////////////////////////////////////////////////////
void Tienda::ponUltimoRegOferta(const int &ultimoRegOferta){
	_ultimoRegOferta = ultimoRegOferta;
}
////////////////////////////////////////////////////////////
int Tienda::dameUltimoRegOferta() const{
	return _ultimoRegOferta;
}
///////////////////////////////////////////////////////////
void Tienda::ponUltimoIdIncidencia(const int &ultimo){
	_ultimoIdIncidencia = ultimo;
}
////////////////////////////////////////////////////////////
int Tienda::dameUltimoIdIncidencia() const{
	return _ultimoIdIncidencia;
}
///////////////////////////////////////////////////////////
Tienda::Tienda()
{
	ListaClientes::ListaClientes();
	ListaBicicleta::ListaBicicleta();
	ListaOfertas::ListaOfertas();
	_ultimoRegBici = 1;
	_ultimoCodCliente = 1;
	_ultimoRegOferta = 1;
	_ultimoIdIncidencia = 1;
}
///////////////////////////////////////////////////////////
int buscarCliente (ListaClientes listaClientes, int codCliente)

{
	int i=0;
	Cliente cliente;
	bool encontrado = false;
	while ((i <= listaClientes.numElems()) && (!encontrado))
	{
		cliente=listaClientes.dameElem(i);
		if (codCliente == cliente.idCliente())
			encontrado=true;
		else
			i++;
	}
	return i;
}
///////////////////////////////////////////////////////////
int buscarBici (ListaBicicleta listaBicis, int codBici)

{
	int i=0;
	Bicicleta bici;
	bool encontrado = false;
	while ((i <= listaBicis.numElems()) && (!encontrado))
	{
		bici=listaBicis.dameElem(i);
		if (codBici == bici.getIdBicicleta())
			encontrado=true;
		else
			i++;
	}
	return i;
}
////////////////////////////////////////////////////////////////////////
bool 	Tienda::anyadeBici (const Bicicleta &nuevaBici)
{			
	
	Bicicleta aux;
	//Hacemos una copia del nuevo libro para poder cambiar el registro
	aux = nuevaBici;
	aux.setIdBicicleta(_ultimoRegBici);
	if (nuevaBici.getEstado() == Bicicleta::Alquilada)
		aux.setEstado(Bicicleta::Disponible);
	bool anyadido = _bicis.ponElemento(aux);
	if (anyadido) 
		_ultimoRegBici++;
	return anyadido;
}
///////////////////////////////////////////////////////////
bool 	Tienda::buscaBiciPorRegistro (int numRegistro, Bicicleta &bici)
{
	
	bool encontrado = false;
	int i = 0;
	Bicicleta aux;
	while ((i<_bicis.numElems())&&(!encontrado)){
		aux = _bicis.dameElem(i);
		if (aux.getIdBicicleta() == numRegistro){
			bici = aux;
			encontrado = true;
		}
		else
			i++;
	}
	return encontrado;
}
///////////////////////////////////////////////////////////
bool Tienda::modificarIncidencia(int idInci,Incidencia & inci){
	int ini, fin, medio;
	bool borrado=false, encontrado=false;
	ini=0;
	fin=_incidencias.numElems()-1;
	Incidencia aux;
	while ((ini<=fin)&&(!encontrado))
	{
		medio=(fin+ini)/2;
		aux=_incidencias.dameElem(medio);
		if (aux.idIncidencia() == idInci)
		{
			encontrado=true;
		}
		else if (aux.idIncidencia() < idInci)
			ini=medio+1;
		else if (aux.idIncidencia() > idInci)
			fin=medio-1;
	}

	return _incidencias.modificaElemento(medio,inci);
}
bool 	Tienda::borraBici (int numRegistro)
{
	
	int ini, fin, medio;
	bool borrado=false, encontrado=false;
	ini=0;
	fin=_bicis.numElems()-1;
	Bicicleta bici;
	while ((ini<=fin)&&(!encontrado))
	{
		medio=(fin+ini)/2;
		bici=_bicis.dameElem(medio);
		if (bici.getIdBicicleta() == numRegistro)
		{
			encontrado=true;
			if (bici.getEstado()!=Bicicleta::Alquilada)
				if (_bicis.borraElemento(medio))
					borrado=true;
		}
		else if (_bicis.dameElem(medio).getIdBicicleta() < numRegistro)
			ini=medio+1;
		else if (_bicis.dameElem(medio).getIdBicicleta() > numRegistro)
			fin=medio-1;
	}
	return borrado;
}
bool Tienda::modificarBici(int numRegistro,Bicicleta &bici)
{
	int ini, fin, medio;
	bool borrado=false, encontrado=false;
	ini=0;
	fin=_bicis.numElems()-1;
	Bicicleta aux;
	while ((ini<=fin)&&(!encontrado))
	{
		medio=(fin+ini)/2;
		aux=_bicis.dameElem(medio);
		if (aux.getIdBicicleta() == numRegistro)
		{
			encontrado=true;
		}
		else if (aux.getIdBicicleta() < numRegistro)
			ini=medio+1;
		else if (aux.getIdBicicleta() > numRegistro)
			fin=medio-1;
	}

	return _bicis.modificaElemento(medio,bici);


}
///////////////////////////////////////////////////////////
/*void 	Tienda::muestraBicis()const
{
/********************************************************************
* OBJETIVO: Recibe la biblioteca y muestra todos los libros
* DATOS ENTRADA/SALIDA: la biblioteca
*********************************************************************/
	/*for (int i = 0; i < (_bicis.numElems()); i++)
	{
		_bicis.dameElem(i).muestraBicicleta();
		cout << "\n";
	}
}*/
///////////////////////////////////////////////////////////
bool Tienda::modificarCliente(int numRegistro,Cliente &cli)
{
	int ini, fin, medio;
	bool borrado=false, encontrado=false;
	ini=0;
	fin=_clientes.numElems()-1;
	Cliente aux;
	while ((ini<=fin)&&(!encontrado))
	{
		medio=(fin+ini)/2;
		aux=_clientes.dameElem(medio);
		if (aux.idCliente() == numRegistro)
		{
			encontrado=true;
		}
		else if (aux.idCliente() < numRegistro)
			ini=medio+1;
		else if (aux.idCliente() > numRegistro)
			fin=medio-1;
	}

	return _clientes.modificaElemento(medio,cli);


}

///////////////////////////////////////////////////////////
bool 	Tienda::anyadeCliente (const Cliente &nuevoCliente)
{
	
	Cliente aux;
	//Variable auxiliar para guarda el nuevo socio
	aux = nuevoCliente;
	//Le asignamos el codigo de socio siguiente
	aux.idCliente(_ultimoCodCliente);
	//aux.idCliente(_clientes.dameElem(_clientes.numElems()-1).idCliente()+1);
	//Y lo añadimos
	bool anyadido = _clientes.ponElem(aux);
	if (anyadido) 
		_ultimoCodCliente++;
	return anyadido;
}
///////////////////////////////////////////////////////////
bool 	Tienda::buscaClientePorCodigo (int numCodigo, Cliente &cliente)const
{

	bool encontrado = false;
	int i = 0;
	Cliente aux;
	while ((i<_clientes.numElems())&&(!encontrado)){
		aux = _clientes.dameElem(i);
		if (aux.idCliente() == numCodigo)
		{
			cliente = aux;
			encontrado = true;
		}
		else
			i++;
	}
	return encontrado;
}
///////////////////////////////////////////////////////////
bool 	Tienda::buscaClientePorDni (string dni, Cliente &cliente)const
{
	bool encontrado = false;
	int i = 0;
	Cliente aux;
	while ((i<_clientes.numElems())&&(!encontrado)){
		aux = _clientes.dameElem(i);
		if (aux.dni() == dni)
		{
			cliente = aux;
			encontrado = true;
		}
		else
			i++;
	}
	return encontrado;
}
///////////////////////////////////////////////////////////
bool 	Tienda::borraCliente(int numCodigo)
{
	int ini, fin, medio;
	bool encontrado=false;
	bool borrado = false;
	ini=0;
	fin=_clientes.numElems()-1;
	while ((ini<=fin)&&(!encontrado))
	{
		medio=(fin+ini)/2;
		if (_clientes.dameElem(medio).idCliente() == numCodigo)
		{
			encontrado=true;
			if (_clientes.dameElem(medio).alquileres().numElems()==0)
			{
				_clientes.borraElem(medio);
				borrado = true;
			}
		}
		else if (_clientes.dameElem(medio).idCliente() < numCodigo)
			ini=medio+1;
		else if (_clientes.dameElem(medio).idCliente() > numCodigo)
			fin=medio-1;
	}
	return borrado;
}
///////////////////////////////////////////////////////////
void 	Tienda::muestraClientes ()const
{
	for (int i = 0; i < _clientes.numElems(); i++)
	{
		_clientes.dameElem(i).mostrar();
		cout << "\n";
	}
}



///////////////////////////////////////////////////////////
bool Tienda::alquila (int codigoCliente, int codigoBici, string fAlquiler, string fDevolucion,Bicicleta::TipoBici tipo, float precio){

	bool prestado = false;
	Cliente cliente;
	if(buscaClientePorCodigo(codigoCliente,cliente))
	{
		Bicicleta bici;
		if (buscaBiciPorRegistro(codigoBici, bici) && bici.getEstado()==Bicicleta::Disponible)
		{
			Alquiler a;
			a.id_alquiler(cliente.dameUltimoRegistroAlquiler()+1);
			cliente.ponUltimoRegistroAlquiler(cliente.dameUltimoRegistroAlquiler()+1);
			a.id_cliente(codigoCliente);
			a.id_bici(codigoBici);
			a.fecha_alquiler(fAlquiler);
			a.fecha_devolucion(fDevolucion);
			a.tipo_bici(tipo);
			a.precio_factura(precio);
			bici.setEstado(Bicicleta::Alquilada);
			ListaAlquileres listaAlquileres = cliente.alquileres();
			if (listaAlquileres.ponElem(a))
				{
					cliente.alquileres(listaAlquileres);
					modificarBici(codigoBici,bici);
					//borraBici(codigoBici);
					//_bicis.ponElemento(bici);
					_clientes.borraElem(buscarCliente(_clientes,codigoCliente));
					_clientes.ponElem(cliente);
					prestado = true;
				}
		}
	}
	return prestado;
}
///////////////////////////////////////////////////////////
//bool 	Tienda::devuelve (int codigoCliente, int codigoBici)
//{
	/********************************************************************
* OBJETIVO: Recibe la biblioteca un codigo de socio,un registro y realiza la devolucion del prestamo que tiene esos datos
* DATOS ENTRADA/SALIDA: la biblioteca
* DATOS ENTRADA: codigo del socio y el codigo del libro
*********************************************************************/
	/*bool devuelto = false;
	Cliente cliente;
	if(buscaClientePorCodigo(codigoCliente,cliente))
	{
		if(cliente.alquileres().numElems() > 0)
		{
			Bicicleta bici;
			if (buscaBiciPorRegistro(codigoBici, bici))
			{
				bool encontrado=false;
				int pos=0;
				while ((pos <= cliente.alquileres().numElems())&&(!encontrado))
				{
					if (cliente.alquileres().dameElem(pos).id_bici()==codigoBici)
						encontrado = true;
					else
						pos++;
				}
				if (encontrado)
				{
					ListaAlquileres listaAlquileres = cliente.alquileres();
					if (listaAlquileres.borraElem(pos))
					{
						cliente.alquileres(listaAlquileres);
						Bicicleta b=_bicis.dameElem(buscarBici(_bicis,codigoBici));
						_clientes.borraElem(buscarCliente(_clientes,codigoCliente));
						_clientes.ponElem(cliente);
						_bicis.borraElemento(buscarBici (_bicis, codigoBici));
						b.setEstado(Bicicleta::Disponible);
						_bicis.ponElemento(b);
						devuelto = true;
					}
				}
			}
		}
	}
	return devuelto;
}*/
///////////////////////////////////////////////////////////
//bool Tienda::quienTiene (int codigoBici, Cliente &c)const
//{
	/********************************************************************
* OBJETIVO: Recibe la biblioteca un codigo de libro y te devuelve el socio que tiene ese libro
* DATOS ENTRADA/SALIDA: la biblioteca y el socio
* DATOS ENTRADA: el codigo del libro
*********************************************************************/
	/*bool encontrado = false;
	int i = 0;
	Cliente aux;
	while ((i<_clientes.numElems())&&(!encontrado)){
		int j = 0;
		aux = _clientes.dameElem(i);
		while ((j < aux.alquileres().numElems()) && (!encontrado))
		{
			if (aux.alquileres().dameElem(j).id_bici() == codigoBici)
			{
				c = aux;
				encontrado = true;
			}
			else
				j++;
		}
		i++;
	}
	return encontrado;
}*/
///////////////////////////////////////////////////////////
/*void 	Tienda::muestraAlquileres() const
{
	/********************************************************************
* OBJETIVO: Recibe la biblioteca y muestra todos lo prestamos hasta el momento
* DATOS ENTRADA/SALIDA: la biblioteca
*********************************************************************/
	/*int contador=0;
	for (int i = 0; i < _bicis.numElems(); i++)
	{
		Bicicleta b;
		b = _bicis.dameElem(i);
		Cliente c;
		if (quienTiene(b.getIdBicicleta(),c))
		{
			b.muestraBicicleta();
			cout << " => Prestado a ";
			cout << c.nombre() << " " << c.apellidos();
			contador ++;
			cout<<"\n";
		}
	}
	if (contador == 0)
			cout << "No hay prestamos";
}*/
////////////////////////////////////////////////////////////////////////
bool 	Tienda::anyadeOferta (const Oferta &nuevaOferta)
{			
	Oferta aux;
	aux = nuevaOferta;
	aux.idOferta(_ultimoRegOferta);
	bool anyadido = _ofertas.ponElemento(aux);
	if (anyadido) 
		_ultimoRegOferta++;
	return anyadido;
}
///////////////////////////////////////////////////////////
bool Tienda::buscaOfertaPorRegistro(int numRegistro, Oferta &oferta)const
{
	bool encontrado = false;
	int i = 0;
	Oferta aux;
	while ((i<_ofertas.numElems())&&(!encontrado)){
		aux = _ofertas.dameElem(i);
		if (aux.idOferta() == numRegistro){
			oferta = aux;
			encontrado = true;
		}
		else
			i++;
	}
	return encontrado;
}
///////////////////////////////////////////////////////////
bool 	Tienda::borraOferta (int numRegistro)
{
	int ini, fin, medio;
	bool borrado=false, encontrado=false;
	ini=0;
	fin=_ofertas.numElems()-1;
	Oferta of;
	while ((ini<=fin)&&(!encontrado))
	{
		medio=(fin+ini)/2;
		of=_ofertas.dameElem(medio);
		if (of.idOferta() == numRegistro)
		{
			encontrado=true;
			if (_ofertas.borraElemento(medio))
				borrado=true;
		}
		else if (_ofertas.dameElem(medio).idOferta() < numRegistro)
			ini=medio+1;
		else if (_ofertas.dameElem(medio).idOferta() > numRegistro)
			fin=medio-1;
	}
	return borrado;
}
///////////////////////////////////////////////////////////
bool Tienda::buscaOfertaPorTipo(Bicicleta::TipoBici b, Oferta &oferta)const
{
	bool encontrado = false;
	int i = 0;
	Oferta aux;
	while ((i<_ofertas.numElems())&&(!encontrado)){
		aux = _ofertas.dameElem(i);
		if (aux.tipoBici() == b){
			oferta = aux;
			encontrado = true;
		}
		else
			i++;
	}
	return encontrado;
}
///////////////////////////////////////////////////////////
bool Tienda::modificarOferta(int numRegistro,Oferta &oferta)
{
	int ini, fin, medio;
	bool borrado=false, encontrado=false;
	ini=0;
	fin=_ofertas.numElems()-1;
	Oferta aux;
	while ((ini<=fin)&&(!encontrado))
	{
		medio=(fin+ini)/2;
		aux=_ofertas.dameElem(medio);
		if (aux.idOferta() == numRegistro)
		{
			encontrado=true;
		}
		else if (aux.idOferta() < numRegistro)
			ini=medio+1;
		else if (aux.idOferta() > numRegistro)
			fin=medio-1;
	}

	return _ofertas.modificaElemento(medio,oferta);
}
///////////////////////////////////////////////////////////////
bool Tienda::buscaIncidenciaPorId(int id, Incidencia &incidencia) const {
	bool encontrado = false;
	int i = 0;
	while ((i<_incidencias.numElems())&&(!encontrado)){
		if (_incidencias.dameElem(i).idIncidencia() == id){
			incidencia = _incidencias.dameElem(i);
			encontrado = true;
		}
		else
			i++;
	}
	return encontrado;
}

//////////////////////////////////////////////////////////////
bool 	Tienda::anyadeIncidencia (const Incidencia &nueva)
{			
	Incidencia aux = nueva;
	aux.idIncidencia(_ultimoIdIncidencia);
	bool anyadido = _incidencias.ponElemento(aux);
	if (anyadido) 
		_ultimoIdIncidencia++;
	return anyadido;
}
///////////////////////////////////////////////////////////
bool Tienda::borraIncidencia(int id){
	int ini, fin, medio;
	bool borrado=false, encontrado=false;
	ini=0;
	fin=_incidencias.numElems()-1;
	Incidencia incidencia;
	while ((ini<=fin)&&(!encontrado))
	{
		medio=(fin+ini)/2;
		incidencia=_incidencias.dameElem(medio);
		if (incidencia.idIncidencia() == id)
		{
			encontrado=true;
			if (_incidencias.borraElemento(medio))
				borrado=true;
		}
		else if (_incidencias.dameElem(medio).idIncidencia() < id)
			ini=medio+1;
		else if (_incidencias.dameElem(medio).idIncidencia() > id)
			fin=medio-1;
	}
	return borrado;
}

