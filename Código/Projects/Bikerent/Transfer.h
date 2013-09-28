#ifndef _TRANSFER_H
#define _TRANSFER_H

#include <iostream>
#include <fstream>
#include <iostream>
#include <fstream>
#include <cstring>
#include "Tienda.h"
using namespace std;

public class Transfer
{
	public:
		Transfer(){};
		~Transfer(){};
		static void cargar(Tienda &tienda,ifstream &f2);
		static void guardar(Tienda &tienda,ofstream &f1);

};


#endif