#ifndef __LISTAOFERTAS_H
#define __LISTAOFERTAS_H

#include "Oferta.h"

class ListaOfertas{
public:
	enum {MAX_OFERTAS = 3};
	ListaOfertas();
	bool ponElemento(const Oferta &oferta);
	bool modificaElemento(int pos,const Oferta &oferta);
	bool borraElemento(int pos);
	int numElems()const;
	Oferta dameElem(int i) const;
protected:
	int _numOfertas;
	Oferta _ofertas[MAX_OFERTAS];
};
#endif