#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include "Tienda.h"
#include "ListaClientes.h"
#include <string>
using namespace std;


bool anyadirBici(Tienda &tienda,Bicicleta bici, string &error){
	if(tienda.dameBicis().numElems()<ListaBicicleta::MAX_BICICLETAS)
	{
		if(tienda.anyadeBici(bici)){
			error = "La bicicleta se ha guardado correctamente";	
			return true;
		}
		else{
			error =  "No se pudo guardar la bicicleta";
			return false;
		}
	}
	else{
		error = "No se pueden guardar más bicicletas";
		return false;
	}
}

bool borrarBici(Tienda &tienda,int numReg, string &error){
	//Se mira si hay bicis para borrar
	if (tienda.dameBicis().numElems() > 0){
		do
		{
			if ((numReg < 0))
				error = "Registro NO valido. Intentelo de nuevo...\n";
		}while ((numReg < 0)||(numReg >= tienda.dameUltimoRegBici()));
		Bicicleta bici;
		//Variable que guarda temporalmente la bici a borrar
		//Si esta la bici en la tienda,y no esta prestada o en taller se borra
		if (tienda.buscaBiciPorRegistro(numReg, bici))
		{
			if ((bici.getEstado() != Bicicleta::Alquilada) && (bici.getEstado() != Bicicleta::enTaller))
				if(!tienda.borraBici(numReg)){
					error = "La bicicleta no se borro";
					return false;
				}
				else
					return true;
			else{
				error = "No se puede eliminar una bicicleta alquilada o en taller";
				return false;
			}
		}
		else{
			error = "La bici no existe";
			return false;
		}
	}
	else{
		error = "Lista vacia";
		return false;
	}
}

bool modificarBici(Tienda &tienda,int numReg,Bicicleta bici,string &error){
	return tienda.modificarBici(numReg,bici);
}

bool modificarIncidencia(Tienda &tienda,int idInci,Incidencia &inci,string &error)
{
	return tienda.modificarIncidencia(idInci,inci);
}

ListaBicicleta consultarBicis(Tienda tienda,Bicicleta::TamanyoBici tam, Bicicleta::TipoBici tipo, Bicicleta::EstadoBici estado){
	ListaBicicleta bicis;
	Bicicleta aux;
	bool anyadir=true;
	for (int i=0; i< tienda.dameBicis().numElems(); i++){
		anyadir=true;
		aux = tienda.dameBicis().dameElem(i);
		if (tam != Bicicleta::tamanyoNulo)
			if (aux.getTamanyo()!=tam)
				anyadir=false;
		if ((tipo != Bicicleta::tipoNulo)&&(anyadir))
			if (aux.getTipo()!=tipo)
				anyadir=false;
		if ((estado != Bicicleta::estadoNulo)&&(anyadir))
			if (aux.getEstado()!=estado)
				anyadir=false;
		if (anyadir)
			bicis.ponElemento(aux);
	}

	return bicis;
}

//IMPLEMENTARLO EN FORMS
/*void mostrarBicis(){
	//Primero miramos si hay bicis en la tienda
	if (tienda.dameBicis().numElems() > 0)
		//Luego las mostramos
		tienda.muestraBicis();
	else
		cout << "Lista vacia";
}*/

/*void mostrarUnaBici(int numReg, string &error){
	//Primero miramos si hay bicis en la tienda
	if (tienda.dameBicis().numElems() > 0){
		Bicicleta bici;
		//Variable que guarda temporalmente la bici a visualizar
		if (tienda.buscaBiciPorRegistro(numReg,bici))
			//Si el libro esta en la biblioteca lo mostramos
			//bici.muestra();
		else
			error = "La bici no se encuentra en la tienda";
	}
	else
		error = "Lista vacia";
}*/

bool anyadirCliente(Tienda &tienda,Cliente cliente, string &error){
	if(tienda.dameClientes().numElems()<ListaClientes::MAX_CLIENTES)
	{
		if(tienda.anyadeCliente(cliente)){
			error = "Se añadió el cliente";	
			return true;
		}
		else{
			error =  "No se pudo añadir el cliente";
			return false;
		}
	}
	else{
		error = "No se pueden añadir más clientes, la lista esta llena";
		return false;
	}
	
}


bool borrarCliente(Tienda &tienda,int numReg, string &error){
	//Se mira si hay clientes para borrar
	if (tienda.dameClientes().numElems() > 0){
		
		Cliente cliente;
		//Variable temporal que guarda el cliente a borrar
		if (tienda.buscaClientePorCodigo(numReg, cliente))
		//Si encuentra el cliente en la tienda
		{
			if (cliente.alquileres().numElems() == 0)
				//Y no tiene alquileres pendientes
				if(tienda.borraCliente(numReg))
					return true;
				else{
					error = "El cliente NO pudo ser borrado";
					return false;
				}
			else{
				error = "El cliente tiene algun alquiler pendiente y no puede ser eliminado";
				return false;
			}
		}
		else{
			error = "El cliente NO se encuentra en la tienda";
			return false;
		}
	}
	else{
		error = "Lista vacia";
		return false;
	}
}
ListaClientes consultarClientes(Tienda tienda,int filtro,string texto)
{
	ListaClientes lista;
	Cliente cli;
	if(filtro==1)
	{

		for(int i=0; i<tienda.dameClientes().numElems() ; i++)
		{
			
			cli=tienda.dameClientes().dameElem(i);
			if(strcmp(cli.nombre().c_str(),texto.c_str()))
			{
				lista.ponElem(cli);
			}
		}
	}
	else if(filtro==2)
	{
		for(int i=0;i<tienda.dameClientes().numElems();i++)
		{
			Cliente cli;
			cli=tienda.dameClientes().dameElem(i);
			if(strcmp(cli.apellidos().c_str(),texto.c_str()))
			{
				lista.ponElem(cli);
			}
		}
	}

	return lista;

}

bool modificarCliente(Tienda &tienda,int numReg,Cliente &cli,string &error)
{
	return tienda.modificarCliente(numReg,cli);
}

//IMPLEMENTAR EN FORMS
/*void mostrarSocios(){
	if (tienda.dameClientes().numElems() > 0)
		//Los mostramos
		tienda.muestraClientes();
	else
		cout << "Lista vacia";
}*/


/*void mostrarUnSocio(int numReg, string &error){
	//Miramos si hay clientes en la lista
	if (tienda.dameClientes().numElems() > 0){
		do
		{
			if ((numReg <= 100)||(numReg >= tienda.dameUltimoCodCliente()))
				error = "Codigo de cliente NO valido. Intentelo de nuevo..\n";
		}while ((numReg <= 100)||(numReg >= tienda.dameUltimoCodCliente()));
		Cliente cliente;
		//Variable que guarda temporalmente el cliente para mostrar
		if (tienda.buscaClientePorCodigo(numReg,cliente))
			//Si esta en la lista lo muestra
			cliente.mostrar(tienda.dameBicis());
		else
			error = "El cliente no pertenece a la tienda";
	}
	else
		error = "Lista vacia";
}*/

/*ListaBicicleta consultarBicis(TamanyoBici tam, Bicicleta::TipoBici tipo, Bicicleta::EstadoBici estado){
	ListaBicicleta bicis;
	Bicicleta aux;
	bool anyadir=true;
	for (int i=0; i< tienda.dameBicis().numElems()-1; i++){
		aux = tienda.dameBicis().dameElem(i);
		if (tam != Bicicleta::TamanyoBici::Nulo)
			if (aux.getTamanyo()!=tam)
				anyadir=false;
		if ((tipo != Bicicleta::TipoBici::Nulo)&&(anyadir))
			if (aux.getTipo()!=tipo)
				anyadir=false;
		if ((estado != Bicicleta::EstadoBici::Nulo)&&(anyadir))
			if (aux.getEstado()!=estado)
				anyadir=false;
		if (anyadir)
			bicis.ponElemento(aux);
	}
}*/

bool anyadirOferta(Tienda &tienda,Oferta oferta, string &error){
	if(tienda.dameOfertas().numElems()<ListaOfertas::MAX_OFERTAS)
	{
		if(tienda.anyadeOferta(oferta)){
			error = "La oferta se ha guardado correctamente";	
			return true;
		}
		else{
			error =  "No se pudo guardar la oferta";
			return false;
		}
	}
	else{
		error = "No se pueden guardar más ofertas";
		return false;
	}
}

bool borrarOferta(Tienda &tienda,int numReg, string &error){
	//Se mira si hay ofertas para borrar
	if (tienda.dameOfertas().numElems() > 0){
		do
		{
			if ((numReg < 0)||(numReg >= tienda.dameUltimoRegOferta()))
				error = "Registro NO valido. Intentelo de nuevo...\n";
		}while ((numReg < 0)||(numReg >= tienda.dameUltimoRegOferta()));
		Oferta of;
		//Variable que guarda temporalmente la oferta a borrar
		//Si esta la oferta en la tienda se borra
		if (tienda.buscaOfertaPorRegistro(numReg, of))
		{
			if(!tienda.borraOferta(numReg)){
				error = "La oferta no se borro";
				return false;
			}
			else
				return true;
		}
		else{
			error = "\nLa oferta no existe";
			return false;
		}
	}
	else{
		error = "Lista vacia";
		return false;
	}
}

/*void mostrarOfertas(){
	//Primero miramos si hay ofertas en la tienda
	if (tienda.dameOfertas().numElems() > 0)
		//Luego las mostramos
		tienda.muestraOfertas();
	else
		cout << "Lista vacia";
}*/

/*void mostrarUnaOferta(int numReg, string &error){
	//Primero miramos si hay ofertas en la tienda
	if (tienda.dameOfertas().numElems() > 0){
		Oferta of;
		//Variable que guarda temporalmente la oferta a visualizar
		if (tienda.buscaOfertaPorRegistro(numReg,of))
			//Si la oferta esta en la tienda lo mostramos
			of.muestra();
		else
			error = "La oferta no se encuentra en la tienda";
	}
	else
		error = "Lista vacia";
}*/

/*bool anyadirIncidencia(Incidencia in, string &error){
	if(tienda.dameIncidencias().numElems()<ListaIncidencias::MAX_INCIDENCIA)
	{
		if(tienda.anyadeIncidencia(in)){
			error = "Se anyadio la incidencia";	
			return true;
		}
		else{
			error =  "NO se pudo anyadir la incidencia";
			return false;
		}
	}
	else{
		error = "Lista llena";
		return false;
	}
}*/

bool borrarIncidencia(Tienda &tienda, int numReg, string &error){
	//Se mira si hay incidencias para borrar
	if (tienda.dameIncidencias().numElems() > 0){
		do
		{
			if ((numReg < 0)||(numReg >= tienda.dameUltimoIdIncidencia()))
				error = "Registro NO valido. Intentelo de nuevo...\n";
		}while ((numReg < 0)||(numReg >= tienda.dameUltimoIdIncidencia()));
		Incidencia in;
		//Variable que guarda temporalmente la incidencia a borrar
		//Si esta la incidencia en la tienda se borra
		if (tienda.buscaIncidenciaPorId(numReg, in))
		{
			if(!tienda.borraIncidencia(numReg)){
				error = "La incidencia no se borro";
				return false;
			}
			else
				return true;
		}
		else{
			error = "\nLa incidencia no existe";
			return false;
		}
	}
	else{
		error = "Lista vacia";
		return false;
	}
}

/*void mostrarIncidencias(){
	//Primero miramos si hay incidencias en la tienda
	if (tienda.dameIncidencias().numElems() > 0)
		//Luego las mostramos
		tienda.muestraIncidencias();
	else
		cout << "Lista vacia";
}*/

/*void mostrarUnaIncidencia(int numReg, string &error){
	//Primero miramos si hay incidencias en la tienda
	if (tienda.dameIncidencias().numElems() > 0){
		Incidencia in;
		//Variable que guarda temporalmente la incidencia a visualizar
		if (tienda.buscaIncidenciaPorRegistro(numReg,in))
			//Si la incidencia esta en la tienda lo mostramos
			in.muestra();
		else
			error = "La incidencia no se encuentra en la tienda";
	}
	else
		error = "Lista vacia";
}*/
ListaOfertas consultarOfertas(Tienda tienda,Oferta::TipoBicicleta tipo){
	ListaOfertas ofertas;
	Oferta of;
	bool anyadir=true;
	for (int i=0; i< tienda.dameOfertas().numElems(); i++){
		anyadir=true;
		of = tienda.dameOfertas().dameElem(i);
		if ((tipo != Oferta::tipoNulo)&&(anyadir))
			if (of.tipoBici()!=tipo)
				anyadir=false;
		if (anyadir)
			ofertas.ponElemento(of);
	}

	return ofertas;
}
///////////////////////////////////////////////////////////////////////////////
bool modificarOferta(Tienda &tienda,int numReg,Oferta Oferta,string &error){
	return tienda.modificarOferta(numReg,Oferta);
}
///////////////////////////////////////////////////////////////////////////////
bool anyadirIncidencia(Tienda &tienda,Incidencia inci,string &error){
	if(tienda.dameIncidencias().numElems()<ListaIncidencias::MAX_INCIDENCIAS)
	{
		if(tienda.anyadeIncidencia(inci)){
			error = "La incidencia se ha guardado correctamente";	
			return true;
		}
		else{
			error =  "No se pudo guardar la incidencia";
			return false;
		}
	}
	else{
		error = "No se pueden guardar más incidencias";
		return false;
	}
}