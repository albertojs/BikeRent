#include "ListaAlquileres.h"
///////////////////////////////////////////////////
bool ListaAlquileres::borraElem(int pos){
	if ((pos >= 0) && (pos < _numAlquileres)){
		while (pos < _numAlquileres - 1) {
          _alquileres[pos] = _alquileres[pos+1];
          pos++;
		}
		_numAlquileres--;
		return true;
	}
	else
		return false;
}
///////////////////////////////////////////////////
Alquiler ListaAlquileres::dameElem(int i) const{
	Alquiler alquiler;
	if ((i >= 0) && (i < _numAlquileres))
		alquiler = _alquileres[i];
	return alquiler;
}
///////////////////////////////////////////////////
ListaAlquileres::ListaAlquileres(){
	_numAlquileres = 0;
}
///////////////////////////////////////////////////
int ListaAlquileres::numElems() const{
	return _numAlquileres;
}
///////////////////////////////////////////////////
bool ListaAlquileres::esta(const Alquiler &alquiler){
	bool encontrado=false;
	int pos = 0;
	while ((pos < _numAlquileres)&&(!encontrado))
	{
		if (alquiler.idAlquiler() == _alquileres[pos].idAlquiler())
			encontrado=true;
		else
			pos++;
	}
	return encontrado;
}
///////////////////////////////////////////////////
bool ListaAlquileres::ponElem(const Alquiler &alquiler){
	if (!esta(alquiler))
	{
		_alquileres[_numAlquileres]=alquiler;
		_numAlquileres++;
		return true;
	}
	return false;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*ListaAlquileres& ListaAlquileres::operator=(const ListaAlquileres &otra){
	for (int i=0; i==otra.numElems(); i++){
		_alquileres[i] = otra.borraElem(i);
	}
	return *this;
}*/