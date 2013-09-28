#include "Transfer.h"

#include <iostream>
#include <fstream>
#include <iostream>
#include <fstream>
#include <cstring>
#include "Tienda.h"
using namespace std;

void Transfer::cargar(Tienda &tienda,ifstream &f2)
{
		if(System::IO::File::Exists("BykeRent.bin"))
		{
			f2.read((char *)(&tienda), sizeof(Tienda));

		}
}
void Transfer::guardar(Tienda &tienda,ofstream &f1)
{
		f1.write((char *)(&tienda), sizeof(Tienda) );
}