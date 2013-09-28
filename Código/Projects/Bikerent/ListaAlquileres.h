#ifndef __LISTAALQUILERES_H
#define __LISTAALQUILERES_H

#include "Alquiler.h"

class ListaAlquileres{
public:
	enum {MAX_ALQUILERES = 100};
	ListaAlquileres();
	bool esta(const Alquiler &alquiler);
	bool ponElem(const Alquiler &alquiler);
	bool borraElem(int pos);
	int numElems()const;
	Alquiler dameElem(int i) const;
protected:
	int _numAlquileres;
	Alquiler _alquileres[MAX_ALQUILERES];
};

#endif