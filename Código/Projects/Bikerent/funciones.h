#ifndef __FUNCIONES_H
#define __FUNCIONES_H

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include "Tienda.h"
#include <string>
using namespace std;

bool anyadirBici(Tienda &tienda,Bicicleta bici, string &error);
bool anyadirOferta(Tienda &tienda,Oferta oferta, string &error);
bool borrarBici(Tienda &tienda,int numReg, string &error);
bool modificarBici(Tienda &tienda,int numReg,Bicicleta bici,string &error);
ListaBicicleta consultarBicis(Tienda tienda,Bicicleta::TamanyoBici tam, Bicicleta::TipoBici tipo, Bicicleta::EstadoBici estado);
bool borrarOferta(Tienda &tienda,int numReg, string &error);
ListaOfertas consultarOfertas(Tienda tienda,Oferta::TipoBicicleta tipo);
bool modificarOferta(Tienda &tienda,int numReg,Oferta oferta,string &error);
bool anyadirCliente(Tienda &tienda,Cliente cliente, string &error);
bool borrarCliente(Tienda &tienda,int numReg, string &error);
ListaClientes consultarClientes(Tienda tienda,int filtro,string texto);
bool anyadirIncidencia(Tienda &tienda,Incidencia inci,string &error);
bool borrarIncidencia(Tienda &tienda, int numReg, string &error);
bool modificarCliente(Tienda &tienda,int numReg,Cliente &cli,string &error);
bool modificarIncidencia(Tienda &tienda,int idInci,Incidencia &inci,string &error);

#endif