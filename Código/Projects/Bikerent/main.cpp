#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include "Tienda.h"
#include <string>
using namespace std;
/*****************************************************
  * DESCRIPCION: Programa que permite realizar la gestion
 
  ******************************************************/
void mostrarMenuPrincipal(int &opcion);
//Muestra un menu con las opciones de la biblioteca
void mostrarMenuBici(int &opcion);
//Muestra un menu con las opciones de la gestion de libros
void mostrarMenuCliente(int &opcion);
//Muestra un menu con las opciones de la gestion de socios
void mostrarMenuTienda(int &opcion);
//Muestra un menu con las opciones de la gestion de prestamos
void gestionarTienda(Tienda &tienda);
//Gestion de prestamos
void gestionarClientes(Tienda &tienda);
//Gestion de socios
void gestionarBicis(Tienda &tienda);
//Gestion de libros
///////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
	/*Pseudocodigo
  -Se incializan las listas de socios y libros
  -Visualizamos el menu principal con las diferentes opciones:
    -Gestion de socios
     -Añadir socio
     -Eliminar socio
     -Mostrar socio
     -Listar socios
    -Gestion de libros
     -Añadir libro
     -Eliminar libro
     -Mostrar libro
     -Listar libros
    -Gestion de biblioteca
     -Añadir prestamo
     -Devolucion
     -Listar prestamos
     -Mostrar situacion de un libro
  -Si la opcion introducida es 0 salimos del programa
  -Todos los submenus tienen la opcion 0 para volver al menu principal
Fin Pseudocodigo*/
	Tienda tienda;
	//Variable que guarda las listas de libros y socios
	int opPrincipal = 0;
	//Variable que guarda la opcion para el menu principal
	do
	{
		mostrarMenuPrincipal(opPrincipal);
		switch (opPrincipal)
		{
		case 1:
			gestionarBicis(tienda);
			break;
		case 2:
			gestionarClientes(tienda);
			break;
		case 3:
			gestionarTienda(tienda);
			break;
		case 0:
			break;
		}
	}while(opPrincipal != 0);
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////
void mostrarMenuPrincipal(int &opcion)
{
	/**********************************************
  * OBJETIVO: Visualiza el menu principal y devuelve
  * la opcion escogida por el usuario.
  * DATOS DE SALIDA:
  * opcion: guarda la opcion escogida por el usuario.
  **********************************************/
	system("CLS");
	cout << "MENU PRINCIPAL OO\n\n";
	cout << "1.- Gestion de bicis\n";
	cout << "2.- Gestion de clientes\n";
	cout << "3.- Gestion de la tienda\n";
	cout << "0.- Salir\n";
	do
	{
	cout << "\nIntroduzca opcion: ";
	cin >> opcion;
	cin.ignore();
	if ((opcion < 0) || (opcion > 3))
		cout << "Opcion incorrecta. Intentelo de nuevo...\n";
	}while((opcion < 0) || (opcion > 3));
}
///////////////////////////////////////////////////////////////////////////////////////////////////
void mostrarMenuBicis(int &opcion)
{
	/**********************************************
  * OBJETIVO: Visualiza el menu de libro y devuelve
  * la opcion escogida por el usuario.
  * DATOS DE SALIDA:
  * opcion: guarda la opcion escogida por el usuario.
  **********************************************/
	system("CLS");
	cout << "MENU BICIS\n\n";
	cout << "1.- Anyadir una nueva bici\n";
	cout << "2.- Eliminar una bici\n";
	cout << "3.- Listar todas las bicis\n";
	cout << "4.- Mostrar los datos de una bici\n";
	cout << "0.- Volver al menu principal. \n";
	do
	{
	cout << "\nIntroduzca opcion: ";
	cin >> opcion;
	cin.ignore();
	if ((opcion < 0) || (opcion > 4))
		cout << "Opcion incorrecta. Intentelo de nuevo...\n";
	}while((opcion < 0) || (opcion > 4));
}
///////////////////////////////////////////////////////////////////////////////////////////////////
void gestionarBicis(Tienda &tienda)
{
	/**********************************************
  * OBJETIVO: Gestionar todo lo relacionado con los libros
  * de la biblioteca
  * DATOS DE ENTRADA/SALIDA:
  * biblioteca: biblioteca actualizada
  **********************************************/
	int opcionBici = 0;
	//variable que guarda la opcion escogida por el usuario
	int num = 0;
	//Variable que guarda el numero de registro del libro a borrar o visualizar
	do{
	mostrarMenuBicis(opcionBici);
	switch (opcionBici){
		case 1:
			{//AÑADIR BICI
				if(tienda.dameBicis().numElems()<ListaBicicleta::MAX_BICICLETAS)
				{
					Bicicleta b;
					//Variable que guarda los datos de un libro
					//b.lee();
					//Se leen los datos del libro
					if(tienda.anyadeBici(b))
						cout << "Se anyadio la bici";	
					else
						cout << "NO se pudo anyadir la bici";
				}
				else
					cout << "Lista llena";
				break;
			}
		case 2://Borra libro
			//Se mira si hay libros para borrar
			if (tienda.dameBicis().numElems() > 0){
				//Se pide el numero de registro del libro a borrar
				do
				{
					cout << "Introduzca registro a borrar: ";
					cin >> num;
					if ((num < 0)||(num >= tienda.dameUltimoRegBici()))
						cout << "Registro NO valido. Intentelo de nuevo...\n";
				}while ((num < 0)||(num >= tienda.dameUltimoRegBici()));
				Bicicleta bici;
				//Variable que guarda temporalmente el libro a borrar
				//Si esta el libro en la biblioteca,y no esta prestado se borra
				if (tienda.buscaBiciPorRegistro(num, bici))
				{
					if ((bici.getEstado() != Bicicleta::Alquilada) && (bici.getEstado() != Bicicleta::enTaller))
						if(tienda.borraBici(num))
							cout << "Bici borrada";
						else
							cout << "La bici no se borro";
					else
						cout << "\nLa bici no se puede borrar porque se encuentra alquilada o en reparación";
				}
				else
					cout << "\nLa bici no existe";
			}
			else
				cout << "Lista vacia";
			break;
		case 3://Mostrar todos los libros de la biblioteca
			//Primero miramos si hay libros en la biblioteca
			if (tienda.dameBicis().numElems() > 0)
				//Luego los mostramos
				tienda.muestraBicis();
			else
				cout << "Lista vacia";
			break;
		case 4://Mostrar un libro
			//Primero miramos si hay libros en la biblioteca
			if (tienda.dameBicis().numElems() > 0){
				do
				{
					cout << "Introduzca registro a borrar: ";
					cin >> num;
					if ((num < 0)||(num >= tienda.dameUltimoRegBici()))
						cout << "Registro NO valido. Intentelo de nuevo...\n";
				}while ((num < 0)||(num >= tienda.dameUltimoRegBici()));
				Bicicleta bici;
				//Variable que guarda temporalmente el libro a visualizar
				if (tienda.buscaBiciPorRegistro(num,bici))
					//Si el libro esta en la biblioteca lo mostramos
					//bici.muestra();
				else
					cout << "La bici no se encuentra en la tienda";
			}
			else
				cout << "Lista vacia";
			break;
		}
	getch();
	}while (opcionBici != 0);
}
///////////////////////////////////////////////////////////////////////////////////////////////////
void mostrarMenuClientes(int &opcion)
{
	/**********************************************
  * OBJETIVO: Visualiza el menu de socio y devuelve
  * la opcion escogida por el usuario.
  * DATOS DE SALIDA:
  * opcion: guarda la opcion escogida por el usuario.
  **********************************************/
	system("CLS");
	cout << "MENU CLIENTES\n\n";
	cout << "1.- Anyadir cliente\n";
	cout << "2.- Eliminar cliente\n";
	cout << "3.- Listar clientes\n";
	cout << "4.- Mostrar datos de un cliente\n";
	cout << "0.- Volver al menu principal. \n";
	do
	{
	cout << "\nIntroduzca opcion: ";
	cin >> opcion;
	cin.ignore();
	if ((opcion < 0) || (opcion > 4))
		cout << "Opcion incorrecta. Intentelo de nuevo...\n";
	}while((opcion < 0) || (opcion > 4));
}
///////////////////////////////////////////////////////////////////////////////////////////////////
void gestionarClientes(Tienda &tienda)
{
	/**********************************************
  * OBJETIVO: Gestionar todo lo relacionado con los socios
  * de la biblioteca
  * DATOS DE ENTRADA/SALIDA:
  * biblioteca: biblioteca actualizada
  **********************************************/
	int opcionClientes = 0;
	//Variable que guarda la opcion del menu de socios
	int num = 0;
	//Variable que guarda el registro del socio para borrar o para visualizar
	do{
	mostrarMenuClientes(opcionClientes);
	switch (opcionClientes){
		case 1:{//Añadir socio
			Cliente c;
			//c.leer();
			//Primero se leen los datos del nuevo socio y se guardan en s
			if(tienda.anyadeCliente(c))
				cout << "Cliente anyadido";
			else
				cout << "Cliente NO anyadido";
			break;
			}
		case 2://Borrar socio
			//Se mira si hay socios para borrar
			if (tienda.dameClientes().numElems() > 0){
				do
				{
					cout << "Introduzca codigo de cliente a borrar: ";
					cin >> num;
					if ((num <= 100)||(num >= tienda.dameUltimoCodCliente()))
						cout << "Codigo de socio NO valido. Intentelo de nuevo..\n";
				}while ((num <= 100)||(num >= tienda.dameUltimoCodCliente()));
				Cliente cliente;
				//Variable temporal que guarda el socio a borrar
				if (tienda.buscaClientePorCodigo(num, cliente))
				//Si encuentra el socio en la biblioteca
				{
					if (cliente.alquileres().numElems() == 0)
						//Y no tiene prestamos pendientes
						if(tienda.borraCliente(num))
							//Borramos el socio
							cout << "El cliente fue borrado";
						else
							cout << "El cliente NO pudo ser borrado";
					else
						cout << "El cliente tiene algun alquiler pendiente";
				}
				else
					cout << "El cliente NO se encuentra en la tienda";
			}
			else
				cout << "Lista vacia";
			break;
		case 3://Mostrar la lista de socios
			//Miramos si hay socios en la lista
			if (tienda.dameClientes().numElems() > 0)
				//Los mostramos
				tienda.muestraClientes();
			else
				cout << "Lista vacia";
			break;
		case 4://Mostrar un socio
			//Miramos si hay socios en la lista
			if (tienda.dameClientes().numElems() > 0){
				do
				{
					cout << "Introduzca codigo de cliente a borrar: ";
					cin >> num;
					if ((num <= 100)||(num >= tienda.dameUltimoCodCliente()))
						cout << "Codigo de cliente NO valido. Intentelo de nuevo..\n";
				}while ((num <= 100)||(num >= tienda.dameUltimoCodCliente()));
				Cliente cliente;
				//Variable que guarda temporalmente el socio para mostrar
				if (tienda.buscaClientePorCodigo(num,cliente))
					//Si esta en la lista lo muestra
					cliente.mostrar(tienda.dameBicis());
				else
					cout << "El cliente no pertenece a la tienda";
			}
			else
				cout << "Lista vacia";
			break;
		}
	getch();
	}while (opcionClientes != 0);
}
///////////////////////////////////////////////////////////////////////////////////////////////////
void mostrarMenuTienda(int &opcion)
{
	/**********************************************
  * OBJETIVO: Visualiza el menu de biblioteca y devuelve
  * la opcion escogida por el usuario.
  * DATOS DE SALIDA:
  * opcion: guarda la opcion escogida por el usuario.
  **********************************************/
	system("CLS");
	cout << "MENU BIBLIOTECA\n\n";
	cout << "1.- Registrar un nuevo prestamo\n";
	cout << "2.- Devolucion de un libro\n";
	cout << "3.- Listado de prestamos\n";
	cout << "4.- Buscar un libro\n";
	cout << "0.- Volver al menu principal. \n";
	do
	{
	cout << "\nIntroduzca opcion: ";
	cin >> opcion;
	cin.ignore();
	if ((opcion < 0) || (opcion > 4))
		cout << "Opcion incorrecta. Intentelo de nuevo...\n";
	}while((opcion < 0) || (opcion > 4));
}
///////////////////////////////////////////////////////////////////////////////////////////////////
void gestionarTienda(Tienda &tienda)
{
	/**********************************************
  * OBJETIVO: Gestionar todo lo relacionado con los prestamos
  * de la biblioteca
  * DATOS DE ENTRADA/SALIDA:
  * biblioteca: biblioteca actualizada
  **********************************************/
	int opcionTienda = 0;
	//Variable que guarda la opcion del menu de prestamos escogida por el usuario
	int num = 0;
	//Variable que guarda el registro del prestamo a devolver o a mostrar
	do{
	mostrarMenuTienda(opcionTienda);
	switch (opcionTienda){
		case 1:{//Añadimos un prestamo
			int codCliente;
			cout << "\nIntroduzca el codigo de cliente: ";
			//Se pide el codigo del socio del prestamo
			cin >> codCliente;
			int regBici;
			//Y el registro del libro que se va a prestar
			cout << "\nIntroduzca el numero de registro de la bici: ";
			cin >> regBici;
			//Se introduce la fecha de devolucion
			int dia, mes, anyo;
			cout << "\nIntroduzca la fecha de devolucion: ";
			Fecha f;
			cout << "\nDia: ";
			cin >> dia;
			f.ponDia(dia);
			cout << "\nMes: ";
			cin >> mes;
			f.ponMes(mes);
			cout << "\nAnyo: ";
			cin >> anyo;
			f.ponAnyo(anyo);
			if (tienda.alquila(codCliente,regBici,f))
				cout << "El alquiler se realizo con exito";
			else
				cout << "No se pudo realizar correctamente el alquiler";
			break;
		}
		case 2:{//Devolver un prestamo
			int codCliente;
			//Variable que guarda el codigo del socio que va a devolver el libro
			cout << "\nIntroduzca el codigo de socio: ";
			//Se pide el codigo del socio que va a devolver el libro
			cin >> codCliente;
			//Se pide el registro del libro a devolver
			cout << "\nIntroduzca el numero de registro del libro: ";
			int regBici;
			//Variable que guarda el registro del libro a devolver
			cin >> regBici;
			if(tienda.devuelve(codCliente,regBici))
				cout << "El alquiler fue devuelto con exito";
			else
				cout << "El alquiler no pudo ser devuelto";
			break;
			   }
		case 3://Mostrar los prestamos actuales de la biblioteca
			tienda.muestraAlquileres();
			break;
		case 4:{//Mostrar a quien esta prestado un libro
			cout << "\nIntroduzca el numero de registro dela bici: ";
			int regBici;
			//Variable para guardar el registro del libro para ver a quien esta prestado
			cin >> regBici;
			Cliente c;
			//Variable que guarda temporalmente el socio que tiene el libro
			if(tienda.quienTiene(regBici,c))
				//Se mira que el libro lo tenga alguien
				cout << "\nLa bici " << regBici << " la tiene " << c.nombre() << " " << c.apellidos();
			else
				cout << "\nEsa bici no la tiene nadie";
			break;
		}
	}
	getch();
	}while (opcionTienda != 0);
}
///////////////////////////////////////////////////////////////////////////////////////////////////