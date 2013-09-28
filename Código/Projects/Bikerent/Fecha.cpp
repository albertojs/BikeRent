#include "Fecha.h"
#include <iostream>
using namespace std;

#include <string>

Fecha::Fecha ()
{
	_dia=1;
	_mes=1;
	_anyo=1970;
}
Fecha::Fecha(int dia,int mes,int anyo)
{
	_dia=dia;
	_mes=mes;
	_anyo=anyo;
}
void 	Fecha::muestraFecha ()const
{
	cout << _dia << "/" << _mes << "/" << _anyo ;
}
Fecha 	Fecha::leerFecha ()
{
	Fecha fecha;

	cout << "Dia: " << endl;
	cin >> fecha._dia;
	cin.ignore();
	cout << "Mes: " << endl;
	cin >> fecha._mes;
	cin.ignore();
	cout << "Año: " << endl;
	cin >> fecha._anyo;
	cin.ignore();

	return fecha;

}


void Fecha::ponDia(const int &dia)
{
	_dia=dia;
}
void Fecha::ponMes(const int &mes)
{
	_mes=mes;
}
void Fecha::ponAnyo(const int &anyo)
{
	_anyo=anyo;
}
int Fecha::dameDia() const
{
	return _dia;
}
int Fecha::dameMes() const
{
	return _mes;
}
int Fecha::dameAnyo() const
{
	return _anyo;
}