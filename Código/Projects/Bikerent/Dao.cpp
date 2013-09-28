#include "Dao.h"
#include <iostream>
#include <fstream>
#include <iostream>
#include <fstream>
#include <cstring>
#include "Tienda.h"
#include "Transfer.h"

using namespace std;

void Dao::cargar(Tienda &tienda)
{
		if(System::IO::File::Exists("BykeRent.bin"))
		{
			ifstream f2;
			f2.open("BykeRent.bin",ifstream::binary);
			Transfer::cargar(tienda,f2);
			//f2.read((char *)(&tienda), sizeof(Tienda));
			f2.close();
		}
}
void Dao::guardar(Tienda &tienda)
{
		ofstream f1;
		f1.open("BykeRent.bin",ofstream::binary);
		Transfer::guardar(tienda,f1);
		//f1.write((char *)(&tienda), sizeof(Tienda) );
		f1.close();

}