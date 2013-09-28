#ifndef __LISTACLIENTES_H
#define __LISTACLIENTES_H

#include "Cliente.h"

class ListaClientes{
public:
	enum {MAX_CLIENTES = 100};
	ListaClientes();
	bool esta(const Cliente &cliente);
	bool ponElem(const Cliente &cliente);
	bool borraElem(int pos);
	int numElems()const;
	Cliente dameElem(int i) const;
	bool modificaElemento(int pos,const Cliente &cli);
protected:
	int _numClientes;
	Cliente _clientes[MAX_CLIENTES];
};
#endif