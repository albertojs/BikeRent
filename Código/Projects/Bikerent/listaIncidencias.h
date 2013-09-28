#ifndef _LISTAINCIDENCIAS_H
#define _LISTAINCIDENCIAS_H

#include "incidencia.h"

class ListaIncidencias{
public:
	enum {MAX_INCIDENCIAS=100};
	ListaIncidencias();
	bool ponElemento(Incidencia &incidencia);
	bool borraElemento(int pos);
	int numElems()const;
	Incidencia dameElem(int i) const;
	bool modificaElemento(int pos,const Incidencia &inci);
private:
	int _numIncidencias;
	Incidencia _incidencias[MAX_INCIDENCIAS];
};

#endif