#ifndef _FECHA_H
#define _FECHA_H


class Fecha{

public:
 	
	Fecha ();
	Fecha (int dia,int mes,int anyo);
	void 	muestraFecha () const;
	static Fecha 	leerFecha ();


	void ponDia(const int &dia);
	void ponMes(const int &mes);
	void ponAnyo(const int &anyo);
	

	int dameDia() const;
	int dameMes() const;
	int dameAnyo() const;

protected:

	int _dia;
	int _mes;
	int _anyo;

};

#endif