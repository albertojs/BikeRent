#include "listaIncidencias.h"

///////////////////////////////////////////////////
bool ListaIncidencias::borraElemento (int pos) {
	if ((pos >= 0) && (pos < _numIncidencias)) {
		while (pos < _numIncidencias - 1) {
          _incidencias[pos] = _incidencias[pos+1];
          pos++;
		}
		_numIncidencias--;
		return true;
	}
	else
		return false;
}
///////////////////////////////////////////////////

bool    ListaIncidencias::modificaElemento(int pos,const Incidencia &inci)
{
		_incidencias[pos]=inci;
		return true;
}

Incidencia ListaIncidencias::dameElem (int i) const {
	if ((i >= 0) && (i < _numIncidencias))
		return _incidencias[i];
	else
	{
		Incidencia i;
		return i;
	}
}
///////////////////////////////////////////////////
ListaIncidencias::ListaIncidencias () {
	_numIncidencias = 0;
}
///////////////////////////////////////////////////
int ListaIncidencias::numElems () const {
	return _numIncidencias;
}
///////////////////////////////////////////////////
bool ListaIncidencias::ponElemento( Incidencia &incidencia) {
	bool puesto = false;
	if (_numIncidencias < MAX_INCIDENCIAS)
	{
		int pos = 0;
		bool encontrado=false;
		while ((pos < _numIncidencias)&&(!encontrado))
		{
			if (incidencia.idIncidencia() < _incidencias[pos].idIncidencia())
				encontrado=true;
			else
				pos++;
		}
		if (encontrado)
		{
			for (int i=_numIncidencias; i>pos;i--)
				_incidencias[i]=_incidencias[i-1];
			_incidencias[pos]=incidencia;
			_numIncidencias++;
			puesto = true;
		}
		else if (pos==_numIncidencias)
		{
			_incidencias[pos] = incidencia;
			_numIncidencias++;
			puesto = true;
		}
	}
	return puesto;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////