#include "ListaClientes.h"
///////////////////////////////////////////////////
bool ListaClientes::borraElem(int pos){
	if ((pos >= 0) && (pos < _numClientes)){
		while (pos < _numClientes - 1) {
          _clientes[pos] = _clientes[pos+1];
          pos++;
		}
		_numClientes--;
		return true;
	}
	else
		return false;
}
///////////////////////////////////////////////////
Cliente ListaClientes::dameElem(int i) const{
	Cliente cliente;
	if ((i >= 0) && (i < _numClientes))
		cliente = _clientes[i];
	return cliente;
}
///////////////////////////////////////////////////
ListaClientes::ListaClientes(){
	_numClientes = 0;
}
///////////////////////////////////////////////////
int ListaClientes::numElems() const{
	return _numClientes;
}
///////////////////////////////////////////////////
bool ListaClientes::esta(const Cliente &cliente){
	bool encontrado=false;
	int pos = 0;
	while ((pos < _numClientes)&&(!encontrado))
	{
		if (cliente.idCliente() == _clientes[pos].idCliente())
			encontrado=true;
		else
			pos++;
	}
	return encontrado;
}
///////////////////////////////////////////////////
bool ListaClientes::ponElem(const Cliente &cliente){
	if (!esta(cliente))
	{
		_clientes[_numClientes]=cliente;
		_numClientes++;
		return true;
	}
	return false;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
bool    ListaClientes::modificaElemento(int pos,const Cliente &cli)
{

		_clientes[pos]=cli;
		return true;


}
