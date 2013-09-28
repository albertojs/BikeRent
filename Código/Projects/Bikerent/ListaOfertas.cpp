#include "ListaOfertas.h"
///////////////////////////////////////////////////
bool ListaOfertas::borraElemento (int pos) {
	if ((pos >= 0) && (pos < _numOfertas)) {
		while (pos < _numOfertas - 1) {
          _ofertas[pos] = _ofertas[pos+1];
          pos++;
		}
		_numOfertas--;
		return true;
	}
	else
		return false;
}
///////////////////////////////////////////////////
Oferta ListaOfertas::dameElem (int i) const {
	Oferta o;
	if ((i >= 0) && (i < _numOfertas))
		o = _ofertas[i];		
	return o;
}
///////////////////////////////////////////////////
ListaOfertas::ListaOfertas () {
	_numOfertas = 0;
}
///////////////////////////////////////////////////
int ListaOfertas::numElems () const {
	return _numOfertas;
}
///////////////////////////////////////////////////
bool ListaOfertas::modificaElemento(int pos,const Oferta &oferta)
{
	_ofertas[pos]=oferta;
	return true;
}
///////////////////////////////////////////////////
bool ListaOfertas::ponElemento(const Oferta &oferta) {
	bool puesto = false;
	if (_numOfertas < MAX_OFERTAS)
	{
		int pos = 0;
		bool encontrado=false;
		while ((pos < _numOfertas)&&(!encontrado))
		{
			if (oferta.idOferta() < _ofertas[pos].idOferta())
				encontrado=true;
			else
				pos++;
		}
		if (encontrado)
		{
			for (int i=_numOfertas; i>pos;i--)
				_ofertas[i]=_ofertas[i-1];
			_ofertas[pos]=oferta;
			_numOfertas++;
			puesto = true;
		}
		else if (pos==_numOfertas)
		{
			_ofertas[pos] = oferta;
			_numOfertas++;
			puesto = true;
		}
	}
	return puesto;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////