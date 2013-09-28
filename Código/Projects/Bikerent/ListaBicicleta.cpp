#include "ListaBicicleta.h"
#include <iostream>

using namespace std;

#include <string>


ListaBicicleta::ListaBicicleta()
{
	_numBicicletas = 0;
}

bool 	ListaBicicleta::ponElemento (const Bicicleta &bici)
{

	if (_numBicicletas < MAX_BICICLETAS )
	{
		_bicicletas[_numBicicletas] = bici; //No incremento uno porque los arrays empiezan en 0;
		_numBicicletas++;
		return true; 
	}
	else
		return false;
}
bool    ListaBicicleta::modificaElemento(int pos,const Bicicleta &bici)
{

		_bicicletas[pos]=bici;
		return true;


}
bool 	ListaBicicleta::borraElemento (int pos)
{

	if (_numBicicletas==0)
	{
		return false;
	}
	else
	{
		if(pos>=0 && pos<_numBicicletas)
		{
			for(int i=pos;i<_numBicicletas-1;i++)
			{
				_bicicletas[i]=_bicicletas[i+1];
			}
			_numBicicletas--;
			return true;
		}
		else
		{
			return false;
		} 

	}
}

int 	ListaBicicleta::numElems () const
{

	return _numBicicletas;

}

Bicicleta 	ListaBicicleta::dameElem (int i) const
{

	if(i>=0 && i<_numBicicletas)
	{
		return _bicicletas[i];
	}
	else
	{
		Bicicleta bici;
		return bici;
	}
}

void ListaBicicleta::ponNumBicicletas(const int &numBicicletas)
{
	_numBicicletas=numBicicletas;
}
