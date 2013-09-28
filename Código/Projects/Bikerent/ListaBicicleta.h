#ifndef _LISTABICICLETA_H
#define _LISTABICICLETA_H

#include "Bicicleta.h"

class ListaBicicleta {

public:

	enum {MAX_BICICLETAS = 50};
	ListaBicicleta();
	bool 	ponElemento (const Bicicleta &bici);
	bool    modificaElemento(int pos,const Bicicleta &bici);
	bool 	borraElemento (int pos);
	int 	numElems () const;
	Bicicleta 	dameElem (int i) const;

	void ponNumBicicletas(const int &numBicicletas);
	int dameNumBicicletas() const;

protected:

	int _numBicicletas;
	Bicicleta _bicicletas[MAX_BICICLETAS];

};


#endif