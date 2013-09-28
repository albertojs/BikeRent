#ifndef _DAO_H
#define _DAO_H

#include <iostream>
#include <fstream>
#include <iostream>
#include <fstream>
#include <cstring>
#include "Tienda.h"

public class Dao
{
	public:
		Dao(){};
		~Dao(){};
		static void cargar(Tienda &tienda);
		static void guardar(Tienda &tienda);

};


#endif