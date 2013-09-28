#pragma once
#include <iostream>
#include <fstream>
#include <iostream>
#include <fstream>
#include <cstring>

#include "Bicicleta.h"
#include "ListaBicicleta.h"
#include "ListaClientes.h"
#include "ListaOfertas.h"
#include "listaIncidencias.h"
#include "Tienda.h"
#include "funciones.h"
#include "Oferta.h"
#include "incidencia.h"
#include "Dao.h"
using namespace std;


namespace Bikerent {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Form1
	/// </summary>

	
	Tienda &tienda = *Tienda::Instance();



	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		
	protected:
		
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected: 
	private: System::Windows::Forms::TabPage^  tabMenuPrincipal;
	private: System::Windows::Forms::Label^  label1;


	private: System::Windows::Forms::TabPage^  tabBicicletas;

	private: System::Windows::Forms::TabControl^  tabControl2;
	private: System::Windows::Forms::TabPage^  tabAltaAlquiler;
	private: System::Windows::Forms::ComboBox^  comboBoxTamBiciAlta;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TabPage^  tabBajaAlquiler;
	private: System::Windows::Forms::TabPage^  tabConsultaAlquiler;
	private: System::Windows::Forms::TabPage^  tabModificacionAlquiler;
	private: System::Windows::Forms::TabPage^  tabSocios;
	private: System::Windows::Forms::TabControl^  tabControl3;
	private: System::Windows::Forms::TabPage^  tabAltaSocios;
	private: System::Windows::Forms::TabPage^  tabBajaSocios;
	private: System::Windows::Forms::TabPage^  tabConsultaSocios;
	private: System::Windows::Forms::TabPage^  tabModificacionSocios;
	private: System::Windows::Forms::TabPage^  tabIncidencias;
	private: System::Windows::Forms::TabControl^  tabControl4;
	private: System::Windows::Forms::TabPage^  tabAltaIncidencias;
	private: System::Windows::Forms::TabPage^  tabBajaIncidencias;
	private: System::Windows::Forms::TabPage^  tabConsultaIncidencias;
	private: System::Windows::Forms::TabPage^  tabModificacionIncidencias;
	private: System::Windows::Forms::ComboBox^  comboBoxTipoBiciAlta;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  btAltaBici;


	private: System::Windows::Forms::Button^  btConsultaBicis;
	private: System::Windows::Forms::Panel^  panelConsultaAlquiler;


	private: System::Windows::Forms::Label^  label7;







	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  btAceptarAltaSocio;




























	private: System::Windows::Forms::TextBox^  txtPrecioPorDia;

	private: System::Windows::Forms::Button^  btCancelar;
	private: System::Windows::Forms::Button^  btCancelarEliminar;

private: System::Windows::Forms::Button^  btEliminar;

private: System::Windows::Forms::Button^  btBuscarBici;

	private: System::Windows::Forms::TextBox^  txtIdBicicleta;
private: System::Windows::Forms::Label^  lblMostrarEstado;

private: System::Windows::Forms::Label^  lblMostrarPrecio;

private: System::Windows::Forms::Label^  lblMostrarTipo;

private: System::Windows::Forms::Label^  lblMostrarTamaño;

private: System::Windows::Forms::Label^  lblEstado;

private: System::Windows::Forms::Label^  lblPrecio;

private: System::Windows::Forms::Label^  lblTipo;

private: System::Windows::Forms::Label^  lblTamaño;

	private: System::Windows::Forms::Label^  lblIdBicicleta;
private: System::Windows::Forms::TextBox^  txtIdBiciMod;
private: System::Windows::Forms::Button^  btBuscarBiciMod;
private: System::Windows::Forms::TextBox^  txtPrecioBiciMod;
private: System::Windows::Forms::Button^  btCancelarMod;
private: System::Windows::Forms::Button^  btModificarBiciMod;
private: System::Windows::Forms::ComboBox^  ddlEstadoBiciMod;

private: System::Windows::Forms::ComboBox^  ddlTipoBiciMod;
private: System::Windows::Forms::ComboBox^  ddlTamañoBiciMod;
private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::Label^  lblIdBiciMod;
private: System::Windows::Forms::PictureBox^  pictureBox1;
private: System::Windows::Forms::MenuStrip^  menuStrip1;
private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^  guardarToolStripMenuItem;
private: System::Windows::Forms::Label^  lblIdBicicletaAlta;
private: System::Windows::Forms::TabPage^  tabOfertas;

private: System::Windows::Forms::TabControl^  tabControl5;
private: System::Windows::Forms::TabPage^  tabAltaOferta;


private: System::Windows::Forms::MaskedTextBox^  txtDescuentoOfertas;
private: System::Windows::Forms::MaskedTextBox^  txtNumAlquileresOfertas;







private: System::Windows::Forms::Label^  label28;
private: System::Windows::Forms::Label^  label29;
private: System::Windows::Forms::Label^  label30;
private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::TabPage^  tabBajaOferta;
private: System::Windows::Forms::TabPage^  tabConsultaOferta;




private: System::Windows::Forms::TabPage^  tabModificacionOferta;
private: System::Windows::Forms::ComboBox^  cBTipoBiciOfertas;
private: System::Windows::Forms::Button^  btnCancelarAltaOferta;

private: System::Windows::Forms::Button^  btnAceptarAltaOferta;
private: System::Windows::Forms::Label^  txtIdOfertaAlta;
private: System::Windows::Forms::ComboBox^  ddlEstadoConsBici;

private: System::Windows::Forms::ComboBox^  ddlTipoConsBici;
private: System::Windows::Forms::ComboBox^  ddlTamanyioConsBici;
private: System::Windows::Forms::Label^  label33;
private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::Button^  btCancelarConsBici;
private: System::Windows::Forms::TextBox^  txtConsultaBici;
private: System::Windows::Forms::Button^  btnCancelarBajaOferta;
private: System::Windows::Forms::Button^  btnEliminarBajaOferta;
private: System::Windows::Forms::Button^  btnBuscarBajaOferta;
private: System::Windows::Forms::TextBox^  txtIdOfertaBaja;
private: System::Windows::Forms::Label^  lblDescuentoOfertaBaja;
private: System::Windows::Forms::Label^  lblNumAlquileresOfertaBaja;
private: System::Windows::Forms::Label^  lblTipoBiciBajaOferta;
private: System::Windows::Forms::Label^  label38;
private: System::Windows::Forms::Label^  label39;
private: System::Windows::Forms::Label^  label40;
private: System::Windows::Forms::Label^  label42;



private: System::Windows::Forms::Button^  btnCancelarConsultaOferta;

private: System::Windows::Forms::ComboBox^  cBTipoBiciConsulta;




private: System::Windows::Forms::Label^  label34;
private: System::Windows::Forms::Button^  btnConsultarOferta;

private: System::Windows::Forms::Panel^  panel1;
private: System::Windows::Forms::TextBox^  txtConsultaOferta;

private: System::Windows::Forms::Label^  label36;
private: System::Windows::Forms::TextBox^  txtNumAlquileresModificacionOferta;
private: System::Windows::Forms::Label^  label32;
private: System::Windows::Forms::TextBox^  txtIdModificacionOferta;
private: System::Windows::Forms::Button^  btnBuscarModificacionOferta;
private: System::Windows::Forms::TextBox^  txtDescuentoModificacionOferta;
private: System::Windows::Forms::Button^  btnCancelarModifOferta;
private: System::Windows::Forms::Button^  btnModificarOferta;
private: System::Windows::Forms::ComboBox^  cbTipoBiciModificacionOferta;
private: System::Windows::Forms::Label^  label35;
private: System::Windows::Forms::Label^  label41;
private: System::Windows::Forms::Label^  label43;
private: System::Windows::Forms::Label^  lblIdSocioAlta;
private: System::Windows::Forms::Button^  btCancelarAltaSocio;
private: System::Windows::Forms::TextBox^  txtTlfAltaSocio;
private: System::Windows::Forms::TextBox^  txtDireccionAltaSocio;
private: System::Windows::Forms::TextBox^  txtApellidosAltaSocio;
private: System::Windows::Forms::TextBox^  txtNombreAltaSocio;
private: System::Windows::Forms::TextBox^  txtDniAltaSocio;
private: System::Windows::Forms::Button^  btCancelarBajaCliente;

private: System::Windows::Forms::Button^  btEliminarBajaCliente;

private: System::Windows::Forms::Button^  btBuscarBajaCliente;

private: System::Windows::Forms::TextBox^  txtDniBajaCliente;
private: System::Windows::Forms::Label^  lblTlfBajaCliente;
private: System::Windows::Forms::Label^  lblDireccionBajaCliente;
private: System::Windows::Forms::Label^  lblApellidosBajaCliente;
private: System::Windows::Forms::Label^  lblNombreBajaCliente;
private: System::Windows::Forms::Label^  label47;
private: System::Windows::Forms::Label^  label48;
private: System::Windows::Forms::Label^  label49;
private: System::Windows::Forms::Label^  label50;
private: System::Windows::Forms::Label^  label51;

private: System::Windows::Forms::Button^  btCancelarConsultaSocio;






private: System::Windows::Forms::Label^  label45;
private: System::Windows::Forms::Button^  btConsultarSocio;



























private: System::Windows::Forms::TabPage^  tabAlquiler;
private: System::Windows::Forms::TabControl^  tabControl6;
private: System::Windows::Forms::TabPage^  tabAAlquiler;


private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::TabPage^  tabBAlquiler;



private: System::Windows::Forms::Label^  label59;


private: System::Windows::Forms::TextBox^  tbIdClienteNuevoAlquiler;

private: System::Windows::Forms::Button^  btAceptarAltaAlquiler;
private: System::Windows::Forms::Button^  btCancelarAltaAlquiler;









private: System::Windows::Forms::TabPage^  tabCAlquiler;



private: System::Windows::Forms::Button^  btConsultaIncidencias;
private: System::Windows::Forms::TextBox^  txtConsultaIncidencia;

private: System::Windows::Forms::Label^  label66;





















private: System::Windows::Forms::TextBox^  txtMostrarConsultaSocio;
private: System::Windows::Forms::Label^  lblIdSocioModificacionCliente;
private: System::Windows::Forms::Button^  btBuscarModificacionCliente;
private: System::Windows::Forms::Button^  btCancelarModificacionCliente;
private: System::Windows::Forms::Button^  btModificarModificacionCliente;
private: System::Windows::Forms::TextBox^  txtTlfModificacionCliente;
private: System::Windows::Forms::TextBox^  txtDireccionModificacionCliente;
private: System::Windows::Forms::TextBox^  txtApellidosModificacionCliente;
private: System::Windows::Forms::TextBox^  txtNombreModificacionCliente;

private: System::Windows::Forms::TextBox^  txtDniModificacionCliente;

private: System::Windows::Forms::Label^  label37;
private: System::Windows::Forms::Label^  label44;
private: System::Windows::Forms::Label^  label67;
private: System::Windows::Forms::Label^  label74;
private: System::Windows::Forms::Label^  label75;
private: System::Windows::Forms::Label^  label76;
private: System::Windows::Forms::Label^  label77;
private: System::Windows::Forms::TextBox^  tbIdBiciNuevoAlquiler;

private: System::Windows::Forms::Label^  label52;
private: System::Windows::Forms::Label^  label78;

private: System::Windows::Forms::Button^  btCancelarBajaAlquiler;
private: System::Windows::Forms::Button^  btAceptarBajaAlquiler;
private: System::Windows::Forms::TextBox^  textBoxidBiciBajaAlquiler;
private: System::Windows::Forms::TextBox^  textBoxDniSocioBajaAlquiler;

private: System::Windows::Forms::Label^  label64;

private: System::Windows::Forms::Button^  btnConsultaAlquiler;

private: System::Windows::Forms::Label^  label65;

private: System::Windows::Forms::ComboBox^  cbTipoAltaInci;
private: System::Windows::Forms::TextBox^  txtNombreAltaInci;

private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::Label^  lblIdInciAlta;
private: System::Windows::Forms::ComboBox^  cbEstadAltaInci;
private: System::Windows::Forms::TextBox^  txtConcepAltaInci;
private: System::Windows::Forms::TextBox^  txtImporAltaInci;
private: System::Windows::Forms::TextBox^  txtIdBiciAltaInci;

private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::Label^  label58;
private: System::Windows::Forms::Label^  label79;

private: System::Windows::Forms::Label^  lblTipoBajaIncidencia;
private: System::Windows::Forms::Label^  label83;
private: System::Windows::Forms::Label^  lblNombreBajaIncidencia;
private: System::Windows::Forms::Label^  label81;
private: System::Windows::Forms::Label^  lblFResolucionIncidenciaBaja;
private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::Button^  btnCancelarIncidenciasBaja;
private: System::Windows::Forms::Button^  btnEliminarIncidenciasBaja;
private: System::Windows::Forms::Button^  btnBuscarIncidenciasBaja;
private: System::Windows::Forms::TextBox^  txtIdIncidenciaBaja;
private: System::Windows::Forms::Label^  lblFCreacionIncidenciaBaja;
private: System::Windows::Forms::Label^  lblConceptoIncidenciaBaja;
private: System::Windows::Forms::Label^  lblImporteIncidenciaBaja;
private: System::Windows::Forms::Label^  lblIdBiciIncidenciaBaja;
private: System::Windows::Forms::Label^  label53;
private: System::Windows::Forms::Label^  label54;
private: System::Windows::Forms::Label^  label55;
private: System::Windows::Forms::Label^  label56;
private: System::Windows::Forms::Label^  label57;
private: System::Windows::Forms::TextBox^  dtpCreaAltaInci;
private: System::Windows::Forms::TextBox^  dTimeFechaNuevoAlquiler;
private: System::Windows::Forms::TextBox^  dtpDevolucion;
private: System::Windows::Forms::TextBox^  txtConsultaAlquiler;



private: System::Windows::Forms::TextBox^  txtFechaMod;
private: System::Windows::Forms::TextBox^  txtIdIncidenciaModInci;
private: System::Windows::Forms::ComboBox^  comboBoxEstadoModInci;
private: System::Windows::Forms::TextBox^  txtConceptoModInci;
private: System::Windows::Forms::TextBox^  txtImporteModInci;
private: System::Windows::Forms::TextBox^  txtIdBiciModInci;
private: System::Windows::Forms::Label^  label68;
private: System::Windows::Forms::Label^  label69;
private: System::Windows::Forms::Label^  label70;
private: System::Windows::Forms::Label^  label71;
private: System::Windows::Forms::Label^  label72;
private: System::Windows::Forms::Label^  label73;
private: System::Windows::Forms::Button^  btnAceptAltaInci;
private: System::Windows::Forms::Button^  btAcep;
private: System::Windows::Forms::Button^  btCanc;
private: System::Windows::Forms::Button^  btMod;
private: System::Windows::Forms::Label^  label46;













	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;
		
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabMenuPrincipal = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabAlquiler = (gcnew System::Windows::Forms::TabPage());
			this->tabControl6 = (gcnew System::Windows::Forms::TabControl());
			this->tabAAlquiler = (gcnew System::Windows::Forms::TabPage());
			this->dTimeFechaNuevoAlquiler = (gcnew System::Windows::Forms::TextBox());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->tbIdBiciNuevoAlquiler = (gcnew System::Windows::Forms::TextBox());
			this->tbIdClienteNuevoAlquiler = (gcnew System::Windows::Forms::TextBox());
			this->btAceptarAltaAlquiler = (gcnew System::Windows::Forms::Button());
			this->btCancelarAltaAlquiler = (gcnew System::Windows::Forms::Button());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->tabBAlquiler = (gcnew System::Windows::Forms::TabPage());
			this->dtpDevolucion = (gcnew System::Windows::Forms::TextBox());
			this->label78 = (gcnew System::Windows::Forms::Label());
			this->btCancelarBajaAlquiler = (gcnew System::Windows::Forms::Button());
			this->btAceptarBajaAlquiler = (gcnew System::Windows::Forms::Button());
			this->textBoxidBiciBajaAlquiler = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDniSocioBajaAlquiler = (gcnew System::Windows::Forms::TextBox());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->tabCAlquiler = (gcnew System::Windows::Forms::TabPage());
			this->txtConsultaAlquiler = (gcnew System::Windows::Forms::TextBox());
			this->btnConsultaAlquiler = (gcnew System::Windows::Forms::Button());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->tabBicicletas = (gcnew System::Windows::Forms::TabPage());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabAltaAlquiler = (gcnew System::Windows::Forms::TabPage());
			this->lblIdBicicletaAlta = (gcnew System::Windows::Forms::Label());
			this->txtPrecioPorDia = (gcnew System::Windows::Forms::TextBox());
			this->btCancelar = (gcnew System::Windows::Forms::Button());
			this->btAltaBici = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxTipoBiciAlta = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxTamBiciAlta = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabBajaAlquiler = (gcnew System::Windows::Forms::TabPage());
			this->btCancelarEliminar = (gcnew System::Windows::Forms::Button());
			this->btEliminar = (gcnew System::Windows::Forms::Button());
			this->btBuscarBici = (gcnew System::Windows::Forms::Button());
			this->txtIdBicicleta = (gcnew System::Windows::Forms::TextBox());
			this->lblMostrarEstado = (gcnew System::Windows::Forms::Label());
			this->lblMostrarPrecio = (gcnew System::Windows::Forms::Label());
			this->lblMostrarTipo = (gcnew System::Windows::Forms::Label());
			this->lblMostrarTamaño = (gcnew System::Windows::Forms::Label());
			this->lblEstado = (gcnew System::Windows::Forms::Label());
			this->lblPrecio = (gcnew System::Windows::Forms::Label());
			this->lblTipo = (gcnew System::Windows::Forms::Label());
			this->lblTamaño = (gcnew System::Windows::Forms::Label());
			this->lblIdBicicleta = (gcnew System::Windows::Forms::Label());
			this->tabConsultaAlquiler = (gcnew System::Windows::Forms::TabPage());
			this->btCancelarConsBici = (gcnew System::Windows::Forms::Button());
			this->ddlEstadoConsBici = (gcnew System::Windows::Forms::ComboBox());
			this->ddlTipoConsBici = (gcnew System::Windows::Forms::ComboBox());
			this->ddlTamanyioConsBici = (gcnew System::Windows::Forms::ComboBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->btConsultaBicis = (gcnew System::Windows::Forms::Button());
			this->panelConsultaAlquiler = (gcnew System::Windows::Forms::Panel());
			this->txtConsultaBici = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tabModificacionAlquiler = (gcnew System::Windows::Forms::TabPage());
			this->txtIdBiciMod = (gcnew System::Windows::Forms::TextBox());
			this->btBuscarBiciMod = (gcnew System::Windows::Forms::Button());
			this->txtPrecioBiciMod = (gcnew System::Windows::Forms::TextBox());
			this->btCancelarMod = (gcnew System::Windows::Forms::Button());
			this->btModificarBiciMod = (gcnew System::Windows::Forms::Button());
			this->ddlEstadoBiciMod = (gcnew System::Windows::Forms::ComboBox());
			this->ddlTipoBiciMod = (gcnew System::Windows::Forms::ComboBox());
			this->ddlTamañoBiciMod = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->lblIdBiciMod = (gcnew System::Windows::Forms::Label());
			this->tabSocios = (gcnew System::Windows::Forms::TabPage());
			this->tabControl3 = (gcnew System::Windows::Forms::TabControl());
			this->tabAltaSocios = (gcnew System::Windows::Forms::TabPage());
			this->txtTlfAltaSocio = (gcnew System::Windows::Forms::TextBox());
			this->txtDireccionAltaSocio = (gcnew System::Windows::Forms::TextBox());
			this->txtApellidosAltaSocio = (gcnew System::Windows::Forms::TextBox());
			this->txtNombreAltaSocio = (gcnew System::Windows::Forms::TextBox());
			this->txtDniAltaSocio = (gcnew System::Windows::Forms::TextBox());
			this->lblIdSocioAlta = (gcnew System::Windows::Forms::Label());
			this->btCancelarAltaSocio = (gcnew System::Windows::Forms::Button());
			this->btAceptarAltaSocio = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->tabBajaSocios = (gcnew System::Windows::Forms::TabPage());
			this->btCancelarBajaCliente = (gcnew System::Windows::Forms::Button());
			this->btEliminarBajaCliente = (gcnew System::Windows::Forms::Button());
			this->btBuscarBajaCliente = (gcnew System::Windows::Forms::Button());
			this->txtDniBajaCliente = (gcnew System::Windows::Forms::TextBox());
			this->lblTlfBajaCliente = (gcnew System::Windows::Forms::Label());
			this->lblDireccionBajaCliente = (gcnew System::Windows::Forms::Label());
			this->lblApellidosBajaCliente = (gcnew System::Windows::Forms::Label());
			this->lblNombreBajaCliente = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->tabConsultaSocios = (gcnew System::Windows::Forms::TabPage());
			this->txtMostrarConsultaSocio = (gcnew System::Windows::Forms::TextBox());
			this->btConsultarSocio = (gcnew System::Windows::Forms::Button());
			this->btCancelarConsultaSocio = (gcnew System::Windows::Forms::Button());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->tabModificacionSocios = (gcnew System::Windows::Forms::TabPage());
			this->lblIdSocioModificacionCliente = (gcnew System::Windows::Forms::Label());
			this->btBuscarModificacionCliente = (gcnew System::Windows::Forms::Button());
			this->btCancelarModificacionCliente = (gcnew System::Windows::Forms::Button());
			this->btModificarModificacionCliente = (gcnew System::Windows::Forms::Button());
			this->txtTlfModificacionCliente = (gcnew System::Windows::Forms::TextBox());
			this->txtDireccionModificacionCliente = (gcnew System::Windows::Forms::TextBox());
			this->txtApellidosModificacionCliente = (gcnew System::Windows::Forms::TextBox());
			this->txtNombreModificacionCliente = (gcnew System::Windows::Forms::TextBox());
			this->txtDniModificacionCliente = (gcnew System::Windows::Forms::TextBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->label75 = (gcnew System::Windows::Forms::Label());
			this->label76 = (gcnew System::Windows::Forms::Label());
			this->label77 = (gcnew System::Windows::Forms::Label());
			this->tabIncidencias = (gcnew System::Windows::Forms::TabPage());
			this->tabControl4 = (gcnew System::Windows::Forms::TabControl());
			this->tabAltaIncidencias = (gcnew System::Windows::Forms::TabPage());
			this->btnAceptAltaInci = (gcnew System::Windows::Forms::Button());
			this->dtpCreaAltaInci = (gcnew System::Windows::Forms::TextBox());
			this->cbTipoAltaInci = (gcnew System::Windows::Forms::ComboBox());
			this->txtNombreAltaInci = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->lblIdInciAlta = (gcnew System::Windows::Forms::Label());
			this->cbEstadAltaInci = (gcnew System::Windows::Forms::ComboBox());
			this->txtConcepAltaInci = (gcnew System::Windows::Forms::TextBox());
			this->txtImporAltaInci = (gcnew System::Windows::Forms::TextBox());
			this->txtIdBiciAltaInci = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label79 = (gcnew System::Windows::Forms::Label());
			this->tabBajaIncidencias = (gcnew System::Windows::Forms::TabPage());
			this->lblTipoBajaIncidencia = (gcnew System::Windows::Forms::Label());
			this->label83 = (gcnew System::Windows::Forms::Label());
			this->lblNombreBajaIncidencia = (gcnew System::Windows::Forms::Label());
			this->label81 = (gcnew System::Windows::Forms::Label());
			this->lblFResolucionIncidenciaBaja = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->btnCancelarIncidenciasBaja = (gcnew System::Windows::Forms::Button());
			this->btnEliminarIncidenciasBaja = (gcnew System::Windows::Forms::Button());
			this->btnBuscarIncidenciasBaja = (gcnew System::Windows::Forms::Button());
			this->txtIdIncidenciaBaja = (gcnew System::Windows::Forms::TextBox());
			this->lblFCreacionIncidenciaBaja = (gcnew System::Windows::Forms::Label());
			this->lblConceptoIncidenciaBaja = (gcnew System::Windows::Forms::Label());
			this->lblImporteIncidenciaBaja = (gcnew System::Windows::Forms::Label());
			this->lblIdBiciIncidenciaBaja = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->tabConsultaIncidencias = (gcnew System::Windows::Forms::TabPage());
			this->btConsultaIncidencias = (gcnew System::Windows::Forms::Button());
			this->txtConsultaIncidencia = (gcnew System::Windows::Forms::TextBox());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->tabModificacionIncidencias = (gcnew System::Windows::Forms::TabPage());
			this->btAcep = (gcnew System::Windows::Forms::Button());
			this->btCanc = (gcnew System::Windows::Forms::Button());
			this->btMod = (gcnew System::Windows::Forms::Button());
			this->txtFechaMod = (gcnew System::Windows::Forms::TextBox());
			this->txtIdIncidenciaModInci = (gcnew System::Windows::Forms::TextBox());
			this->comboBoxEstadoModInci = (gcnew System::Windows::Forms::ComboBox());
			this->txtConceptoModInci = (gcnew System::Windows::Forms::TextBox());
			this->txtImporteModInci = (gcnew System::Windows::Forms::TextBox());
			this->txtIdBiciModInci = (gcnew System::Windows::Forms::TextBox());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->tabOfertas = (gcnew System::Windows::Forms::TabPage());
			this->tabControl5 = (gcnew System::Windows::Forms::TabControl());
			this->tabAltaOferta = (gcnew System::Windows::Forms::TabPage());
			this->txtIdOfertaAlta = (gcnew System::Windows::Forms::Label());
			this->btnCancelarAltaOferta = (gcnew System::Windows::Forms::Button());
			this->btnAceptarAltaOferta = (gcnew System::Windows::Forms::Button());
			this->cBTipoBiciOfertas = (gcnew System::Windows::Forms::ComboBox());
			this->txtDescuentoOfertas = (gcnew System::Windows::Forms::MaskedTextBox());
			this->txtNumAlquileresOfertas = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->tabBajaOferta = (gcnew System::Windows::Forms::TabPage());
			this->btnCancelarBajaOferta = (gcnew System::Windows::Forms::Button());
			this->btnEliminarBajaOferta = (gcnew System::Windows::Forms::Button());
			this->btnBuscarBajaOferta = (gcnew System::Windows::Forms::Button());
			this->txtIdOfertaBaja = (gcnew System::Windows::Forms::TextBox());
			this->lblDescuentoOfertaBaja = (gcnew System::Windows::Forms::Label());
			this->lblNumAlquileresOfertaBaja = (gcnew System::Windows::Forms::Label());
			this->lblTipoBiciBajaOferta = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->tabConsultaOferta = (gcnew System::Windows::Forms::TabPage());
			this->btnCancelarConsultaOferta = (gcnew System::Windows::Forms::Button());
			this->cBTipoBiciConsulta = (gcnew System::Windows::Forms::ComboBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->btnConsultarOferta = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->txtConsultaOferta = (gcnew System::Windows::Forms::TextBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->tabModificacionOferta = (gcnew System::Windows::Forms::TabPage());
			this->txtNumAlquileresModificacionOferta = (gcnew System::Windows::Forms::TextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->txtIdModificacionOferta = (gcnew System::Windows::Forms::TextBox());
			this->btnBuscarModificacionOferta = (gcnew System::Windows::Forms::Button());
			this->txtDescuentoModificacionOferta = (gcnew System::Windows::Forms::TextBox());
			this->btnCancelarModifOferta = (gcnew System::Windows::Forms::Button());
			this->btnModificarOferta = (gcnew System::Windows::Forms::Button());
			this->cbTipoBiciModificacionOferta = (gcnew System::Windows::Forms::ComboBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->guardarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabMenuPrincipal->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->tabAlquiler->SuspendLayout();
			this->tabControl6->SuspendLayout();
			this->tabAAlquiler->SuspendLayout();
			this->tabBAlquiler->SuspendLayout();
			this->tabCAlquiler->SuspendLayout();
			this->tabBicicletas->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabAltaAlquiler->SuspendLayout();
			this->tabBajaAlquiler->SuspendLayout();
			this->tabConsultaAlquiler->SuspendLayout();
			this->panelConsultaAlquiler->SuspendLayout();
			this->tabModificacionAlquiler->SuspendLayout();
			this->tabSocios->SuspendLayout();
			this->tabControl3->SuspendLayout();
			this->tabAltaSocios->SuspendLayout();
			this->tabBajaSocios->SuspendLayout();
			this->tabConsultaSocios->SuspendLayout();
			this->tabModificacionSocios->SuspendLayout();
			this->tabIncidencias->SuspendLayout();
			this->tabControl4->SuspendLayout();
			this->tabAltaIncidencias->SuspendLayout();
			this->tabBajaIncidencias->SuspendLayout();
			this->tabConsultaIncidencias->SuspendLayout();
			this->tabModificacionIncidencias->SuspendLayout();
			this->tabOfertas->SuspendLayout();
			this->tabControl5->SuspendLayout();
			this->tabAltaOferta->SuspendLayout();
			this->tabBajaOferta->SuspendLayout();
			this->tabConsultaOferta->SuspendLayout();
			this->panel1->SuspendLayout();
			this->tabModificacionOferta->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabMenuPrincipal);
			this->tabControl1->Controls->Add(this->tabAlquiler);
			this->tabControl1->Controls->Add(this->tabBicicletas);
			this->tabControl1->Controls->Add(this->tabSocios);
			this->tabControl1->Controls->Add(this->tabIncidencias);
			this->tabControl1->Controls->Add(this->tabOfertas);
			this->tabControl1->Location = System::Drawing::Point(12, 31);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(554, 445);
			this->tabControl1->TabIndex = 0;
			// 
			// tabMenuPrincipal
			// 
			this->tabMenuPrincipal->Controls->Add(this->pictureBox1);
			this->tabMenuPrincipal->Controls->Add(this->label1);
			this->tabMenuPrincipal->Location = System::Drawing::Point(4, 22);
			this->tabMenuPrincipal->Name = L"tabMenuPrincipal";
			this->tabMenuPrincipal->Padding = System::Windows::Forms::Padding(3);
			this->tabMenuPrincipal->Size = System::Drawing::Size(546, 419);
			this->tabMenuPrincipal->TabIndex = 0;
			this->tabMenuPrincipal->Text = L"Inicio";
			this->tabMenuPrincipal->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(140, 118);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(249, 254);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(28, 69);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(479, 27);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Bienvenido a la aplicación de BykeRent\r\n";
			// 
			// tabAlquiler
			// 
			this->tabAlquiler->Controls->Add(this->tabControl6);
			this->tabAlquiler->Location = System::Drawing::Point(4, 22);
			this->tabAlquiler->Name = L"tabAlquiler";
			this->tabAlquiler->Size = System::Drawing::Size(546, 419);
			this->tabAlquiler->TabIndex = 5;
			this->tabAlquiler->Text = L"Alquiler";
			this->tabAlquiler->UseVisualStyleBackColor = true;
			// 
			// tabControl6
			// 
			this->tabControl6->Controls->Add(this->tabAAlquiler);
			this->tabControl6->Controls->Add(this->tabBAlquiler);
			this->tabControl6->Controls->Add(this->tabCAlquiler);
			this->tabControl6->Location = System::Drawing::Point(3, 3);
			this->tabControl6->Name = L"tabControl6";
			this->tabControl6->SelectedIndex = 0;
			this->tabControl6->Size = System::Drawing::Size(539, 413);
			this->tabControl6->TabIndex = 0;
			// 
			// tabAAlquiler
			// 
			this->tabAAlquiler->Controls->Add(this->dTimeFechaNuevoAlquiler);
			this->tabAAlquiler->Controls->Add(this->label52);
			this->tabAAlquiler->Controls->Add(this->tbIdBiciNuevoAlquiler);
			this->tabAAlquiler->Controls->Add(this->tbIdClienteNuevoAlquiler);
			this->tabAAlquiler->Controls->Add(this->btAceptarAltaAlquiler);
			this->tabAAlquiler->Controls->Add(this->btCancelarAltaAlquiler);
			this->tabAAlquiler->Controls->Add(this->label59);
			this->tabAAlquiler->Controls->Add(this->label18);
			this->tabAAlquiler->Location = System::Drawing::Point(4, 22);
			this->tabAAlquiler->Name = L"tabAAlquiler";
			this->tabAAlquiler->Padding = System::Windows::Forms::Padding(3);
			this->tabAAlquiler->Size = System::Drawing::Size(531, 387);
			this->tabAAlquiler->TabIndex = 0;
			this->tabAAlquiler->Text = L"Nuevo";
			this->tabAAlquiler->UseVisualStyleBackColor = true;
			// 
			// dTimeFechaNuevoAlquiler
			// 
			this->dTimeFechaNuevoAlquiler->Location = System::Drawing::Point(193, 87);
			this->dTimeFechaNuevoAlquiler->Name = L"dTimeFechaNuevoAlquiler";
			this->dTimeFechaNuevoAlquiler->Size = System::Drawing::Size(138, 20);
			this->dTimeFechaNuevoAlquiler->TabIndex = 18;
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Location = System::Drawing::Point(41, 90);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(94, 13);
			this->label52->TabIndex = 17;
			this->label52->Text = L"Fecha de alquiler: ";
			// 
			// tbIdBiciNuevoAlquiler
			// 
			this->tbIdBiciNuevoAlquiler->Location = System::Drawing::Point(193, 58);
			this->tbIdBiciNuevoAlquiler->Name = L"tbIdBiciNuevoAlquiler";
			this->tbIdBiciNuevoAlquiler->Size = System::Drawing::Size(138, 20);
			this->tbIdBiciNuevoAlquiler->TabIndex = 16;
			// 
			// tbIdClienteNuevoAlquiler
			// 
			this->tbIdClienteNuevoAlquiler->Location = System::Drawing::Point(193, 32);
			this->tbIdClienteNuevoAlquiler->Name = L"tbIdClienteNuevoAlquiler";
			this->tbIdClienteNuevoAlquiler->Size = System::Drawing::Size(139, 20);
			this->tbIdClienteNuevoAlquiler->TabIndex = 15;
			// 
			// btAceptarAltaAlquiler
			// 
			this->btAceptarAltaAlquiler->Location = System::Drawing::Point(49, 255);
			this->btAceptarAltaAlquiler->Name = L"btAceptarAltaAlquiler";
			this->btAceptarAltaAlquiler->Size = System::Drawing::Size(191, 73);
			this->btAceptarAltaAlquiler->TabIndex = 14;
			this->btAceptarAltaAlquiler->Text = L"Aceptar";
			this->btAceptarAltaAlquiler->UseVisualStyleBackColor = true;
			this->btAceptarAltaAlquiler->Click += gcnew System::EventHandler(this, &Form1::btAceptarAltaAlquiler_Click);
			// 
			// btCancelarAltaAlquiler
			// 
			this->btCancelarAltaAlquiler->Location = System::Drawing::Point(292, 255);
			this->btCancelarAltaAlquiler->Name = L"btCancelarAltaAlquiler";
			this->btCancelarAltaAlquiler->Size = System::Drawing::Size(191, 73);
			this->btCancelarAltaAlquiler->TabIndex = 13;
			this->btCancelarAltaAlquiler->Text = L"Cancelar";
			this->btCancelarAltaAlquiler->UseVisualStyleBackColor = true;
			this->btCancelarAltaAlquiler->Click += gcnew System::EventHandler(this, &Form1::btCancelarAltaAlquiler_Click);
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->Location = System::Drawing::Point(41, 61);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(53, 13);
			this->label59->TabIndex = 4;
			this->label59->Text = L"Id de bici:";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(41, 35);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(86, 13);
			this->label18->TabIndex = 0;
			this->label18->Text = L"D.N.I del cliente:";
			// 
			// tabBAlquiler
			// 
			this->tabBAlquiler->Controls->Add(this->label46);
			this->tabBAlquiler->Controls->Add(this->dtpDevolucion);
			this->tabBAlquiler->Controls->Add(this->label78);
			this->tabBAlquiler->Controls->Add(this->btCancelarBajaAlquiler);
			this->tabBAlquiler->Controls->Add(this->btAceptarBajaAlquiler);
			this->tabBAlquiler->Controls->Add(this->textBoxidBiciBajaAlquiler);
			this->tabBAlquiler->Controls->Add(this->textBoxDniSocioBajaAlquiler);
			this->tabBAlquiler->Controls->Add(this->label64);
			this->tabBAlquiler->Location = System::Drawing::Point(4, 22);
			this->tabBAlquiler->Name = L"tabBAlquiler";
			this->tabBAlquiler->Padding = System::Windows::Forms::Padding(3);
			this->tabBAlquiler->Size = System::Drawing::Size(531, 387);
			this->tabBAlquiler->TabIndex = 1;
			this->tabBAlquiler->Text = L"Baja";
			this->tabBAlquiler->UseVisualStyleBackColor = true;
			// 
			// dtpDevolucion
			// 
			this->dtpDevolucion->Location = System::Drawing::Point(246, 134);
			this->dtpDevolucion->Name = L"dtpDevolucion";
			this->dtpDevolucion->Size = System::Drawing::Size(135, 20);
			this->dtpDevolucion->TabIndex = 27;
			// 
			// label78
			// 
			this->label78->AutoSize = true;
			this->label78->Location = System::Drawing::Point(130, 137);
			this->label78->Name = L"label78";
			this->label78->Size = System::Drawing::Size(110, 13);
			this->label78->TabIndex = 26;
			this->label78->Text = L"Fecha de devolución:";
			// 
			// btCancelarBajaAlquiler
			// 
			this->btCancelarBajaAlquiler->Location = System::Drawing::Point(285, 254);
			this->btCancelarBajaAlquiler->Name = L"btCancelarBajaAlquiler";
			this->btCancelarBajaAlquiler->Size = System::Drawing::Size(191, 73);
			this->btCancelarBajaAlquiler->TabIndex = 24;
			this->btCancelarBajaAlquiler->Text = L"Cancelar";
			this->btCancelarBajaAlquiler->UseVisualStyleBackColor = true;
			this->btCancelarBajaAlquiler->Click += gcnew System::EventHandler(this, &Form1::btCancelarBajaAlquiler_Click);
			// 
			// btAceptarBajaAlquiler
			// 
			this->btAceptarBajaAlquiler->Location = System::Drawing::Point(55, 254);
			this->btAceptarBajaAlquiler->Name = L"btAceptarBajaAlquiler";
			this->btAceptarBajaAlquiler->Size = System::Drawing::Size(191, 73);
			this->btAceptarBajaAlquiler->TabIndex = 23;
			this->btAceptarBajaAlquiler->Text = L"Aceptar";
			this->btAceptarBajaAlquiler->UseVisualStyleBackColor = true;
			this->btAceptarBajaAlquiler->Click += gcnew System::EventHandler(this, &Form1::btAceptarBajaAlquiler_Click);
			// 
			// textBoxidBiciBajaAlquiler
			// 
			this->textBoxidBiciBajaAlquiler->Location = System::Drawing::Point(246, 93);
			this->textBoxidBiciBajaAlquiler->Name = L"textBoxidBiciBajaAlquiler";
			this->textBoxidBiciBajaAlquiler->Size = System::Drawing::Size(100, 20);
			this->textBoxidBiciBajaAlquiler->TabIndex = 22;
			// 
			// textBoxDniSocioBajaAlquiler
			// 
			this->textBoxDniSocioBajaAlquiler->Location = System::Drawing::Point(246, 59);
			this->textBoxDniSocioBajaAlquiler->Name = L"textBoxDniSocioBajaAlquiler";
			this->textBoxDniSocioBajaAlquiler->Size = System::Drawing::Size(100, 20);
			this->textBoxDniSocioBajaAlquiler->TabIndex = 21;
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->Location = System::Drawing::Point(130, 96);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(87, 13);
			this->label64->TabIndex = 20;
			this->label64->Text = L"Id de la bicicleta:";
			// 
			// tabCAlquiler
			// 
			this->tabCAlquiler->Controls->Add(this->txtConsultaAlquiler);
			this->tabCAlquiler->Controls->Add(this->btnConsultaAlquiler);
			this->tabCAlquiler->Controls->Add(this->label65);
			this->tabCAlquiler->Location = System::Drawing::Point(4, 22);
			this->tabCAlquiler->Name = L"tabCAlquiler";
			this->tabCAlquiler->Size = System::Drawing::Size(531, 387);
			this->tabCAlquiler->TabIndex = 2;
			this->tabCAlquiler->Text = L"Consulta";
			this->tabCAlquiler->UseVisualStyleBackColor = true;
			// 
			// txtConsultaAlquiler
			// 
			this->txtConsultaAlquiler->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtConsultaAlquiler->Location = System::Drawing::Point(13, 97);
			this->txtConsultaAlquiler->Multiline = true;
			this->txtConsultaAlquiler->Name = L"txtConsultaAlquiler";
			this->txtConsultaAlquiler->ReadOnly = true;
			this->txtConsultaAlquiler->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txtConsultaAlquiler->Size = System::Drawing::Size(494, 261);
			this->txtConsultaAlquiler->TabIndex = 24;
			// 
			// btnConsultaAlquiler
			// 
			this->btnConsultaAlquiler->Location = System::Drawing::Point(384, 22);
			this->btnConsultaAlquiler->Name = L"btnConsultaAlquiler";
			this->btnConsultaAlquiler->Size = System::Drawing::Size(123, 43);
			this->btnConsultaAlquiler->TabIndex = 5;
			this->btnConsultaAlquiler->Text = L"Consultar";
			this->btnConsultaAlquiler->UseVisualStyleBackColor = true;
			this->btnConsultaAlquiler->Click += gcnew System::EventHandler(this, &Form1::btnConsultaAlquiler_Click);
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->Location = System::Drawing::Point(24, 37);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(201, 13);
			this->label65->TabIndex = 3;
			this->label65->Text = L"Consulta de todos los alquileres actuales:";
			// 
			// tabBicicletas
			// 
			this->tabBicicletas->Controls->Add(this->tabControl2);
			this->tabBicicletas->Location = System::Drawing::Point(4, 22);
			this->tabBicicletas->Name = L"tabBicicletas";
			this->tabBicicletas->Padding = System::Windows::Forms::Padding(3);
			this->tabBicicletas->Size = System::Drawing::Size(546, 419);
			this->tabBicicletas->TabIndex = 1;
			this->tabBicicletas->Text = L"Bicicletas";
			this->tabBicicletas->UseVisualStyleBackColor = true;
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabAltaAlquiler);
			this->tabControl2->Controls->Add(this->tabBajaAlquiler);
			this->tabControl2->Controls->Add(this->tabConsultaAlquiler);
			this->tabControl2->Controls->Add(this->tabModificacionAlquiler);
			this->tabControl2->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->tabControl2->Location = System::Drawing::Point(0, 6);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(540, 410);
			this->tabControl2->TabIndex = 0;
			// 
			// tabAltaAlquiler
			// 
			this->tabAltaAlquiler->Controls->Add(this->lblIdBicicletaAlta);
			this->tabAltaAlquiler->Controls->Add(this->txtPrecioPorDia);
			this->tabAltaAlquiler->Controls->Add(this->btCancelar);
			this->tabAltaAlquiler->Controls->Add(this->btAltaBici);
			this->tabAltaAlquiler->Controls->Add(this->comboBox1);
			this->tabAltaAlquiler->Controls->Add(this->comboBoxTipoBiciAlta);
			this->tabAltaAlquiler->Controls->Add(this->comboBoxTamBiciAlta);
			this->tabAltaAlquiler->Controls->Add(this->label6);
			this->tabAltaAlquiler->Controls->Add(this->label5);
			this->tabAltaAlquiler->Controls->Add(this->label4);
			this->tabAltaAlquiler->Controls->Add(this->label3);
			this->tabAltaAlquiler->Controls->Add(this->label2);
			this->tabAltaAlquiler->Location = System::Drawing::Point(4, 22);
			this->tabAltaAlquiler->Name = L"tabAltaAlquiler";
			this->tabAltaAlquiler->Padding = System::Windows::Forms::Padding(3);
			this->tabAltaAlquiler->Size = System::Drawing::Size(532, 384);
			this->tabAltaAlquiler->TabIndex = 0;
			this->tabAltaAlquiler->Text = L"Alta";
			this->tabAltaAlquiler->UseVisualStyleBackColor = true;
			// 
			// lblIdBicicletaAlta
			// 
			this->lblIdBicicletaAlta->AutoSize = true;
			this->lblIdBicicletaAlta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblIdBicicletaAlta->Location = System::Drawing::Point(122, 32);
			this->lblIdBicicletaAlta->Name = L"lblIdBicicletaAlta";
			this->lblIdBicicletaAlta->Size = System::Drawing::Size(0, 17);
			this->lblIdBicicletaAlta->TabIndex = 11;
			// 
			// txtPrecioPorDia
			// 
			this->txtPrecioPorDia->Location = System::Drawing::Point(125, 121);
			this->txtPrecioPorDia->MaxLength = 4;
			this->txtPrecioPorDia->Name = L"txtPrecioPorDia";
			this->txtPrecioPorDia->Size = System::Drawing::Size(138, 20);
			this->txtPrecioPorDia->TabIndex = 10;
			// 
			// btCancelar
			// 
			this->btCancelar->Location = System::Drawing::Point(286, 271);
			this->btCancelar->Name = L"btCancelar";
			this->btCancelar->Size = System::Drawing::Size(191, 73);
			this->btCancelar->TabIndex = 9;
			this->btCancelar->Text = L"Cancelar";
			this->btCancelar->UseVisualStyleBackColor = true;
			this->btCancelar->Click += gcnew System::EventHandler(this, &Form1::btCancelar_Click);
			// 
			// btAltaBici
			// 
			this->btAltaBici->Location = System::Drawing::Point(41, 271);
			this->btAltaBici->Name = L"btAltaBici";
			this->btAltaBici->Size = System::Drawing::Size(191, 73);
			this->btAltaBici->TabIndex = 8;
			this->btAltaBici->Text = L"Aceptar";
			this->btAltaBici->UseVisualStyleBackColor = true;
			this->btAltaBici->Click += gcnew System::EventHandler(this, &Form1::btAltaBici_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Seleccionar...", L"Disponible", L"En Taller"});
			this->comboBox1->Location = System::Drawing::Point(125, 151);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(138, 21);
			this->comboBox1->TabIndex = 7;
			// 
			// comboBoxTipoBiciAlta
			// 
			this->comboBoxTipoBiciAlta->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxTipoBiciAlta->FormattingEnabled = true;
			this->comboBoxTipoBiciAlta->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Seleccionar...", L"Montaña", L"Carretera", 
				L"Paseo"});
			this->comboBoxTipoBiciAlta->Location = System::Drawing::Point(125, 93);
			this->comboBoxTipoBiciAlta->Name = L"comboBoxTipoBiciAlta";
			this->comboBoxTipoBiciAlta->Size = System::Drawing::Size(139, 21);
			this->comboBoxTipoBiciAlta->TabIndex = 6;
			// 
			// comboBoxTamBiciAlta
			// 
			this->comboBoxTamBiciAlta->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxTamBiciAlta->FormattingEnabled = true;
			this->comboBoxTamBiciAlta->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Seleccionar...", L"Pequeña", L"Mediana", 
				L"Grande"});
			this->comboBoxTamBiciAlta->Location = System::Drawing::Point(125, 61);
			this->comboBoxTamBiciAlta->Name = L"comboBoxTamBiciAlta";
			this->comboBoxTamBiciAlta->Size = System::Drawing::Size(138, 21);
			this->comboBoxTamBiciAlta->TabIndex = 5;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(38, 154);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(43, 13);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Estado:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(38, 126);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(75, 13);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Precio por dia:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(38, 96);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(31, 13);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Tipo:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(38, 64);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(49, 13);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Tamaño:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(38, 35);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Id bicicleta:";
			// 
			// tabBajaAlquiler
			// 
			this->tabBajaAlquiler->Controls->Add(this->btCancelarEliminar);
			this->tabBajaAlquiler->Controls->Add(this->btEliminar);
			this->tabBajaAlquiler->Controls->Add(this->btBuscarBici);
			this->tabBajaAlquiler->Controls->Add(this->txtIdBicicleta);
			this->tabBajaAlquiler->Controls->Add(this->lblMostrarEstado);
			this->tabBajaAlquiler->Controls->Add(this->lblMostrarPrecio);
			this->tabBajaAlquiler->Controls->Add(this->lblMostrarTipo);
			this->tabBajaAlquiler->Controls->Add(this->lblMostrarTamaño);
			this->tabBajaAlquiler->Controls->Add(this->lblEstado);
			this->tabBajaAlquiler->Controls->Add(this->lblPrecio);
			this->tabBajaAlquiler->Controls->Add(this->lblTipo);
			this->tabBajaAlquiler->Controls->Add(this->lblTamaño);
			this->tabBajaAlquiler->Controls->Add(this->lblIdBicicleta);
			this->tabBajaAlquiler->Location = System::Drawing::Point(4, 22);
			this->tabBajaAlquiler->Name = L"tabBajaAlquiler";
			this->tabBajaAlquiler->Padding = System::Windows::Forms::Padding(3);
			this->tabBajaAlquiler->Size = System::Drawing::Size(532, 384);
			this->tabBajaAlquiler->TabIndex = 1;
			this->tabBajaAlquiler->Text = L"Baja";
			this->tabBajaAlquiler->UseVisualStyleBackColor = true;
			// 
			// btCancelarEliminar
			// 
			this->btCancelarEliminar->Enabled = false;
			this->btCancelarEliminar->Location = System::Drawing::Point(377, 295);
			this->btCancelarEliminar->Name = L"btCancelarEliminar";
			this->btCancelarEliminar->Size = System::Drawing::Size(113, 49);
			this->btCancelarEliminar->TabIndex = 12;
			this->btCancelarEliminar->Text = L"Cancelar";
			this->btCancelarEliminar->UseVisualStyleBackColor = true;
			this->btCancelarEliminar->Click += gcnew System::EventHandler(this, &Form1::btCancelarEliminar_Click);
			// 
			// btEliminar
			// 
			this->btEliminar->Enabled = false;
			this->btEliminar->Location = System::Drawing::Point(222, 295);
			this->btEliminar->Name = L"btEliminar";
			this->btEliminar->Size = System::Drawing::Size(115, 48);
			this->btEliminar->TabIndex = 11;
			this->btEliminar->Text = L"Eliminar";
			this->btEliminar->UseVisualStyleBackColor = true;
			this->btEliminar->Click += gcnew System::EventHandler(this, &Form1::btEliminar_Click);
			// 
			// btBuscarBici
			// 
			this->btBuscarBici->Location = System::Drawing::Point(62, 294);
			this->btBuscarBici->Name = L"btBuscarBici";
			this->btBuscarBici->Size = System::Drawing::Size(122, 49);
			this->btBuscarBici->TabIndex = 10;
			this->btBuscarBici->Text = L"Buscar";
			this->btBuscarBici->UseVisualStyleBackColor = true;
			this->btBuscarBici->Click += gcnew System::EventHandler(this, &Form1::btBuscarBici_Click);
			// 
			// txtIdBicicleta
			// 
			this->txtIdBicicleta->Location = System::Drawing::Point(187, 54);
			this->txtIdBicicleta->Name = L"txtIdBicicleta";
			this->txtIdBicicleta->Size = System::Drawing::Size(100, 20);
			this->txtIdBicicleta->TabIndex = 9;
			// 
			// lblMostrarEstado
			// 
			this->lblMostrarEstado->AutoSize = true;
			this->lblMostrarEstado->Location = System::Drawing::Point(184, 172);
			this->lblMostrarEstado->Name = L"lblMostrarEstado";
			this->lblMostrarEstado->Size = System::Drawing::Size(0, 13);
			this->lblMostrarEstado->TabIndex = 8;
			// 
			// lblMostrarPrecio
			// 
			this->lblMostrarPrecio->AutoSize = true;
			this->lblMostrarPrecio->Location = System::Drawing::Point(184, 144);
			this->lblMostrarPrecio->Name = L"lblMostrarPrecio";
			this->lblMostrarPrecio->Size = System::Drawing::Size(0, 13);
			this->lblMostrarPrecio->TabIndex = 7;
			// 
			// lblMostrarTipo
			// 
			this->lblMostrarTipo->AutoSize = true;
			this->lblMostrarTipo->Location = System::Drawing::Point(184, 113);
			this->lblMostrarTipo->Name = L"lblMostrarTipo";
			this->lblMostrarTipo->Size = System::Drawing::Size(0, 13);
			this->lblMostrarTipo->TabIndex = 6;
			// 
			// lblMostrarTamaño
			// 
			this->lblMostrarTamaño->AutoSize = true;
			this->lblMostrarTamaño->Location = System::Drawing::Point(184, 85);
			this->lblMostrarTamaño->Name = L"lblMostrarTamaño";
			this->lblMostrarTamaño->Size = System::Drawing::Size(0, 13);
			this->lblMostrarTamaño->TabIndex = 5;
			// 
			// lblEstado
			// 
			this->lblEstado->AutoSize = true;
			this->lblEstado->Location = System::Drawing::Point(59, 172);
			this->lblEstado->Name = L"lblEstado";
			this->lblEstado->Size = System::Drawing::Size(40, 13);
			this->lblEstado->TabIndex = 4;
			this->lblEstado->Text = L"Estado";
			// 
			// lblPrecio
			// 
			this->lblPrecio->AutoSize = true;
			this->lblPrecio->Location = System::Drawing::Point(59, 144);
			this->lblPrecio->Name = L"lblPrecio";
			this->lblPrecio->Size = System::Drawing::Size(72, 13);
			this->lblPrecio->TabIndex = 3;
			this->lblPrecio->Text = L"Precio por dia";
			// 
			// lblTipo
			// 
			this->lblTipo->AutoSize = true;
			this->lblTipo->Location = System::Drawing::Point(59, 113);
			this->lblTipo->Name = L"lblTipo";
			this->lblTipo->Size = System::Drawing::Size(28, 13);
			this->lblTipo->TabIndex = 2;
			this->lblTipo->Text = L"Tipo";
			// 
			// lblTamaño
			// 
			this->lblTamaño->AutoSize = true;
			this->lblTamaño->Location = System::Drawing::Point(59, 85);
			this->lblTamaño->Name = L"lblTamaño";
			this->lblTamaño->Size = System::Drawing::Size(46, 13);
			this->lblTamaño->TabIndex = 1;
			this->lblTamaño->Text = L"Tamaño";
			// 
			// lblIdBicicleta
			// 
			this->lblIdBicicleta->AutoSize = true;
			this->lblIdBicicleta->Location = System::Drawing::Point(59, 57);
			this->lblIdBicicleta->Name = L"lblIdBicicleta";
			this->lblIdBicicleta->Size = System::Drawing::Size(59, 13);
			this->lblIdBicicleta->TabIndex = 0;
			this->lblIdBicicleta->Text = L"Id Bicicleta";
			// 
			// tabConsultaAlquiler
			// 
			this->tabConsultaAlquiler->Controls->Add(this->btCancelarConsBici);
			this->tabConsultaAlquiler->Controls->Add(this->ddlEstadoConsBici);
			this->tabConsultaAlquiler->Controls->Add(this->ddlTipoConsBici);
			this->tabConsultaAlquiler->Controls->Add(this->ddlTamanyioConsBici);
			this->tabConsultaAlquiler->Controls->Add(this->label33);
			this->tabConsultaAlquiler->Controls->Add(this->label27);
			this->tabConsultaAlquiler->Controls->Add(this->label26);
			this->tabConsultaAlquiler->Controls->Add(this->btConsultaBicis);
			this->tabConsultaAlquiler->Controls->Add(this->panelConsultaAlquiler);
			this->tabConsultaAlquiler->Controls->Add(this->label7);
			this->tabConsultaAlquiler->Location = System::Drawing::Point(4, 22);
			this->tabConsultaAlquiler->Name = L"tabConsultaAlquiler";
			this->tabConsultaAlquiler->Size = System::Drawing::Size(532, 384);
			this->tabConsultaAlquiler->TabIndex = 2;
			this->tabConsultaAlquiler->Text = L"Consulta";
			this->tabConsultaAlquiler->UseVisualStyleBackColor = true;
			// 
			// btCancelarConsBici
			// 
			this->btCancelarConsBici->Location = System::Drawing::Point(375, 86);
			this->btCancelarConsBici->Name = L"btCancelarConsBici";
			this->btCancelarConsBici->Size = System::Drawing::Size(138, 33);
			this->btCancelarConsBici->TabIndex = 10;
			this->btCancelarConsBici->Text = L"Cancelar";
			this->btCancelarConsBici->UseVisualStyleBackColor = true;
			this->btCancelarConsBici->Click += gcnew System::EventHandler(this, &Form1::btCancelarConsBici_Click);
			// 
			// ddlEstadoConsBici
			// 
			this->ddlEstadoConsBici->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->ddlEstadoConsBici->FormattingEnabled = true;
			this->ddlEstadoConsBici->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Seleccionar...", L"Disponible", L"Alquilada", 
				L"En Taller"});
			this->ddlEstadoConsBici->Location = System::Drawing::Point(85, 98);
			this->ddlEstadoConsBici->Name = L"ddlEstadoConsBici";
			this->ddlEstadoConsBici->Size = System::Drawing::Size(121, 21);
			this->ddlEstadoConsBici->TabIndex = 9;
			// 
			// ddlTipoConsBici
			// 
			this->ddlTipoConsBici->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->ddlTipoConsBici->FormattingEnabled = true;
			this->ddlTipoConsBici->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Seleccionar...", L"Montaña", L"Carretera", 
				L"Paseo"});
			this->ddlTipoConsBici->Location = System::Drawing::Point(85, 71);
			this->ddlTipoConsBici->Name = L"ddlTipoConsBici";
			this->ddlTipoConsBici->Size = System::Drawing::Size(121, 21);
			this->ddlTipoConsBici->TabIndex = 8;
			// 
			// ddlTamanyioConsBici
			// 
			this->ddlTamanyioConsBici->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->ddlTamanyioConsBici->FormattingEnabled = true;
			this->ddlTamanyioConsBici->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Seleccionar...", L"Pequeña", L"Mediana", 
				L"Grande"});
			this->ddlTamanyioConsBici->Location = System::Drawing::Point(85, 42);
			this->ddlTamanyioConsBici->Name = L"ddlTamanyioConsBici";
			this->ddlTamanyioConsBici->Size = System::Drawing::Size(121, 21);
			this->ddlTamanyioConsBici->TabIndex = 7;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(19, 104);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(40, 13);
			this->label33->TabIndex = 6;
			this->label33->Text = L"Estado";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(19, 79);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(28, 13);
			this->label27->TabIndex = 5;
			this->label27->Text = L"Tipo";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(19, 51);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(46, 13);
			this->label26->TabIndex = 4;
			this->label26->Text = L"Tamaño";
			// 
			// btConsultaBicis
			// 
			this->btConsultaBicis->Location = System::Drawing::Point(375, 41);
			this->btConsultaBicis->Name = L"btConsultaBicis";
			this->btConsultaBicis->Size = System::Drawing::Size(138, 33);
			this->btConsultaBicis->TabIndex = 3;
			this->btConsultaBicis->Text = L"Consultar";
			this->btConsultaBicis->UseVisualStyleBackColor = true;
			this->btConsultaBicis->Click += gcnew System::EventHandler(this, &Form1::btConsultaBicis_Click);
			// 
			// panelConsultaAlquiler
			// 
			this->panelConsultaAlquiler->BackColor = System::Drawing::Color::Snow;
			this->panelConsultaAlquiler->Controls->Add(this->txtConsultaBici);
			this->panelConsultaAlquiler->Location = System::Drawing::Point(19, 145);
			this->panelConsultaAlquiler->Name = L"panelConsultaAlquiler";
			this->panelConsultaAlquiler->Size = System::Drawing::Size(494, 225);
			this->panelConsultaAlquiler->TabIndex = 2;
			// 
			// txtConsultaBici
			// 
			this->txtConsultaBici->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtConsultaBici->Location = System::Drawing::Point(0, 0);
			this->txtConsultaBici->Multiline = true;
			this->txtConsultaBici->Name = L"txtConsultaBici";
			this->txtConsultaBici->ReadOnly = true;
			this->txtConsultaBici->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txtConsultaBici->Size = System::Drawing::Size(494, 225);
			this->txtConsultaBici->TabIndex = 0;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(16, 21);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(147, 13);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Consulta de las bicicletas por:";
			// 
			// tabModificacionAlquiler
			// 
			this->tabModificacionAlquiler->Controls->Add(this->txtIdBiciMod);
			this->tabModificacionAlquiler->Controls->Add(this->btBuscarBiciMod);
			this->tabModificacionAlquiler->Controls->Add(this->txtPrecioBiciMod);
			this->tabModificacionAlquiler->Controls->Add(this->btCancelarMod);
			this->tabModificacionAlquiler->Controls->Add(this->btModificarBiciMod);
			this->tabModificacionAlquiler->Controls->Add(this->ddlEstadoBiciMod);
			this->tabModificacionAlquiler->Controls->Add(this->ddlTipoBiciMod);
			this->tabModificacionAlquiler->Controls->Add(this->ddlTamañoBiciMod);
			this->tabModificacionAlquiler->Controls->Add(this->label8);
			this->tabModificacionAlquiler->Controls->Add(this->label23);
			this->tabModificacionAlquiler->Controls->Add(this->label24);
			this->tabModificacionAlquiler->Controls->Add(this->label25);
			this->tabModificacionAlquiler->Controls->Add(this->lblIdBiciMod);
			this->tabModificacionAlquiler->Location = System::Drawing::Point(4, 22);
			this->tabModificacionAlquiler->Name = L"tabModificacionAlquiler";
			this->tabModificacionAlquiler->Size = System::Drawing::Size(532, 384);
			this->tabModificacionAlquiler->TabIndex = 3;
			this->tabModificacionAlquiler->Text = L"Modificacion";
			this->tabModificacionAlquiler->UseVisualStyleBackColor = true;
			// 
			// txtIdBiciMod
			// 
			this->txtIdBiciMod->Location = System::Drawing::Point(134, 35);
			this->txtIdBiciMod->Name = L"txtIdBiciMod";
			this->txtIdBiciMod->Size = System::Drawing::Size(100, 20);
			this->txtIdBiciMod->TabIndex = 23;
			// 
			// btBuscarBiciMod
			// 
			this->btBuscarBiciMod->Location = System::Drawing::Point(24, 303);
			this->btBuscarBiciMod->Name = L"btBuscarBiciMod";
			this->btBuscarBiciMod->Size = System::Drawing::Size(141, 44);
			this->btBuscarBiciMod->TabIndex = 22;
			this->btBuscarBiciMod->Text = L"Buscar";
			this->btBuscarBiciMod->UseVisualStyleBackColor = true;
			this->btBuscarBiciMod->Click += gcnew System::EventHandler(this, &Form1::btBuscarBiciMod_Click);
			// 
			// txtPrecioBiciMod
			// 
			this->txtPrecioBiciMod->Enabled = false;
			this->txtPrecioBiciMod->Location = System::Drawing::Point(134, 124);
			this->txtPrecioBiciMod->MaxLength = 4;
			this->txtPrecioBiciMod->Name = L"txtPrecioBiciMod";
			this->txtPrecioBiciMod->Size = System::Drawing::Size(138, 20);
			this->txtPrecioBiciMod->TabIndex = 21;
			// 
			// btCancelarMod
			// 
			this->btCancelarMod->Enabled = false;
			this->btCancelarMod->Location = System::Drawing::Point(356, 303);
			this->btCancelarMod->Name = L"btCancelarMod";
			this->btCancelarMod->Size = System::Drawing::Size(148, 44);
			this->btCancelarMod->TabIndex = 20;
			this->btCancelarMod->Text = L"Cancelar";
			this->btCancelarMod->UseVisualStyleBackColor = true;
			this->btCancelarMod->Click += gcnew System::EventHandler(this, &Form1::btCancelarMod_Click);
			// 
			// btModificarBiciMod
			// 
			this->btModificarBiciMod->Enabled = false;
			this->btModificarBiciMod->Location = System::Drawing::Point(189, 303);
			this->btModificarBiciMod->Name = L"btModificarBiciMod";
			this->btModificarBiciMod->Size = System::Drawing::Size(143, 44);
			this->btModificarBiciMod->TabIndex = 19;
			this->btModificarBiciMod->Text = L"Modificar";
			this->btModificarBiciMod->UseVisualStyleBackColor = true;
			this->btModificarBiciMod->Click += gcnew System::EventHandler(this, &Form1::btModificarBiciMod_Click);
			// 
			// ddlEstadoBiciMod
			// 
			this->ddlEstadoBiciMod->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->ddlEstadoBiciMod->Enabled = false;
			this->ddlEstadoBiciMod->FormattingEnabled = true;
			this->ddlEstadoBiciMod->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Seleccionar...", L"Disponible", L"Alquilada", 
				L"En Taller"});
			this->ddlEstadoBiciMod->Location = System::Drawing::Point(134, 154);
			this->ddlEstadoBiciMod->Name = L"ddlEstadoBiciMod";
			this->ddlEstadoBiciMod->Size = System::Drawing::Size(138, 21);
			this->ddlEstadoBiciMod->TabIndex = 18;
			// 
			// ddlTipoBiciMod
			// 
			this->ddlTipoBiciMod->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->ddlTipoBiciMod->Enabled = false;
			this->ddlTipoBiciMod->FormattingEnabled = true;
			this->ddlTipoBiciMod->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Seleccionar...", L"Montaña", L"Carretera", 
				L"Paseo"});
			this->ddlTipoBiciMod->Location = System::Drawing::Point(134, 96);
			this->ddlTipoBiciMod->Name = L"ddlTipoBiciMod";
			this->ddlTipoBiciMod->Size = System::Drawing::Size(139, 21);
			this->ddlTipoBiciMod->TabIndex = 17;
			// 
			// ddlTamañoBiciMod
			// 
			this->ddlTamañoBiciMod->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->ddlTamañoBiciMod->Enabled = false;
			this->ddlTamañoBiciMod->FormattingEnabled = true;
			this->ddlTamañoBiciMod->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Seleccionar...", L"Pequeña", L"Mediana", 
				L"Grande"});
			this->ddlTamañoBiciMod->Location = System::Drawing::Point(134, 64);
			this->ddlTamañoBiciMod->Name = L"ddlTamañoBiciMod";
			this->ddlTamañoBiciMod->Size = System::Drawing::Size(138, 21);
			this->ddlTamañoBiciMod->TabIndex = 16;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(47, 157);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(43, 13);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Estado:";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(47, 129);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(75, 13);
			this->label23->TabIndex = 14;
			this->label23->Text = L"Precio por dia:";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(47, 99);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(31, 13);
			this->label24->TabIndex = 13;
			this->label24->Text = L"Tipo:";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(47, 67);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(49, 13);
			this->label25->TabIndex = 12;
			this->label25->Text = L"Tamaño:";
			// 
			// lblIdBiciMod
			// 
			this->lblIdBiciMod->AutoSize = true;
			this->lblIdBiciMod->Location = System::Drawing::Point(47, 38);
			this->lblIdBiciMod->Name = L"lblIdBiciMod";
			this->lblIdBiciMod->Size = System::Drawing::Size(61, 13);
			this->lblIdBiciMod->TabIndex = 11;
			this->lblIdBiciMod->Text = L"Id bicicleta:";
			// 
			// tabSocios
			// 
			this->tabSocios->Controls->Add(this->tabControl3);
			this->tabSocios->Location = System::Drawing::Point(4, 22);
			this->tabSocios->Name = L"tabSocios";
			this->tabSocios->Size = System::Drawing::Size(546, 419);
			this->tabSocios->TabIndex = 2;
			this->tabSocios->Text = L"Socios";
			this->tabSocios->UseVisualStyleBackColor = true;
			// 
			// tabControl3
			// 
			this->tabControl3->Controls->Add(this->tabAltaSocios);
			this->tabControl3->Controls->Add(this->tabBajaSocios);
			this->tabControl3->Controls->Add(this->tabConsultaSocios);
			this->tabControl3->Controls->Add(this->tabModificacionSocios);
			this->tabControl3->Location = System::Drawing::Point(0, 3);
			this->tabControl3->Name = L"tabControl3";
			this->tabControl3->SelectedIndex = 0;
			this->tabControl3->Size = System::Drawing::Size(545, 415);
			this->tabControl3->TabIndex = 0;
			// 
			// tabAltaSocios
			// 
			this->tabAltaSocios->Controls->Add(this->txtTlfAltaSocio);
			this->tabAltaSocios->Controls->Add(this->txtDireccionAltaSocio);
			this->tabAltaSocios->Controls->Add(this->txtApellidosAltaSocio);
			this->tabAltaSocios->Controls->Add(this->txtNombreAltaSocio);
			this->tabAltaSocios->Controls->Add(this->txtDniAltaSocio);
			this->tabAltaSocios->Controls->Add(this->lblIdSocioAlta);
			this->tabAltaSocios->Controls->Add(this->btCancelarAltaSocio);
			this->tabAltaSocios->Controls->Add(this->btAceptarAltaSocio);
			this->tabAltaSocios->Controls->Add(this->label14);
			this->tabAltaSocios->Controls->Add(this->label13);
			this->tabAltaSocios->Controls->Add(this->label12);
			this->tabAltaSocios->Controls->Add(this->label11);
			this->tabAltaSocios->Controls->Add(this->label10);
			this->tabAltaSocios->Controls->Add(this->label9);
			this->tabAltaSocios->Location = System::Drawing::Point(4, 22);
			this->tabAltaSocios->Name = L"tabAltaSocios";
			this->tabAltaSocios->Padding = System::Windows::Forms::Padding(3);
			this->tabAltaSocios->Size = System::Drawing::Size(537, 389);
			this->tabAltaSocios->TabIndex = 0;
			this->tabAltaSocios->Text = L"Alta";
			this->tabAltaSocios->UseVisualStyleBackColor = true;
			// 
			// txtTlfAltaSocio
			// 
			this->txtTlfAltaSocio->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txtTlfAltaSocio->Location = System::Drawing::Point(120, 187);
			this->txtTlfAltaSocio->Name = L"txtTlfAltaSocio";
			this->txtTlfAltaSocio->Size = System::Drawing::Size(143, 20);
			this->txtTlfAltaSocio->TabIndex = 19;
			// 
			// txtDireccionAltaSocio
			// 
			this->txtDireccionAltaSocio->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txtDireccionAltaSocio->Location = System::Drawing::Point(120, 155);
			this->txtDireccionAltaSocio->Name = L"txtDireccionAltaSocio";
			this->txtDireccionAltaSocio->Size = System::Drawing::Size(143, 20);
			this->txtDireccionAltaSocio->TabIndex = 18;
			// 
			// txtApellidosAltaSocio
			// 
			this->txtApellidosAltaSocio->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txtApellidosAltaSocio->Location = System::Drawing::Point(120, 129);
			this->txtApellidosAltaSocio->Name = L"txtApellidosAltaSocio";
			this->txtApellidosAltaSocio->Size = System::Drawing::Size(143, 20);
			this->txtApellidosAltaSocio->TabIndex = 17;
			// 
			// txtNombreAltaSocio
			// 
			this->txtNombreAltaSocio->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txtNombreAltaSocio->Location = System::Drawing::Point(120, 101);
			this->txtNombreAltaSocio->Name = L"txtNombreAltaSocio";
			this->txtNombreAltaSocio->Size = System::Drawing::Size(143, 20);
			this->txtNombreAltaSocio->TabIndex = 16;
			// 
			// txtDniAltaSocio
			// 
			this->txtDniAltaSocio->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txtDniAltaSocio->Location = System::Drawing::Point(120, 70);
			this->txtDniAltaSocio->MaxLength = 10;
			this->txtDniAltaSocio->Name = L"txtDniAltaSocio";
			this->txtDniAltaSocio->Size = System::Drawing::Size(143, 20);
			this->txtDniAltaSocio->TabIndex = 15;
			// 
			// lblIdSocioAlta
			// 
			this->lblIdSocioAlta->AutoSize = true;
			this->lblIdSocioAlta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblIdSocioAlta->Location = System::Drawing::Point(117, 43);
			this->lblIdSocioAlta->Name = L"lblIdSocioAlta";
			this->lblIdSocioAlta->Size = System::Drawing::Size(0, 17);
			this->lblIdSocioAlta->TabIndex = 14;
			// 
			// btCancelarAltaSocio
			// 
			this->btCancelarAltaSocio->Location = System::Drawing::Point(295, 283);
			this->btCancelarAltaSocio->Name = L"btCancelarAltaSocio";
			this->btCancelarAltaSocio->Size = System::Drawing::Size(189, 63);
			this->btCancelarAltaSocio->TabIndex = 13;
			this->btCancelarAltaSocio->Text = L"Cancelar";
			this->btCancelarAltaSocio->UseVisualStyleBackColor = true;
			this->btCancelarAltaSocio->Click += gcnew System::EventHandler(this, &Form1::btCancelarAltaSocio_Click);
			// 
			// btAceptarAltaSocio
			// 
			this->btAceptarAltaSocio->Location = System::Drawing::Point(49, 283);
			this->btAceptarAltaSocio->Name = L"btAceptarAltaSocio";
			this->btAceptarAltaSocio->Size = System::Drawing::Size(189, 63);
			this->btAceptarAltaSocio->TabIndex = 11;
			this->btAceptarAltaSocio->Text = L"Aceptar";
			this->btAceptarAltaSocio->UseVisualStyleBackColor = true;
			this->btAceptarAltaSocio->Click += gcnew System::EventHandler(this, &Form1::btAceptarAltaSocio_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(46, 194);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(52, 13);
			this->label14->TabIndex = 5;
			this->label14->Text = L"Telefono:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(45, 164);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(55, 13);
			this->label13->TabIndex = 4;
			this->label13->Text = L"Direccion:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(45, 136);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(52, 13);
			this->label12->TabIndex = 3;
			this->label12->Text = L"Apellidos:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(45, 108);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(47, 13);
			this->label11->TabIndex = 2;
			this->label11->Text = L"Nombre:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(46, 78);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(38, 13);
			this->label10->TabIndex = 1;
			this->label10->Text = L"D.N.I.:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(46, 46);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(49, 13);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Id Socio:";
			// 
			// tabBajaSocios
			// 
			this->tabBajaSocios->Controls->Add(this->btCancelarBajaCliente);
			this->tabBajaSocios->Controls->Add(this->btEliminarBajaCliente);
			this->tabBajaSocios->Controls->Add(this->btBuscarBajaCliente);
			this->tabBajaSocios->Controls->Add(this->txtDniBajaCliente);
			this->tabBajaSocios->Controls->Add(this->lblTlfBajaCliente);
			this->tabBajaSocios->Controls->Add(this->lblDireccionBajaCliente);
			this->tabBajaSocios->Controls->Add(this->lblApellidosBajaCliente);
			this->tabBajaSocios->Controls->Add(this->lblNombreBajaCliente);
			this->tabBajaSocios->Controls->Add(this->label47);
			this->tabBajaSocios->Controls->Add(this->label48);
			this->tabBajaSocios->Controls->Add(this->label49);
			this->tabBajaSocios->Controls->Add(this->label50);
			this->tabBajaSocios->Controls->Add(this->label51);
			this->tabBajaSocios->Location = System::Drawing::Point(4, 22);
			this->tabBajaSocios->Name = L"tabBajaSocios";
			this->tabBajaSocios->Padding = System::Windows::Forms::Padding(3);
			this->tabBajaSocios->Size = System::Drawing::Size(537, 389);
			this->tabBajaSocios->TabIndex = 1;
			this->tabBajaSocios->Text = L"Baja";
			this->tabBajaSocios->UseVisualStyleBackColor = true;
			// 
			// btCancelarBajaCliente
			// 
			this->btCancelarBajaCliente->Enabled = false;
			this->btCancelarBajaCliente->Location = System::Drawing::Point(371, 290);
			this->btCancelarBajaCliente->Name = L"btCancelarBajaCliente";
			this->btCancelarBajaCliente->Size = System::Drawing::Size(113, 49);
			this->btCancelarBajaCliente->TabIndex = 25;
			this->btCancelarBajaCliente->Text = L"Cancelar";
			this->btCancelarBajaCliente->UseVisualStyleBackColor = true;
			this->btCancelarBajaCliente->Click += gcnew System::EventHandler(this, &Form1::btCancelarBajaCliente_Click);
			// 
			// btEliminarBajaCliente
			// 
			this->btEliminarBajaCliente->Enabled = false;
			this->btEliminarBajaCliente->Location = System::Drawing::Point(216, 290);
			this->btEliminarBajaCliente->Name = L"btEliminarBajaCliente";
			this->btEliminarBajaCliente->Size = System::Drawing::Size(115, 48);
			this->btEliminarBajaCliente->TabIndex = 24;
			this->btEliminarBajaCliente->Text = L"Eliminar";
			this->btEliminarBajaCliente->UseVisualStyleBackColor = true;
			this->btEliminarBajaCliente->Click += gcnew System::EventHandler(this, &Form1::btEliminarBajaCliente_Click);
			// 
			// btBuscarBajaCliente
			// 
			this->btBuscarBajaCliente->Location = System::Drawing::Point(56, 289);
			this->btBuscarBajaCliente->Name = L"btBuscarBajaCliente";
			this->btBuscarBajaCliente->Size = System::Drawing::Size(122, 49);
			this->btBuscarBajaCliente->TabIndex = 23;
			this->btBuscarBajaCliente->Text = L"Buscar";
			this->btBuscarBajaCliente->UseVisualStyleBackColor = true;
			this->btBuscarBajaCliente->Click += gcnew System::EventHandler(this, &Form1::btBuscarBajaCliente_Click);
			// 
			// txtDniBajaCliente
			// 
			this->txtDniBajaCliente->Location = System::Drawing::Point(181, 49);
			this->txtDniBajaCliente->MaxLength = 10;
			this->txtDniBajaCliente->Name = L"txtDniBajaCliente";
			this->txtDniBajaCliente->Size = System::Drawing::Size(117, 20);
			this->txtDniBajaCliente->TabIndex = 22;
			// 
			// lblTlfBajaCliente
			// 
			this->lblTlfBajaCliente->AutoSize = true;
			this->lblTlfBajaCliente->Location = System::Drawing::Point(178, 167);
			this->lblTlfBajaCliente->Name = L"lblTlfBajaCliente";
			this->lblTlfBajaCliente->Size = System::Drawing::Size(0, 13);
			this->lblTlfBajaCliente->TabIndex = 21;
			// 
			// lblDireccionBajaCliente
			// 
			this->lblDireccionBajaCliente->AutoSize = true;
			this->lblDireccionBajaCliente->Location = System::Drawing::Point(178, 139);
			this->lblDireccionBajaCliente->Name = L"lblDireccionBajaCliente";
			this->lblDireccionBajaCliente->Size = System::Drawing::Size(0, 13);
			this->lblDireccionBajaCliente->TabIndex = 20;
			// 
			// lblApellidosBajaCliente
			// 
			this->lblApellidosBajaCliente->AutoSize = true;
			this->lblApellidosBajaCliente->Location = System::Drawing::Point(178, 108);
			this->lblApellidosBajaCliente->Name = L"lblApellidosBajaCliente";
			this->lblApellidosBajaCliente->Size = System::Drawing::Size(0, 13);
			this->lblApellidosBajaCliente->TabIndex = 19;
			// 
			// lblNombreBajaCliente
			// 
			this->lblNombreBajaCliente->AutoSize = true;
			this->lblNombreBajaCliente->Location = System::Drawing::Point(178, 80);
			this->lblNombreBajaCliente->Name = L"lblNombreBajaCliente";
			this->lblNombreBajaCliente->Size = System::Drawing::Size(0, 13);
			this->lblNombreBajaCliente->TabIndex = 18;
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Location = System::Drawing::Point(53, 167);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(49, 13);
			this->label47->TabIndex = 17;
			this->label47->Text = L"Teléfono";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Location = System::Drawing::Point(53, 139);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(52, 13);
			this->label48->TabIndex = 16;
			this->label48->Text = L"Direccion";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Location = System::Drawing::Point(53, 108);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(49, 13);
			this->label49->TabIndex = 15;
			this->label49->Text = L"Apellidos";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Location = System::Drawing::Point(53, 80);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(44, 13);
			this->label50->TabIndex = 14;
			this->label50->Text = L"Nombre";
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Location = System::Drawing::Point(53, 52);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(61, 13);
			this->label51->TabIndex = 13;
			this->label51->Text = L"DNI Cliente";
			// 
			// tabConsultaSocios
			// 
			this->tabConsultaSocios->Controls->Add(this->txtMostrarConsultaSocio);
			this->tabConsultaSocios->Controls->Add(this->btConsultarSocio);
			this->tabConsultaSocios->Controls->Add(this->btCancelarConsultaSocio);
			this->tabConsultaSocios->Controls->Add(this->label45);
			this->tabConsultaSocios->Location = System::Drawing::Point(4, 22);
			this->tabConsultaSocios->Name = L"tabConsultaSocios";
			this->tabConsultaSocios->Size = System::Drawing::Size(537, 389);
			this->tabConsultaSocios->TabIndex = 2;
			this->tabConsultaSocios->Text = L"Consulta";
			this->tabConsultaSocios->UseVisualStyleBackColor = true;
			// 
			// txtMostrarConsultaSocio
			// 
			this->txtMostrarConsultaSocio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtMostrarConsultaSocio->Location = System::Drawing::Point(23, 107);
			this->txtMostrarConsultaSocio->Multiline = true;
			this->txtMostrarConsultaSocio->Name = L"txtMostrarConsultaSocio";
			this->txtMostrarConsultaSocio->ReadOnly = true;
			this->txtMostrarConsultaSocio->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txtMostrarConsultaSocio->Size = System::Drawing::Size(494, 261);
			this->txtMostrarConsultaSocio->TabIndex = 23;
			// 
			// btConsultarSocio
			// 
			this->btConsultarSocio->Location = System::Drawing::Point(379, 10);
			this->btConsultarSocio->Name = L"btConsultarSocio";
			this->btConsultarSocio->Size = System::Drawing::Size(138, 33);
			this->btConsultarSocio->TabIndex = 22;
			this->btConsultarSocio->Text = L"Consultar";
			this->btConsultarSocio->UseVisualStyleBackColor = true;
			this->btConsultarSocio->Click += gcnew System::EventHandler(this, &Form1::btConsultarSocio_Click);
			// 
			// btCancelarConsultaSocio
			// 
			this->btCancelarConsultaSocio->Location = System::Drawing::Point(379, 58);
			this->btCancelarConsultaSocio->Name = L"btCancelarConsultaSocio";
			this->btCancelarConsultaSocio->Size = System::Drawing::Size(138, 33);
			this->btCancelarConsultaSocio->TabIndex = 20;
			this->btCancelarConsultaSocio->Text = L"Cancelar";
			this->btCancelarConsultaSocio->UseVisualStyleBackColor = true;
			this->btCancelarConsultaSocio->Click += gcnew System::EventHandler(this, &Form1::btCancelarConsultaSocio_Click);
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(20, 20);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(115, 13);
			this->label45->TabIndex = 11;
			this->label45->Text = L"Consulta de las socios:";
			// 
			// tabModificacionSocios
			// 
			this->tabModificacionSocios->Controls->Add(this->lblIdSocioModificacionCliente);
			this->tabModificacionSocios->Controls->Add(this->btBuscarModificacionCliente);
			this->tabModificacionSocios->Controls->Add(this->btCancelarModificacionCliente);
			this->tabModificacionSocios->Controls->Add(this->btModificarModificacionCliente);
			this->tabModificacionSocios->Controls->Add(this->txtTlfModificacionCliente);
			this->tabModificacionSocios->Controls->Add(this->txtDireccionModificacionCliente);
			this->tabModificacionSocios->Controls->Add(this->txtApellidosModificacionCliente);
			this->tabModificacionSocios->Controls->Add(this->txtNombreModificacionCliente);
			this->tabModificacionSocios->Controls->Add(this->txtDniModificacionCliente);
			this->tabModificacionSocios->Controls->Add(this->label37);
			this->tabModificacionSocios->Controls->Add(this->label44);
			this->tabModificacionSocios->Controls->Add(this->label67);
			this->tabModificacionSocios->Controls->Add(this->label74);
			this->tabModificacionSocios->Controls->Add(this->label75);
			this->tabModificacionSocios->Controls->Add(this->label76);
			this->tabModificacionSocios->Controls->Add(this->label77);
			this->tabModificacionSocios->Location = System::Drawing::Point(4, 22);
			this->tabModificacionSocios->Name = L"tabModificacionSocios";
			this->tabModificacionSocios->Size = System::Drawing::Size(537, 389);
			this->tabModificacionSocios->TabIndex = 3;
			this->tabModificacionSocios->Text = L"Modificacion";
			this->tabModificacionSocios->UseVisualStyleBackColor = true;
			// 
			// lblIdSocioModificacionCliente
			// 
			this->lblIdSocioModificacionCliente->AutoSize = true;
			this->lblIdSocioModificacionCliente->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblIdSocioModificacionCliente->Location = System::Drawing::Point(121, 76);
			this->lblIdSocioModificacionCliente->Name = L"lblIdSocioModificacionCliente";
			this->lblIdSocioModificacionCliente->Size = System::Drawing::Size(0, 17);
			this->lblIdSocioModificacionCliente->TabIndex = 35;
			// 
			// btBuscarModificacionCliente
			// 
			this->btBuscarModificacionCliente->Location = System::Drawing::Point(31, 311);
			this->btBuscarModificacionCliente->Name = L"btBuscarModificacionCliente";
			this->btBuscarModificacionCliente->Size = System::Drawing::Size(141, 44);
			this->btBuscarModificacionCliente->TabIndex = 34;
			this->btBuscarModificacionCliente->Text = L"Buscar";
			this->btBuscarModificacionCliente->UseVisualStyleBackColor = true;
			this->btBuscarModificacionCliente->Click += gcnew System::EventHandler(this, &Form1::btBuscarModificacionCliente_Click);
			// 
			// btCancelarModificacionCliente
			// 
			this->btCancelarModificacionCliente->Enabled = false;
			this->btCancelarModificacionCliente->Location = System::Drawing::Point(363, 311);
			this->btCancelarModificacionCliente->Name = L"btCancelarModificacionCliente";
			this->btCancelarModificacionCliente->Size = System::Drawing::Size(148, 44);
			this->btCancelarModificacionCliente->TabIndex = 33;
			this->btCancelarModificacionCliente->Text = L"Cancelar";
			this->btCancelarModificacionCliente->UseVisualStyleBackColor = true;
			this->btCancelarModificacionCliente->Click += gcnew System::EventHandler(this, &Form1::btCancelarModificacionCliente_Click);
			// 
			// btModificarModificacionCliente
			// 
			this->btModificarModificacionCliente->Enabled = false;
			this->btModificarModificacionCliente->Location = System::Drawing::Point(196, 311);
			this->btModificarModificacionCliente->Name = L"btModificarModificacionCliente";
			this->btModificarModificacionCliente->Size = System::Drawing::Size(143, 44);
			this->btModificarModificacionCliente->TabIndex = 32;
			this->btModificarModificacionCliente->Text = L"Modificar";
			this->btModificarModificacionCliente->UseVisualStyleBackColor = true;
			this->btModificarModificacionCliente->Click += gcnew System::EventHandler(this, &Form1::btModificarModificacionCliente_Click);
			// 
			// txtTlfModificacionCliente
			// 
			this->txtTlfModificacionCliente->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txtTlfModificacionCliente->Enabled = false;
			this->txtTlfModificacionCliente->Location = System::Drawing::Point(122, 189);
			this->txtTlfModificacionCliente->Name = L"txtTlfModificacionCliente";
			this->txtTlfModificacionCliente->Size = System::Drawing::Size(143, 20);
			this->txtTlfModificacionCliente->TabIndex = 31;
			// 
			// txtDireccionModificacionCliente
			// 
			this->txtDireccionModificacionCliente->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txtDireccionModificacionCliente->Enabled = false;
			this->txtDireccionModificacionCliente->Location = System::Drawing::Point(122, 157);
			this->txtDireccionModificacionCliente->Name = L"txtDireccionModificacionCliente";
			this->txtDireccionModificacionCliente->Size = System::Drawing::Size(143, 20);
			this->txtDireccionModificacionCliente->TabIndex = 30;
			// 
			// txtApellidosModificacionCliente
			// 
			this->txtApellidosModificacionCliente->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txtApellidosModificacionCliente->Enabled = false;
			this->txtApellidosModificacionCliente->Location = System::Drawing::Point(122, 131);
			this->txtApellidosModificacionCliente->Name = L"txtApellidosModificacionCliente";
			this->txtApellidosModificacionCliente->Size = System::Drawing::Size(143, 20);
			this->txtApellidosModificacionCliente->TabIndex = 29;
			// 
			// txtNombreModificacionCliente
			// 
			this->txtNombreModificacionCliente->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txtNombreModificacionCliente->Enabled = false;
			this->txtNombreModificacionCliente->Location = System::Drawing::Point(122, 103);
			this->txtNombreModificacionCliente->Name = L"txtNombreModificacionCliente";
			this->txtNombreModificacionCliente->Size = System::Drawing::Size(143, 20);
			this->txtNombreModificacionCliente->TabIndex = 28;
			// 
			// txtDniModificacionCliente
			// 
			this->txtDniModificacionCliente->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txtDniModificacionCliente->Location = System::Drawing::Point(122, 51);
			this->txtDniModificacionCliente->MaxLength = 10;
			this->txtDniModificacionCliente->Name = L"txtDniModificacionCliente";
			this->txtDniModificacionCliente->Size = System::Drawing::Size(143, 20);
			this->txtDniModificacionCliente->TabIndex = 27;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label37->Location = System::Drawing::Point(119, 45);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(0, 17);
			this->label37->TabIndex = 26;
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(48, 196);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(52, 13);
			this->label44->TabIndex = 25;
			this->label44->Text = L"Telefono:";
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->Location = System::Drawing::Point(47, 166);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(55, 13);
			this->label67->TabIndex = 24;
			this->label67->Text = L"Direccion:";
			// 
			// label74
			// 
			this->label74->AutoSize = true;
			this->label74->Location = System::Drawing::Point(47, 138);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(52, 13);
			this->label74->TabIndex = 23;
			this->label74->Text = L"Apellidos:";
			// 
			// label75
			// 
			this->label75->AutoSize = true;
			this->label75->Location = System::Drawing::Point(47, 110);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(47, 13);
			this->label75->TabIndex = 22;
			this->label75->Text = L"Nombre:";
			// 
			// label76
			// 
			this->label76->AutoSize = true;
			this->label76->Location = System::Drawing::Point(47, 58);
			this->label76->Name = L"label76";
			this->label76->Size = System::Drawing::Size(38, 13);
			this->label76->TabIndex = 21;
			this->label76->Text = L"D.N.I.:";
			// 
			// label77
			// 
			this->label77->AutoSize = true;
			this->label77->Location = System::Drawing::Point(47, 84);
			this->label77->Name = L"label77";
			this->label77->Size = System::Drawing::Size(49, 13);
			this->label77->TabIndex = 20;
			this->label77->Text = L"Id Socio:";
			// 
			// tabIncidencias
			// 
			this->tabIncidencias->Controls->Add(this->tabControl4);
			this->tabIncidencias->Location = System::Drawing::Point(4, 22);
			this->tabIncidencias->Name = L"tabIncidencias";
			this->tabIncidencias->Size = System::Drawing::Size(546, 419);
			this->tabIncidencias->TabIndex = 3;
			this->tabIncidencias->Text = L"Incidencias";
			this->tabIncidencias->UseVisualStyleBackColor = true;
			// 
			// tabControl4
			// 
			this->tabControl4->Controls->Add(this->tabAltaIncidencias);
			this->tabControl4->Controls->Add(this->tabBajaIncidencias);
			this->tabControl4->Controls->Add(this->tabConsultaIncidencias);
			this->tabControl4->Controls->Add(this->tabModificacionIncidencias);
			this->tabControl4->Location = System::Drawing::Point(0, 6);
			this->tabControl4->Name = L"tabControl4";
			this->tabControl4->SelectedIndex = 0;
			this->tabControl4->Size = System::Drawing::Size(545, 412);
			this->tabControl4->TabIndex = 0;
			// 
			// tabAltaIncidencias
			// 
			this->tabAltaIncidencias->Controls->Add(this->btnAceptAltaInci);
			this->tabAltaIncidencias->Controls->Add(this->dtpCreaAltaInci);
			this->tabAltaIncidencias->Controls->Add(this->cbTipoAltaInci);
			this->tabAltaIncidencias->Controls->Add(this->txtNombreAltaInci);
			this->tabAltaIncidencias->Controls->Add(this->label16);
			this->tabAltaIncidencias->Controls->Add(this->label17);
			this->tabAltaIncidencias->Controls->Add(this->lblIdInciAlta);
			this->tabAltaIncidencias->Controls->Add(this->cbEstadAltaInci);
			this->tabAltaIncidencias->Controls->Add(this->txtConcepAltaInci);
			this->tabAltaIncidencias->Controls->Add(this->txtImporAltaInci);
			this->tabAltaIncidencias->Controls->Add(this->txtIdBiciAltaInci);
			this->tabAltaIncidencias->Controls->Add(this->label22);
			this->tabAltaIncidencias->Controls->Add(this->label21);
			this->tabAltaIncidencias->Controls->Add(this->label20);
			this->tabAltaIncidencias->Controls->Add(this->label19);
			this->tabAltaIncidencias->Controls->Add(this->label58);
			this->tabAltaIncidencias->Controls->Add(this->label79);
			this->tabAltaIncidencias->Location = System::Drawing::Point(4, 22);
			this->tabAltaIncidencias->Name = L"tabAltaIncidencias";
			this->tabAltaIncidencias->Padding = System::Windows::Forms::Padding(3);
			this->tabAltaIncidencias->Size = System::Drawing::Size(537, 386);
			this->tabAltaIncidencias->TabIndex = 0;
			this->tabAltaIncidencias->Text = L"Alta";
			this->tabAltaIncidencias->UseVisualStyleBackColor = true;
			// 
			// btnAceptAltaInci
			// 
			this->btnAceptAltaInci->Location = System::Drawing::Point(166, 290);
			this->btnAceptAltaInci->Name = L"btnAceptAltaInci";
			this->btnAceptAltaInci->Size = System::Drawing::Size(169, 62);
			this->btnAceptAltaInci->TabIndex = 62;
			this->btnAceptAltaInci->Text = L"Aceptar";
			this->btnAceptAltaInci->UseVisualStyleBackColor = true;
			this->btnAceptAltaInci->Click += gcnew System::EventHandler(this, &Form1::btnAceptAltaInci_Click);
			// 
			// dtpCreaAltaInci
			// 
			this->dtpCreaAltaInci->Location = System::Drawing::Point(150, 57);
			this->dtpCreaAltaInci->Name = L"dtpCreaAltaInci";
			this->dtpCreaAltaInci->Size = System::Drawing::Size(100, 20);
			this->dtpCreaAltaInci->TabIndex = 61;
			// 
			// cbTipoAltaInci
			// 
			this->cbTipoAltaInci->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbTipoAltaInci->FormattingEnabled = true;
			this->cbTipoAltaInci->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Seleccionar...", L"Bicicleta", L"Empleado"});
			this->cbTipoAltaInci->Location = System::Drawing::Point(373, 28);
			this->cbTipoAltaInci->Name = L"cbTipoAltaInci";
			this->cbTipoAltaInci->Size = System::Drawing::Size(126, 21);
			this->cbTipoAltaInci->TabIndex = 60;
			this->cbTipoAltaInci->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::cbTipoAltaInci_SelectedIndexChanged);
			// 
			// txtNombreAltaInci
			// 
			this->txtNombreAltaInci->Location = System::Drawing::Point(399, 157);
			this->txtNombreAltaInci->Name = L"txtNombreAltaInci";
			this->txtNombreAltaInci->Size = System::Drawing::Size(100, 20);
			this->txtNombreAltaInci->TabIndex = 59;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(287, 160);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(112, 13);
			this->label16->TabIndex = 58;
			this->label16->Text = L"Nombre de Empleado:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(259, 31);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(97, 13);
			this->label17->TabIndex = 57;
			this->label17->Text = L"Tipo de incidencia:";
			// 
			// lblIdInciAlta
			// 
			this->lblIdInciAlta->AutoSize = true;
			this->lblIdInciAlta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblIdInciAlta->Location = System::Drawing::Point(147, 25);
			this->lblIdInciAlta->Name = L"lblIdInciAlta";
			this->lblIdInciAlta->Size = System::Drawing::Size(0, 17);
			this->lblIdInciAlta->TabIndex = 56;
			// 
			// cbEstadAltaInci
			// 
			this->cbEstadAltaInci->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbEstadAltaInci->FormattingEnabled = true;
			this->cbEstadAltaInci->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Seleccionar...", L"Resuelta", L"En proceso"});
			this->cbEstadAltaInci->Location = System::Drawing::Point(150, 228);
			this->cbEstadAltaInci->Name = L"cbEstadAltaInci";
			this->cbEstadAltaInci->Size = System::Drawing::Size(100, 21);
			this->cbEstadAltaInci->TabIndex = 55;
			// 
			// txtConcepAltaInci
			// 
			this->txtConcepAltaInci->Location = System::Drawing::Point(150, 128);
			this->txtConcepAltaInci->Name = L"txtConcepAltaInci";
			this->txtConcepAltaInci->Size = System::Drawing::Size(100, 20);
			this->txtConcepAltaInci->TabIndex = 54;
			// 
			// txtImporAltaInci
			// 
			this->txtImporAltaInci->Location = System::Drawing::Point(150, 191);
			this->txtImporAltaInci->Name = L"txtImporAltaInci";
			this->txtImporAltaInci->Size = System::Drawing::Size(100, 20);
			this->txtImporAltaInci->TabIndex = 53;
			// 
			// txtIdBiciAltaInci
			// 
			this->txtIdBiciAltaInci->Location = System::Drawing::Point(150, 160);
			this->txtIdBiciAltaInci->Name = L"txtIdBiciAltaInci";
			this->txtIdBiciAltaInci->Size = System::Drawing::Size(100, 20);
			this->txtIdBiciAltaInci->TabIndex = 52;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(38, 231);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(43, 13);
			this->label22->TabIndex = 50;
			this->label22->Text = L"Estado:";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(38, 194);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(45, 13);
			this->label21->TabIndex = 49;
			this->label21->Text = L"Importe:";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(38, 131);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(59, 13);
			this->label20->TabIndex = 48;
			this->label20->Text = L"Concepto: ";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(38, 163);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(38, 13);
			this->label19->TabIndex = 47;
			this->label19->Text = L"Id bici:";
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->Location = System::Drawing::Point(38, 57);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(84, 13);
			this->label58->TabIndex = 46;
			this->label58->Text = L"Fecha creación:";
			// 
			// label79
			// 
			this->label79->AutoSize = true;
			this->label79->Location = System::Drawing::Point(38, 28);
			this->label79->Name = L"label79";
			this->label79->Size = System::Drawing::Size(74, 13);
			this->label79->TabIndex = 45;
			this->label79->Text = L"Id Incidencia: ";
			// 
			// tabBajaIncidencias
			// 
			this->tabBajaIncidencias->Controls->Add(this->lblTipoBajaIncidencia);
			this->tabBajaIncidencias->Controls->Add(this->label83);
			this->tabBajaIncidencias->Controls->Add(this->lblNombreBajaIncidencia);
			this->tabBajaIncidencias->Controls->Add(this->label81);
			this->tabBajaIncidencias->Controls->Add(this->lblFResolucionIncidenciaBaja);
			this->tabBajaIncidencias->Controls->Add(this->label15);
			this->tabBajaIncidencias->Controls->Add(this->btnCancelarIncidenciasBaja);
			this->tabBajaIncidencias->Controls->Add(this->btnEliminarIncidenciasBaja);
			this->tabBajaIncidencias->Controls->Add(this->btnBuscarIncidenciasBaja);
			this->tabBajaIncidencias->Controls->Add(this->txtIdIncidenciaBaja);
			this->tabBajaIncidencias->Controls->Add(this->lblFCreacionIncidenciaBaja);
			this->tabBajaIncidencias->Controls->Add(this->lblConceptoIncidenciaBaja);
			this->tabBajaIncidencias->Controls->Add(this->lblImporteIncidenciaBaja);
			this->tabBajaIncidencias->Controls->Add(this->lblIdBiciIncidenciaBaja);
			this->tabBajaIncidencias->Controls->Add(this->label53);
			this->tabBajaIncidencias->Controls->Add(this->label54);
			this->tabBajaIncidencias->Controls->Add(this->label55);
			this->tabBajaIncidencias->Controls->Add(this->label56);
			this->tabBajaIncidencias->Controls->Add(this->label57);
			this->tabBajaIncidencias->Location = System::Drawing::Point(4, 22);
			this->tabBajaIncidencias->Name = L"tabBajaIncidencias";
			this->tabBajaIncidencias->Padding = System::Windows::Forms::Padding(3);
			this->tabBajaIncidencias->Size = System::Drawing::Size(537, 386);
			this->tabBajaIncidencias->TabIndex = 1;
			this->tabBajaIncidencias->Text = L"Baja";
			this->tabBajaIncidencias->UseVisualStyleBackColor = true;
			// 
			// lblTipoBajaIncidencia
			// 
			this->lblTipoBajaIncidencia->AutoSize = true;
			this->lblTipoBajaIncidencia->Location = System::Drawing::Point(411, 53);
			this->lblTipoBajaIncidencia->Name = L"lblTipoBajaIncidencia";
			this->lblTipoBajaIncidencia->Size = System::Drawing::Size(0, 13);
			this->lblTipoBajaIncidencia->TabIndex = 60;
			// 
			// label83
			// 
			this->label83->AutoSize = true;
			this->label83->Location = System::Drawing::Point(337, 53);
			this->label83->Name = L"label83";
			this->label83->Size = System::Drawing::Size(35, 13);
			this->label83->TabIndex = 59;
			this->label83->Text = L"TIPO:";
			// 
			// lblNombreBajaIncidencia
			// 
			this->lblNombreBajaIncidencia->AutoSize = true;
			this->lblNombreBajaIncidencia->Location = System::Drawing::Point(330, 136);
			this->lblNombreBajaIncidencia->Name = L"lblNombreBajaIncidencia";
			this->lblNombreBajaIncidencia->Size = System::Drawing::Size(0, 13);
			this->lblNombreBajaIncidencia->TabIndex = 58;
			// 
			// label81
			// 
			this->label81->AutoSize = true;
			this->label81->Location = System::Drawing::Point(300, 105);
			this->label81->Name = L"label81";
			this->label81->Size = System::Drawing::Size(111, 13);
			this->label81->TabIndex = 57;
			this->label81->Text = L"Nombre de empleado:";
			// 
			// lblFResolucionIncidenciaBaja
			// 
			this->lblFResolucionIncidenciaBaja->AutoSize = true;
			this->lblFResolucionIncidenciaBaja->Location = System::Drawing::Point(247, 229);
			this->lblFResolucionIncidenciaBaja->Name = L"lblFResolucionIncidenciaBaja";
			this->lblFResolucionIncidenciaBaja->Size = System::Drawing::Size(0, 13);
			this->lblFResolucionIncidenciaBaja->TabIndex = 56;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(122, 229);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(106, 13);
			this->label15->TabIndex = 55;
			this->label15->Text = L"Fecha de resolución:";
			// 
			// btnCancelarIncidenciasBaja
			// 
			this->btnCancelarIncidenciasBaja->Enabled = false;
			this->btnCancelarIncidenciasBaja->Location = System::Drawing::Point(370, 292);
			this->btnCancelarIncidenciasBaja->Name = L"btnCancelarIncidenciasBaja";
			this->btnCancelarIncidenciasBaja->Size = System::Drawing::Size(113, 49);
			this->btnCancelarIncidenciasBaja->TabIndex = 54;
			this->btnCancelarIncidenciasBaja->Text = L"Cancelar";
			this->btnCancelarIncidenciasBaja->UseVisualStyleBackColor = true;
			this->btnCancelarIncidenciasBaja->Click += gcnew System::EventHandler(this, &Form1::btnCancelarIncidenciasBaja_Click);
			// 
			// btnEliminarIncidenciasBaja
			// 
			this->btnEliminarIncidenciasBaja->Enabled = false;
			this->btnEliminarIncidenciasBaja->Location = System::Drawing::Point(215, 292);
			this->btnEliminarIncidenciasBaja->Name = L"btnEliminarIncidenciasBaja";
			this->btnEliminarIncidenciasBaja->Size = System::Drawing::Size(115, 48);
			this->btnEliminarIncidenciasBaja->TabIndex = 53;
			this->btnEliminarIncidenciasBaja->Text = L"Eliminar";
			this->btnEliminarIncidenciasBaja->UseVisualStyleBackColor = true;
			this->btnEliminarIncidenciasBaja->Click += gcnew System::EventHandler(this, &Form1::btnEliminarIncidenciasBaja_Click);
			// 
			// btnBuscarIncidenciasBaja
			// 
			this->btnBuscarIncidenciasBaja->Location = System::Drawing::Point(55, 291);
			this->btnBuscarIncidenciasBaja->Name = L"btnBuscarIncidenciasBaja";
			this->btnBuscarIncidenciasBaja->Size = System::Drawing::Size(122, 49);
			this->btnBuscarIncidenciasBaja->TabIndex = 52;
			this->btnBuscarIncidenciasBaja->Text = L"Buscar";
			this->btnBuscarIncidenciasBaja->UseVisualStyleBackColor = true;
			this->btnBuscarIncidenciasBaja->Click += gcnew System::EventHandler(this, &Form1::btnBuscarIncidenciasBaja_Click);
			// 
			// txtIdIncidenciaBaja
			// 
			this->txtIdIncidenciaBaja->Location = System::Drawing::Point(181, 46);
			this->txtIdIncidenciaBaja->MaxLength = 10;
			this->txtIdIncidenciaBaja->Name = L"txtIdIncidenciaBaja";
			this->txtIdIncidenciaBaja->Size = System::Drawing::Size(117, 20);
			this->txtIdIncidenciaBaja->TabIndex = 51;
			// 
			// lblFCreacionIncidenciaBaja
			// 
			this->lblFCreacionIncidenciaBaja->AutoSize = true;
			this->lblFCreacionIncidenciaBaja->Location = System::Drawing::Point(247, 200);
			this->lblFCreacionIncidenciaBaja->Name = L"lblFCreacionIncidenciaBaja";
			this->lblFCreacionIncidenciaBaja->Size = System::Drawing::Size(0, 13);
			this->lblFCreacionIncidenciaBaja->TabIndex = 50;
			// 
			// lblConceptoIncidenciaBaja
			// 
			this->lblConceptoIncidenciaBaja->AutoSize = true;
			this->lblConceptoIncidenciaBaja->Location = System::Drawing::Point(247, 172);
			this->lblConceptoIncidenciaBaja->Name = L"lblConceptoIncidenciaBaja";
			this->lblConceptoIncidenciaBaja->Size = System::Drawing::Size(0, 13);
			this->lblConceptoIncidenciaBaja->TabIndex = 49;
			// 
			// lblImporteIncidenciaBaja
			// 
			this->lblImporteIncidenciaBaja->AutoSize = true;
			this->lblImporteIncidenciaBaja->Location = System::Drawing::Point(178, 133);
			this->lblImporteIncidenciaBaja->Name = L"lblImporteIncidenciaBaja";
			this->lblImporteIncidenciaBaja->Size = System::Drawing::Size(0, 13);
			this->lblImporteIncidenciaBaja->TabIndex = 48;
			// 
			// lblIdBiciIncidenciaBaja
			// 
			this->lblIdBiciIncidenciaBaja->AutoSize = true;
			this->lblIdBiciIncidenciaBaja->Location = System::Drawing::Point(178, 105);
			this->lblIdBiciIncidenciaBaja->Name = L"lblIdBiciIncidenciaBaja";
			this->lblIdBiciIncidenciaBaja->Size = System::Drawing::Size(0, 13);
			this->lblIdBiciIncidenciaBaja->TabIndex = 47;
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Location = System::Drawing::Point(121, 200);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(99, 13);
			this->label53->TabIndex = 46;
			this->label53->Text = L"Fecha de creación:";
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Location = System::Drawing::Point(122, 172);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(56, 13);
			this->label54->TabIndex = 45;
			this->label54->Text = L"Concepto:";
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Location = System::Drawing::Point(53, 133);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(45, 13);
			this->label55->TabIndex = 44;
			this->label55->Text = L"Importe:";
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Location = System::Drawing::Point(53, 105);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(39, 13);
			this->label56->TabIndex = 43;
			this->label56->Text = L"Id Bici:";
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Location = System::Drawing::Point(53, 49);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(71, 13);
			this->label57->TabIndex = 42;
			this->label57->Text = L"Id Incidencia:";
			// 
			// tabConsultaIncidencias
			// 
			this->tabConsultaIncidencias->Controls->Add(this->btConsultaIncidencias);
			this->tabConsultaIncidencias->Controls->Add(this->txtConsultaIncidencia);
			this->tabConsultaIncidencias->Controls->Add(this->label66);
			this->tabConsultaIncidencias->Location = System::Drawing::Point(4, 22);
			this->tabConsultaIncidencias->Name = L"tabConsultaIncidencias";
			this->tabConsultaIncidencias->Size = System::Drawing::Size(537, 386);
			this->tabConsultaIncidencias->TabIndex = 2;
			this->tabConsultaIncidencias->Text = L"Consulta";
			this->tabConsultaIncidencias->UseVisualStyleBackColor = true;
			// 
			// btConsultaIncidencias
			// 
			this->btConsultaIncidencias->Location = System::Drawing::Point(386, 13);
			this->btConsultaIncidencias->Name = L"btConsultaIncidencias";
			this->btConsultaIncidencias->Size = System::Drawing::Size(126, 47);
			this->btConsultaIncidencias->TabIndex = 2;
			this->btConsultaIncidencias->Text = L"Aceptar";
			this->btConsultaIncidencias->UseVisualStyleBackColor = true;
			this->btConsultaIncidencias->Click += gcnew System::EventHandler(this, &Form1::btConsultaIncidencias_Click);
			// 
			// txtConsultaIncidencia
			// 
			this->txtConsultaIncidencia->Location = System::Drawing::Point(25, 78);
			this->txtConsultaIncidencia->Multiline = true;
			this->txtConsultaIncidencia->Name = L"txtConsultaIncidencia";
			this->txtConsultaIncidencia->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txtConsultaIncidencia->Size = System::Drawing::Size(487, 288);
			this->txtConsultaIncidencia->TabIndex = 1;
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->Location = System::Drawing::Point(22, 30);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(160, 13);
			this->label66->TabIndex = 0;
			this->label66->Text = L"Listado de todas las incidencias:";
			// 
			// tabModificacionIncidencias
			// 
			this->tabModificacionIncidencias->Controls->Add(this->btAcep);
			this->tabModificacionIncidencias->Controls->Add(this->btCanc);
			this->tabModificacionIncidencias->Controls->Add(this->btMod);
			this->tabModificacionIncidencias->Controls->Add(this->txtFechaMod);
			this->tabModificacionIncidencias->Controls->Add(this->txtIdIncidenciaModInci);
			this->tabModificacionIncidencias->Controls->Add(this->comboBoxEstadoModInci);
			this->tabModificacionIncidencias->Controls->Add(this->txtConceptoModInci);
			this->tabModificacionIncidencias->Controls->Add(this->txtImporteModInci);
			this->tabModificacionIncidencias->Controls->Add(this->txtIdBiciModInci);
			this->tabModificacionIncidencias->Controls->Add(this->label68);
			this->tabModificacionIncidencias->Controls->Add(this->label69);
			this->tabModificacionIncidencias->Controls->Add(this->label70);
			this->tabModificacionIncidencias->Controls->Add(this->label71);
			this->tabModificacionIncidencias->Controls->Add(this->label72);
			this->tabModificacionIncidencias->Controls->Add(this->label73);
			this->tabModificacionIncidencias->Location = System::Drawing::Point(4, 22);
			this->tabModificacionIncidencias->Name = L"tabModificacionIncidencias";
			this->tabModificacionIncidencias->Size = System::Drawing::Size(537, 386);
			this->tabModificacionIncidencias->TabIndex = 3;
			this->tabModificacionIncidencias->Text = L"Modificacion";
			this->tabModificacionIncidencias->UseVisualStyleBackColor = true;
			// 
			// btAcep
			// 
			this->btAcep->Location = System::Drawing::Point(25, 313);
			this->btAcep->Name = L"btAcep";
			this->btAcep->Size = System::Drawing::Size(141, 44);
			this->btAcep->TabIndex = 67;
			this->btAcep->Text = L"Buscar";
			this->btAcep->UseVisualStyleBackColor = true;
			this->btAcep->Click += gcnew System::EventHandler(this, &Form1::btAcep_Click);
			// 
			// btCanc
			// 
			this->btCanc->Enabled = false;
			this->btCanc->Location = System::Drawing::Point(368, 313);
			this->btCanc->Name = L"btCanc";
			this->btCanc->Size = System::Drawing::Size(148, 44);
			this->btCanc->TabIndex = 66;
			this->btCanc->Text = L"Cancelar";
			this->btCanc->UseVisualStyleBackColor = true;
			this->btCanc->Click += gcnew System::EventHandler(this, &Form1::btCanc_Click);
			// 
			// btMod
			// 
			this->btMod->Enabled = false;
			this->btMod->Location = System::Drawing::Point(200, 313);
			this->btMod->Name = L"btMod";
			this->btMod->Size = System::Drawing::Size(143, 44);
			this->btMod->TabIndex = 65;
			this->btMod->Text = L"Modificar";
			this->btMod->UseVisualStyleBackColor = true;
			this->btMod->Click += gcnew System::EventHandler(this, &Form1::btMod_Click);
			// 
			// txtFechaMod
			// 
			this->txtFechaMod->Location = System::Drawing::Point(170, 112);
			this->txtFechaMod->Name = L"txtFechaMod";
			this->txtFechaMod->Size = System::Drawing::Size(100, 20);
			this->txtFechaMod->TabIndex = 47;
			// 
			// txtIdIncidenciaModInci
			// 
			this->txtIdIncidenciaModInci->Location = System::Drawing::Point(170, 42);
			this->txtIdIncidenciaModInci->Name = L"txtIdIncidenciaModInci";
			this->txtIdIncidenciaModInci->Size = System::Drawing::Size(100, 20);
			this->txtIdIncidenciaModInci->TabIndex = 46;
			// 
			// comboBoxEstadoModInci
			// 
			this->comboBoxEstadoModInci->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxEstadoModInci->FormattingEnabled = true;
			this->comboBoxEstadoModInci->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Seleccionar...", L"Resuelta", L"En proceso"});
			this->comboBoxEstadoModInci->Location = System::Drawing::Point(170, 242);
			this->comboBoxEstadoModInci->Name = L"comboBoxEstadoModInci";
			this->comboBoxEstadoModInci->Size = System::Drawing::Size(139, 21);
			this->comboBoxEstadoModInci->TabIndex = 45;
			// 
			// txtConceptoModInci
			// 
			this->txtConceptoModInci->Location = System::Drawing::Point(170, 216);
			this->txtConceptoModInci->Name = L"txtConceptoModInci";
			this->txtConceptoModInci->Size = System::Drawing::Size(100, 20);
			this->txtConceptoModInci->TabIndex = 44;
			// 
			// txtImporteModInci
			// 
			this->txtImporteModInci->Location = System::Drawing::Point(170, 187);
			this->txtImporteModInci->Name = L"txtImporteModInci";
			this->txtImporteModInci->Size = System::Drawing::Size(100, 20);
			this->txtImporteModInci->TabIndex = 43;
			// 
			// txtIdBiciModInci
			// 
			this->txtIdBiciModInci->Location = System::Drawing::Point(170, 156);
			this->txtIdBiciModInci->Name = L"txtIdBiciModInci";
			this->txtIdBiciModInci->Size = System::Drawing::Size(100, 20);
			this->txtIdBiciModInci->TabIndex = 42;
			// 
			// label68
			// 
			this->label68->AutoSize = true;
			this->label68->Location = System::Drawing::Point(58, 245);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(43, 13);
			this->label68->TabIndex = 41;
			this->label68->Text = L"Estado:";
			// 
			// label69
			// 
			this->label69->AutoSize = true;
			this->label69->Location = System::Drawing::Point(58, 190);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(45, 13);
			this->label69->TabIndex = 40;
			this->label69->Text = L"Importe:";
			// 
			// label70
			// 
			this->label70->AutoSize = true;
			this->label70->Location = System::Drawing::Point(58, 219);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(59, 13);
			this->label70->TabIndex = 39;
			this->label70->Text = L"Concepto: ";
			// 
			// label71
			// 
			this->label71->AutoSize = true;
			this->label71->Location = System::Drawing::Point(58, 159);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(38, 13);
			this->label71->TabIndex = 38;
			this->label71->Text = L"Id bici:";
			// 
			// label72
			// 
			this->label72->AutoSize = true;
			this->label72->Location = System::Drawing::Point(48, 112);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(84, 13);
			this->label72->TabIndex = 37;
			this->label72->Text = L"Fecha creación:";
			// 
			// label73
			// 
			this->label73->AutoSize = true;
			this->label73->Location = System::Drawing::Point(58, 42);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(74, 13);
			this->label73->TabIndex = 36;
			this->label73->Text = L"Id Incidencia: ";
			// 
			// tabOfertas
			// 
			this->tabOfertas->Controls->Add(this->tabControl5);
			this->tabOfertas->Location = System::Drawing::Point(4, 22);
			this->tabOfertas->Name = L"tabOfertas";
			this->tabOfertas->Padding = System::Windows::Forms::Padding(3);
			this->tabOfertas->Size = System::Drawing::Size(546, 419);
			this->tabOfertas->TabIndex = 4;
			this->tabOfertas->Text = L"Ofertas";
			this->tabOfertas->UseVisualStyleBackColor = true;
			// 
			// tabControl5
			// 
			this->tabControl5->Controls->Add(this->tabAltaOferta);
			this->tabControl5->Controls->Add(this->tabBajaOferta);
			this->tabControl5->Controls->Add(this->tabConsultaOferta);
			this->tabControl5->Controls->Add(this->tabModificacionOferta);
			this->tabControl5->Location = System::Drawing::Point(1, 1);
			this->tabControl5->Name = L"tabControl5";
			this->tabControl5->SelectedIndex = 0;
			this->tabControl5->Size = System::Drawing::Size(545, 415);
			this->tabControl5->TabIndex = 1;
			// 
			// tabAltaOferta
			// 
			this->tabAltaOferta->Controls->Add(this->txtIdOfertaAlta);
			this->tabAltaOferta->Controls->Add(this->btnCancelarAltaOferta);
			this->tabAltaOferta->Controls->Add(this->btnAceptarAltaOferta);
			this->tabAltaOferta->Controls->Add(this->cBTipoBiciOfertas);
			this->tabAltaOferta->Controls->Add(this->txtDescuentoOfertas);
			this->tabAltaOferta->Controls->Add(this->txtNumAlquileresOfertas);
			this->tabAltaOferta->Controls->Add(this->label28);
			this->tabAltaOferta->Controls->Add(this->label29);
			this->tabAltaOferta->Controls->Add(this->label30);
			this->tabAltaOferta->Controls->Add(this->label31);
			this->tabAltaOferta->Location = System::Drawing::Point(4, 22);
			this->tabAltaOferta->Name = L"tabAltaOferta";
			this->tabAltaOferta->Padding = System::Windows::Forms::Padding(3);
			this->tabAltaOferta->Size = System::Drawing::Size(537, 389);
			this->tabAltaOferta->TabIndex = 0;
			this->tabAltaOferta->Text = L"Alta";
			this->tabAltaOferta->UseVisualStyleBackColor = true;
			// 
			// txtIdOfertaAlta
			// 
			this->txtIdOfertaAlta->AutoSize = true;
			this->txtIdOfertaAlta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtIdOfertaAlta->Location = System::Drawing::Point(152, 40);
			this->txtIdOfertaAlta->Name = L"txtIdOfertaAlta";
			this->txtIdOfertaAlta->Size = System::Drawing::Size(0, 17);
			this->txtIdOfertaAlta->TabIndex = 16;
			// 
			// btnCancelarAltaOferta
			// 
			this->btnCancelarAltaOferta->Location = System::Drawing::Point(299, 270);
			this->btnCancelarAltaOferta->Name = L"btnCancelarAltaOferta";
			this->btnCancelarAltaOferta->Size = System::Drawing::Size(191, 73);
			this->btnCancelarAltaOferta->TabIndex = 15;
			this->btnCancelarAltaOferta->Text = L"Cancelar";
			this->btnCancelarAltaOferta->UseVisualStyleBackColor = true;
			this->btnCancelarAltaOferta->Click += gcnew System::EventHandler(this, &Form1::btnCancelarAltaOferta_Click);
			// 
			// btnAceptarAltaOferta
			// 
			this->btnAceptarAltaOferta->Location = System::Drawing::Point(44, 270);
			this->btnAceptarAltaOferta->Name = L"btnAceptarAltaOferta";
			this->btnAceptarAltaOferta->Size = System::Drawing::Size(191, 73);
			this->btnAceptarAltaOferta->TabIndex = 14;
			this->btnAceptarAltaOferta->Text = L"Aceptar";
			this->btnAceptarAltaOferta->UseVisualStyleBackColor = true;
			this->btnAceptarAltaOferta->Click += gcnew System::EventHandler(this, &Form1::btnAceptarAltaOferta_Click);
			// 
			// cBTipoBiciOfertas
			// 
			this->cBTipoBiciOfertas->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cBTipoBiciOfertas->FormattingEnabled = true;
			this->cBTipoBiciOfertas->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Seleccionar...", L"Montaña", L"Carretera", 
				L"Paseo"});
			this->cBTipoBiciOfertas->Location = System::Drawing::Point(155, 60);
			this->cBTipoBiciOfertas->Name = L"cBTipoBiciOfertas";
			this->cBTipoBiciOfertas->Size = System::Drawing::Size(139, 21);
			this->cBTipoBiciOfertas->TabIndex = 13;
			// 
			// txtDescuentoOfertas
			// 
			this->txtDescuentoOfertas->Location = System::Drawing::Point(155, 129);
			this->txtDescuentoOfertas->Name = L"txtDescuentoOfertas";
			this->txtDescuentoOfertas->Size = System::Drawing::Size(143, 20);
			this->txtDescuentoOfertas->TabIndex = 8;
			// 
			// txtNumAlquileresOfertas
			// 
			this->txtNumAlquileresOfertas->Location = System::Drawing::Point(155, 96);
			this->txtNumAlquileresOfertas->Name = L"txtNumAlquileresOfertas";
			this->txtNumAlquileresOfertas->Size = System::Drawing::Size(143, 20);
			this->txtNumAlquileresOfertas->TabIndex = 7;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(41, 136);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(62, 13);
			this->label28->TabIndex = 3;
			this->label28->Text = L"Descuento:";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(41, 103);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(109, 13);
			this->label29->TabIndex = 2;
			this->label29->Text = L"Numero de alquileres:";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(41, 68);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(48, 13);
			this->label30->TabIndex = 1;
			this->label30->Text = L"Tipo Bici";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(41, 40);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(51, 13);
			this->label31->TabIndex = 0;
			this->label31->Text = L"Id Oferta:";
			// 
			// tabBajaOferta
			// 
			this->tabBajaOferta->Controls->Add(this->btnCancelarBajaOferta);
			this->tabBajaOferta->Controls->Add(this->btnEliminarBajaOferta);
			this->tabBajaOferta->Controls->Add(this->btnBuscarBajaOferta);
			this->tabBajaOferta->Controls->Add(this->txtIdOfertaBaja);
			this->tabBajaOferta->Controls->Add(this->lblDescuentoOfertaBaja);
			this->tabBajaOferta->Controls->Add(this->lblNumAlquileresOfertaBaja);
			this->tabBajaOferta->Controls->Add(this->lblTipoBiciBajaOferta);
			this->tabBajaOferta->Controls->Add(this->label38);
			this->tabBajaOferta->Controls->Add(this->label39);
			this->tabBajaOferta->Controls->Add(this->label40);
			this->tabBajaOferta->Controls->Add(this->label42);
			this->tabBajaOferta->Location = System::Drawing::Point(4, 22);
			this->tabBajaOferta->Name = L"tabBajaOferta";
			this->tabBajaOferta->Padding = System::Windows::Forms::Padding(3);
			this->tabBajaOferta->Size = System::Drawing::Size(537, 389);
			this->tabBajaOferta->TabIndex = 1;
			this->tabBajaOferta->Text = L"Baja";
			this->tabBajaOferta->UseVisualStyleBackColor = true;
			// 
			// btnCancelarBajaOferta
			// 
			this->btnCancelarBajaOferta->Enabled = false;
			this->btnCancelarBajaOferta->Location = System::Drawing::Point(371, 290);
			this->btnCancelarBajaOferta->Name = L"btnCancelarBajaOferta";
			this->btnCancelarBajaOferta->Size = System::Drawing::Size(113, 49);
			this->btnCancelarBajaOferta->TabIndex = 25;
			this->btnCancelarBajaOferta->Text = L"Cancelar";
			this->btnCancelarBajaOferta->UseVisualStyleBackColor = true;
			this->btnCancelarBajaOferta->Click += gcnew System::EventHandler(this, &Form1::btnCancelarBajaOferta_Click);
			// 
			// btnEliminarBajaOferta
			// 
			this->btnEliminarBajaOferta->Enabled = false;
			this->btnEliminarBajaOferta->Location = System::Drawing::Point(216, 290);
			this->btnEliminarBajaOferta->Name = L"btnEliminarBajaOferta";
			this->btnEliminarBajaOferta->Size = System::Drawing::Size(115, 48);
			this->btnEliminarBajaOferta->TabIndex = 24;
			this->btnEliminarBajaOferta->Text = L"Eliminar";
			this->btnEliminarBajaOferta->UseVisualStyleBackColor = true;
			this->btnEliminarBajaOferta->Click += gcnew System::EventHandler(this, &Form1::btnEliminarBajaOferta_Click);
			// 
			// btnBuscarBajaOferta
			// 
			this->btnBuscarBajaOferta->Location = System::Drawing::Point(56, 289);
			this->btnBuscarBajaOferta->Name = L"btnBuscarBajaOferta";
			this->btnBuscarBajaOferta->Size = System::Drawing::Size(122, 49);
			this->btnBuscarBajaOferta->TabIndex = 23;
			this->btnBuscarBajaOferta->Text = L"Buscar";
			this->btnBuscarBajaOferta->UseVisualStyleBackColor = true;
			this->btnBuscarBajaOferta->Click += gcnew System::EventHandler(this, &Form1::btnBuscarBajaOferta_Click);
			// 
			// txtIdOfertaBaja
			// 
			this->txtIdOfertaBaja->Location = System::Drawing::Point(181, 49);
			this->txtIdOfertaBaja->Name = L"txtIdOfertaBaja";
			this->txtIdOfertaBaja->Size = System::Drawing::Size(100, 20);
			this->txtIdOfertaBaja->TabIndex = 22;
			// 
			// lblDescuentoOfertaBaja
			// 
			this->lblDescuentoOfertaBaja->AutoSize = true;
			this->lblDescuentoOfertaBaja->Location = System::Drawing::Point(178, 150);
			this->lblDescuentoOfertaBaja->Name = L"lblDescuentoOfertaBaja";
			this->lblDescuentoOfertaBaja->Size = System::Drawing::Size(0, 13);
			this->lblDescuentoOfertaBaja->TabIndex = 21;
			// 
			// lblNumAlquileresOfertaBaja
			// 
			this->lblNumAlquileresOfertaBaja->AutoSize = true;
			this->lblNumAlquileresOfertaBaja->Location = System::Drawing::Point(178, 114);
			this->lblNumAlquileresOfertaBaja->Name = L"lblNumAlquileresOfertaBaja";
			this->lblNumAlquileresOfertaBaja->Size = System::Drawing::Size(0, 13);
			this->lblNumAlquileresOfertaBaja->TabIndex = 20;
			// 
			// lblTipoBiciBajaOferta
			// 
			this->lblTipoBiciBajaOferta->AutoSize = true;
			this->lblTipoBiciBajaOferta->Location = System::Drawing::Point(178, 79);
			this->lblTipoBiciBajaOferta->Name = L"lblTipoBiciBajaOferta";
			this->lblTipoBiciBajaOferta->Size = System::Drawing::Size(0, 13);
			this->lblTipoBiciBajaOferta->TabIndex = 19;
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(53, 150);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(59, 13);
			this->label38->TabIndex = 17;
			this->label38->Text = L"Descuento";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(53, 114);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(107, 13);
			this->label39->TabIndex = 16;
			this->label39->Text = L"Numero de Alquileres";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(53, 84);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(28, 13);
			this->label40->TabIndex = 15;
			this->label40->Text = L"Tipo";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(53, 52);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(48, 13);
			this->label42->TabIndex = 13;
			this->label42->Text = L"Id Oferta";
			// 
			// tabConsultaOferta
			// 
			this->tabConsultaOferta->Controls->Add(this->btnCancelarConsultaOferta);
			this->tabConsultaOferta->Controls->Add(this->cBTipoBiciConsulta);
			this->tabConsultaOferta->Controls->Add(this->label34);
			this->tabConsultaOferta->Controls->Add(this->btnConsultarOferta);
			this->tabConsultaOferta->Controls->Add(this->panel1);
			this->tabConsultaOferta->Controls->Add(this->label36);
			this->tabConsultaOferta->Location = System::Drawing::Point(4, 22);
			this->tabConsultaOferta->Name = L"tabConsultaOferta";
			this->tabConsultaOferta->Size = System::Drawing::Size(537, 389);
			this->tabConsultaOferta->TabIndex = 2;
			this->tabConsultaOferta->Text = L"Consulta";
			this->tabConsultaOferta->UseVisualStyleBackColor = true;
			// 
			// btnCancelarConsultaOferta
			// 
			this->btnCancelarConsultaOferta->Location = System::Drawing::Point(379, 85);
			this->btnCancelarConsultaOferta->Name = L"btnCancelarConsultaOferta";
			this->btnCancelarConsultaOferta->Size = System::Drawing::Size(138, 33);
			this->btnCancelarConsultaOferta->TabIndex = 20;
			this->btnCancelarConsultaOferta->Text = L"Cancelar";
			this->btnCancelarConsultaOferta->UseVisualStyleBackColor = true;
			this->btnCancelarConsultaOferta->Click += gcnew System::EventHandler(this, &Form1::btnCancelarConsultaOferta_Click);
			// 
			// cBTipoBiciConsulta
			// 
			this->cBTipoBiciConsulta->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cBTipoBiciConsulta->FormattingEnabled = true;
			this->cBTipoBiciConsulta->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Seleccionar...", L"Montaña", L"Carretera", 
				L"Paseo"});
			this->cBTipoBiciConsulta->Location = System::Drawing::Point(110, 47);
			this->cBTipoBiciConsulta->Name = L"cBTipoBiciConsulta";
			this->cBTipoBiciConsulta->Size = System::Drawing::Size(121, 21);
			this->cBTipoBiciConsulta->TabIndex = 18;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(20, 50);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(71, 13);
			this->label34->TabIndex = 15;
			this->label34->Text = L"Tipo Bicicleta";
			// 
			// btnConsultarOferta
			// 
			this->btnConsultarOferta->Location = System::Drawing::Point(379, 40);
			this->btnConsultarOferta->Name = L"btnConsultarOferta";
			this->btnConsultarOferta->Size = System::Drawing::Size(138, 33);
			this->btnConsultarOferta->TabIndex = 13;
			this->btnConsultarOferta->Text = L"Consultar";
			this->btnConsultarOferta->UseVisualStyleBackColor = true;
			this->btnConsultarOferta->Click += gcnew System::EventHandler(this, &Form1::btnConsultarOferta_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Snow;
			this->panel1->Controls->Add(this->txtConsultaOferta);
			this->panel1->Location = System::Drawing::Point(23, 144);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(494, 225);
			this->panel1->TabIndex = 12;
			// 
			// txtConsultaOferta
			// 
			this->txtConsultaOferta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtConsultaOferta->Location = System::Drawing::Point(0, 0);
			this->txtConsultaOferta->Multiline = true;
			this->txtConsultaOferta->Name = L"txtConsultaOferta";
			this->txtConsultaOferta->ReadOnly = true;
			this->txtConsultaOferta->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txtConsultaOferta->Size = System::Drawing::Size(494, 225);
			this->txtConsultaOferta->TabIndex = 0;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(20, 16);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(135, 13);
			this->label36->TabIndex = 11;
			this->label36->Text = L"Consulta de las ofertas por:";
			// 
			// tabModificacionOferta
			// 
			this->tabModificacionOferta->Controls->Add(this->txtNumAlquileresModificacionOferta);
			this->tabModificacionOferta->Controls->Add(this->label32);
			this->tabModificacionOferta->Controls->Add(this->txtIdModificacionOferta);
			this->tabModificacionOferta->Controls->Add(this->btnBuscarModificacionOferta);
			this->tabModificacionOferta->Controls->Add(this->txtDescuentoModificacionOferta);
			this->tabModificacionOferta->Controls->Add(this->btnCancelarModifOferta);
			this->tabModificacionOferta->Controls->Add(this->btnModificarOferta);
			this->tabModificacionOferta->Controls->Add(this->cbTipoBiciModificacionOferta);
			this->tabModificacionOferta->Controls->Add(this->label35);
			this->tabModificacionOferta->Controls->Add(this->label41);
			this->tabModificacionOferta->Controls->Add(this->label43);
			this->tabModificacionOferta->Location = System::Drawing::Point(4, 22);
			this->tabModificacionOferta->Name = L"tabModificacionOferta";
			this->tabModificacionOferta->Size = System::Drawing::Size(537, 389);
			this->tabModificacionOferta->TabIndex = 3;
			this->tabModificacionOferta->Text = L"Modificacion";
			this->tabModificacionOferta->UseVisualStyleBackColor = true;
			// 
			// txtNumAlquileresModificacionOferta
			// 
			this->txtNumAlquileresModificacionOferta->Enabled = false;
			this->txtNumAlquileresModificacionOferta->Location = System::Drawing::Point(138, 97);
			this->txtNumAlquileresModificacionOferta->MaxLength = 4;
			this->txtNumAlquileresModificacionOferta->Name = L"txtNumAlquileresModificacionOferta";
			this->txtNumAlquileresModificacionOferta->Size = System::Drawing::Size(138, 20);
			this->txtNumAlquileresModificacionOferta->TabIndex = 38;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(51, 102);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(83, 13);
			this->label32->TabIndex = 37;
			this->label32->Text = L"Num. Alquileres:";
			// 
			// txtIdModificacionOferta
			// 
			this->txtIdModificacionOferta->Location = System::Drawing::Point(138, 38);
			this->txtIdModificacionOferta->Name = L"txtIdModificacionOferta";
			this->txtIdModificacionOferta->Size = System::Drawing::Size(100, 20);
			this->txtIdModificacionOferta->TabIndex = 36;
			// 
			// btnBuscarModificacionOferta
			// 
			this->btnBuscarModificacionOferta->Location = System::Drawing::Point(33, 306);
			this->btnBuscarModificacionOferta->Name = L"btnBuscarModificacionOferta";
			this->btnBuscarModificacionOferta->Size = System::Drawing::Size(141, 44);
			this->btnBuscarModificacionOferta->TabIndex = 35;
			this->btnBuscarModificacionOferta->Text = L"Buscar";
			this->btnBuscarModificacionOferta->UseVisualStyleBackColor = true;
			this->btnBuscarModificacionOferta->Click += gcnew System::EventHandler(this, &Form1::btnBuscarModificacionOferta_Click);
			// 
			// txtDescuentoModificacionOferta
			// 
			this->txtDescuentoModificacionOferta->Enabled = false;
			this->txtDescuentoModificacionOferta->Location = System::Drawing::Point(138, 127);
			this->txtDescuentoModificacionOferta->MaxLength = 4;
			this->txtDescuentoModificacionOferta->Name = L"txtDescuentoModificacionOferta";
			this->txtDescuentoModificacionOferta->Size = System::Drawing::Size(138, 20);
			this->txtDescuentoModificacionOferta->TabIndex = 34;
			// 
			// btnCancelarModifOferta
			// 
			this->btnCancelarModifOferta->Enabled = false;
			this->btnCancelarModifOferta->Location = System::Drawing::Point(360, 306);
			this->btnCancelarModifOferta->Name = L"btnCancelarModifOferta";
			this->btnCancelarModifOferta->Size = System::Drawing::Size(148, 44);
			this->btnCancelarModifOferta->TabIndex = 33;
			this->btnCancelarModifOferta->Text = L"Cancelar";
			this->btnCancelarModifOferta->UseVisualStyleBackColor = true;
			this->btnCancelarModifOferta->Click += gcnew System::EventHandler(this, &Form1::btnCancelarModifOferta_Click);
			// 
			// btnModificarOferta
			// 
			this->btnModificarOferta->Enabled = false;
			this->btnModificarOferta->Location = System::Drawing::Point(193, 306);
			this->btnModificarOferta->Name = L"btnModificarOferta";
			this->btnModificarOferta->Size = System::Drawing::Size(143, 44);
			this->btnModificarOferta->TabIndex = 32;
			this->btnModificarOferta->Text = L"Modificar";
			this->btnModificarOferta->UseVisualStyleBackColor = true;
			this->btnModificarOferta->Click += gcnew System::EventHandler(this, &Form1::btnModificarOferta_Click);
			// 
			// cbTipoBiciModificacionOferta
			// 
			this->cbTipoBiciModificacionOferta->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbTipoBiciModificacionOferta->Enabled = false;
			this->cbTipoBiciModificacionOferta->FormattingEnabled = true;
			this->cbTipoBiciModificacionOferta->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Seleccionar...", L"Montaña", 
				L"Carretera", L"Paseo"});
			this->cbTipoBiciModificacionOferta->Location = System::Drawing::Point(138, 67);
			this->cbTipoBiciModificacionOferta->Name = L"cbTipoBiciModificacionOferta";
			this->cbTipoBiciModificacionOferta->Size = System::Drawing::Size(138, 21);
			this->cbTipoBiciModificacionOferta->TabIndex = 29;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(51, 132);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(62, 13);
			this->label35->TabIndex = 27;
			this->label35->Text = L"Descuento:";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(51, 70);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(74, 13);
			this->label41->TabIndex = 25;
			this->label41->Text = L"Tipo Bicicleta:";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(51, 41);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(49, 13);
			this->label43->TabIndex = 24;
			this->label43->Text = L"Id oferta:";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->toolStripMenuItem1});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(570, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->guardarToolStripMenuItem});
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(60, 20);
			this->toolStripMenuItem1->Text = L"Archivo";
			// 
			// guardarToolStripMenuItem
			// 
			this->guardarToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"guardarToolStripMenuItem.Image")));
			this->guardarToolStripMenuItem->Name = L"guardarToolStripMenuItem";
			this->guardarToolStripMenuItem->Size = System::Drawing::Size(116, 22);
			this->guardarToolStripMenuItem->Text = L"Guardar";
			this->guardarToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::guardarToolStripMenuItem_Click);
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Location = System::Drawing::Point(130, 66);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(86, 13);
			this->label46->TabIndex = 28;
			this->label46->Text = L"D.N.I del cliente:";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(570, 486);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(586, 524);
			this->MinimumSize = System::Drawing::Size(586, 524);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Aplicacion BIKERENT";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabMenuPrincipal->ResumeLayout(false);
			this->tabMenuPrincipal->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->tabAlquiler->ResumeLayout(false);
			this->tabControl6->ResumeLayout(false);
			this->tabAAlquiler->ResumeLayout(false);
			this->tabAAlquiler->PerformLayout();
			this->tabBAlquiler->ResumeLayout(false);
			this->tabBAlquiler->PerformLayout();
			this->tabCAlquiler->ResumeLayout(false);
			this->tabCAlquiler->PerformLayout();
			this->tabBicicletas->ResumeLayout(false);
			this->tabControl2->ResumeLayout(false);
			this->tabAltaAlquiler->ResumeLayout(false);
			this->tabAltaAlquiler->PerformLayout();
			this->tabBajaAlquiler->ResumeLayout(false);
			this->tabBajaAlquiler->PerformLayout();
			this->tabConsultaAlquiler->ResumeLayout(false);
			this->tabConsultaAlquiler->PerformLayout();
			this->panelConsultaAlquiler->ResumeLayout(false);
			this->panelConsultaAlquiler->PerformLayout();
			this->tabModificacionAlquiler->ResumeLayout(false);
			this->tabModificacionAlquiler->PerformLayout();
			this->tabSocios->ResumeLayout(false);
			this->tabControl3->ResumeLayout(false);
			this->tabAltaSocios->ResumeLayout(false);
			this->tabAltaSocios->PerformLayout();
			this->tabBajaSocios->ResumeLayout(false);
			this->tabBajaSocios->PerformLayout();
			this->tabConsultaSocios->ResumeLayout(false);
			this->tabConsultaSocios->PerformLayout();
			this->tabModificacionSocios->ResumeLayout(false);
			this->tabModificacionSocios->PerformLayout();
			this->tabIncidencias->ResumeLayout(false);
			this->tabControl4->ResumeLayout(false);
			this->tabAltaIncidencias->ResumeLayout(false);
			this->tabAltaIncidencias->PerformLayout();
			this->tabBajaIncidencias->ResumeLayout(false);
			this->tabBajaIncidencias->PerformLayout();
			this->tabConsultaIncidencias->ResumeLayout(false);
			this->tabConsultaIncidencias->PerformLayout();
			this->tabModificacionIncidencias->ResumeLayout(false);
			this->tabModificacionIncidencias->PerformLayout();
			this->tabOfertas->ResumeLayout(false);
			this->tabControl5->ResumeLayout(false);
			this->tabAltaOferta->ResumeLayout(false);
			this->tabAltaOferta->PerformLayout();
			this->tabBajaOferta->ResumeLayout(false);
			this->tabBajaOferta->PerformLayout();
			this->tabConsultaOferta->ResumeLayout(false);
			this->tabConsultaOferta->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->tabModificacionOferta->ResumeLayout(false);
			this->tabModificacionOferta->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		

	void guardar()
	{
		
		ofstream f;
		f.open("BykeRent.bin",ofstream::binary);
		f.write((char *)(&tienda), sizeof(Tienda) );
		f.close();
		
	}

	void cargar()
	{
		if(System::IO::File::Exists("BykeRent.bin"))
		{
			ifstream f;
			f.open("BykeRent.bin",ifstream::binary);
			f.read((char *)(&tienda), sizeof(Tienda));
			f.close();
		}
	}

	string convierteStringAstring ( System::String^ s)
	{
		using namespace System::Runtime::InteropServices;
		return ((char*)(void*)Marshal::StringToHGlobalAnsi(s));

	}

	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			
			//Bici	 
			comboBoxTamBiciAlta->SelectedIndex=0;
			comboBoxTipoBiciAlta->SelectedIndex=0;
			comboBox1->SelectedIndex=0;
			txtPrecioPorDia->Text="";

			ddlEstadoBiciMod->SelectedIndex=0;
			ddlTipoBiciMod->SelectedIndex=0;
			ddlTamañoBiciMod->SelectedIndex=0;

			//OFERTAS//
			cBTipoBiciOfertas->SelectedIndex=0;
			txtNumAlquileresOfertas->Text="";
			txtDescuentoOfertas->Text="";


			//Incidencias
			cbEstadAltaInci->SelectedIndex = 0;
			cbTipoAltaInci->SelectedIndex=0;
			txtIdIncidenciaModInci->Text="";
			txtFechaMod->Text="";
			txtIdBiciModInci->Text="";
			txtImporteModInci->Text="";
			txtConceptoModInci->Text="";
			comboBoxEstadoModInci->SelectedIndex=0;
				
			txtIdIncidenciaModInci->Enabled=true;
			txtFechaMod->Enabled=false;
			txtIdBiciModInci->Enabled=false;
			txtImporteModInci->Enabled=false;
			txtConceptoModInci->Enabled=false;
			comboBoxEstadoModInci->Enabled=false;
			 
			btAcep->Enabled=true;
			btMod->Enabled=false;
			btCanc->Enabled=false;
			
			//cargar();
			Dao::cargar(tienda);
			
			lblIdBicicletaAlta->Text=tienda.dameUltimoRegBici().ToString();
			txtIdOfertaAlta->Text=tienda.dameUltimoRegOferta().ToString();
			lblIdSocioAlta->Text=tienda.dameUltimoCodCliente().ToString();
			lblIdInciAlta->Text=tienda.dameUltimoIdIncidencia().ToString();

			ddlTamanyioConsBici->SelectedIndex=0;
			ddlTipoConsBici->SelectedIndex=0;
			ddlEstadoConsBici->SelectedIndex=0;

			cBTipoBiciConsulta->SelectedIndex=0;

			//Si se duda sobre estas lineas preguntar a Alberto,pero no modificarlas!!
			/*lblIdSocioAlta->Text=(tienda.dameClientes().dameElem(tienda.dameClientes().numElems()-1).idCliente()+1).ToString();
			if(System::Convert::ToInt64(lblIdSocioAlta->Text)>25)
			{
				lblIdSocioAlta->Text="1";
			}*/


		}

	private: System::Void btAltaBici_Click(System::Object^  sender, System::EventArgs^  e) {
				 
				 if(comboBoxTamBiciAlta->SelectedIndex==0)
				 {
					 MessageBox::Show("Debes seleccionar el tamaño de bicicleta","Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);
				 }else if(comboBoxTipoBiciAlta->SelectedIndex==0)
				 {
					 MessageBox::Show("Debes seleccionar el tipo de bicicleta","Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);
				 }
				 else if(txtPrecioPorDia->Text=="")
				 {
					 MessageBox::Show("Debes introducir un precio por dia","Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);
				 }
				 else if(comboBox1->SelectedIndex==0)
				 {
					 MessageBox::Show("Debes seleccionar el estado de la bicicleta","Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);
				 }
				 else
				 {
					 Bicicleta bici;
					 if (comboBoxTamBiciAlta->SelectedIndex==1)
						bici.setTamanyo(Bicicleta::Pequenya);
					else if (comboBoxTamBiciAlta->SelectedIndex==2)
						bici.setTamanyo(Bicicleta::Mediana);
					else if (comboBoxTamBiciAlta->SelectedIndex==3)
						bici.setTamanyo(Bicicleta::Grande);

					if (comboBoxTipoBiciAlta->SelectedIndex==1)
						bici.setTipo(Bicicleta::Montanya);
					else if (comboBoxTipoBiciAlta->SelectedIndex==2)
						bici.setTipo(Bicicleta::Carretera);
					else if (comboBoxTipoBiciAlta->SelectedIndex==3)
						bici.setTipo(Bicicleta::Paseo);

					if (comboBox1->SelectedIndex==1)
						bici.setEstado(Bicicleta::Disponible);
					else if (comboBox1->SelectedIndex==2)
						bici.setEstado(Bicicleta::enTaller);
					
					float precio = System::Convert::ToSingle(txtPrecioPorDia->Text);
					
					
					bici.setPrecioPorDia(precio);
					 
					string mensaje="";
					bool resultado=false;
					resultado=anyadirBici(tienda,bici,mensaje);

					if(resultado)
					{
						MessageBox::Show("La bicicleta se guardó correctamente","Alta Bicicleta", MessageBoxButtons::OK,MessageBoxIcon::Information);

						comboBoxTamBiciAlta->SelectedIndex=0;
						comboBoxTipoBiciAlta->SelectedIndex=0;
						comboBox1->SelectedIndex=0;
						txtPrecioPorDia->Text="";

						lblIdBicicletaAlta->Text=tienda.dameUltimoRegBici().ToString();
					}
					else
					{
						
						MessageBox::Show(System::String(mensaje.c_str()).ToString(),"Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);
					}

				 

				 }

			 }


private: System::Void btCancelar_Click(System::Object^  sender, System::EventArgs^  e) {
			 comboBoxTamBiciAlta->SelectedIndex=0;
			 comboBoxTipoBiciAlta->SelectedIndex=0;
			 comboBox1->SelectedIndex=0;
			 txtPrecioPorDia->Text="";

		 }

private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
			 //guardar();
			 Dao::guardar(tienda);
			 Tienda::DestroySingleton();
		 }
private: System::Void btBuscarBici_Click(System::Object^  sender, System::EventArgs^  e) {

			 if(txtIdBicicleta->Text=="")
			 {
				 MessageBox::Show("Debes introducir el Id Bicicleta","Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);
			 }
			 else
			 {
				 Bicicleta bici;
				 bool resultado=tienda.buscaBiciPorRegistro(System::Convert::ToInt32(txtIdBicicleta->Text),bici);
				 
				 if(resultado)
				 {
					 lblMostrarTamaño->Text=System::String(bici.tamanyoAString(bici.getTamanyo()).c_str()).ToString();
					 lblMostrarTipo->Text=System::String(bici.tipoAString(bici.getTipo()).c_str()).ToString();
					 lblMostrarPrecio->Text=bici.getPrecio().ToString();
					 lblMostrarEstado->Text=System::String(bici.estadoAString(bici.getEstado()).c_str()).ToString();
						
					txtIdBicicleta->Enabled=false;

					btBuscarBici->Enabled=false;
					btCancelarEliminar->Enabled=true;
					btEliminar->Enabled=true;
				 }
				 else
				 {
					 MessageBox::Show("No se encuentra ninguna bicicleta con el Id Bicicleta especificado","Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);

				 }
			 }
			 

		 }
private: System::Void btCancelarEliminar_Click(System::Object^  sender, System::EventArgs^  e) {
			
			 txtIdBicicleta->Enabled=true;

			 btBuscarBici->Enabled=true;
			 btCancelarEliminar->Enabled=false;
			 btEliminar->Enabled=false;

			 txtIdBicicleta->Text="";
			 lblMostrarTamaño->Text="";
			 lblMostrarTipo->Text="";
			 lblMostrarPrecio->Text="";
			 lblMostrarEstado->Text="";

		 }
private: System::Void btEliminar_Click(System::Object^  sender, System::EventArgs^  e) {

			 string mensaje="";
			 bool resultado=borrarBici(tienda,System::Convert::ToInt32(txtIdBicicleta->Text),mensaje);

			 if(resultado)
			 {
				 txtIdBicicleta->Enabled=true;

				 btBuscarBici->Enabled=true;
				 btCancelarEliminar->Enabled=false;
				 btEliminar->Enabled=false;

				 txtIdBicicleta->Text="";
				 lblMostrarTamaño->Text="";
				 lblMostrarTipo->Text="";
				 lblMostrarPrecio->Text="";
				 lblMostrarEstado->Text="";

				 MessageBox::Show("La bicicleta se eliminó correctamente","Baja Bicicleta", MessageBoxButtons::OK,MessageBoxIcon::Information);
			 }
			 else
			 {
				 MessageBox::Show(System::String(mensaje.c_str()).ToString(),"Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);
			 }

			 
		 }
private: System::Void btBuscarBiciMod_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 if(txtIdBiciMod->Text=="")
			 {
				 MessageBox::Show("Debes introducir el Id Bicicleta","Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);
			 }
			 else
			 {
				 Bicicleta bici;
				 bool resultado=tienda.buscaBiciPorRegistro(System::Convert::ToInt32(txtIdBiciMod->Text),bici);
				 
				 if(resultado)
				 {
					 if(bici.getTamanyo()==Bicicleta::Pequenya)
					 {
						 ddlTamañoBiciMod->SelectedIndex=1;
					 }
					 else if(bici.getTamanyo()==Bicicleta::Mediana)
					 {
						 ddlTamañoBiciMod->SelectedIndex=2;
					 }
					 else if(bici.getTamanyo()==Bicicleta::Grande)
					 {
						 ddlTamañoBiciMod->SelectedIndex=3;
					 }

					 if(bici.getTipo()==Bicicleta::Montanya)
					 {
						 ddlTipoBiciMod->SelectedIndex=1;
					 }
					 else if(bici.getTipo()==Bicicleta::Carretera)
					 {
						 ddlTipoBiciMod->SelectedIndex=2;
					 }
					 else if(bici.getTipo()==Bicicleta::Paseo)
					 {
						 ddlTipoBiciMod->SelectedIndex=3;
					 }


					 if(bici.getEstado()==Bicicleta::Disponible)
					 {
						 ddlEstadoBiciMod->SelectedIndex=1;
					 }
					 else if(bici.getEstado()==Bicicleta::Alquilada)
					 {
						 ddlEstadoBiciMod->SelectedIndex=2;
					 }
					 else if(bici.getEstado()==Bicicleta::enTaller)
					 {
						 ddlEstadoBiciMod->SelectedIndex=3;
					 }
					 

					txtPrecioBiciMod->Text=bici.getPrecio().ToString();

					btBuscarBiciMod->Enabled=false;
					btModificarBiciMod->Enabled=true;
					btCancelarMod->Enabled=true;

					txtIdBiciMod->Enabled=false;
					ddlEstadoBiciMod->Enabled=true;
					ddlTipoBiciMod->Enabled=true;
					ddlTamañoBiciMod->Enabled=true;
					txtPrecioBiciMod->Enabled=true;
				 }
				 else
				 {

					MessageBox::Show("No se encuentra ninguna bicicleta con el Id Bicicleta especificado","Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);

				 }
				
			 }

		 }
private: System::Void btModificarBiciMod_Click(System::Object^  sender, System::EventArgs^  e) {

			 if(ddlTamañoBiciMod->SelectedIndex==0)
			{
				MessageBox::Show("Debes seleccionar el tamaño de bicicleta","Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);
			}else if(ddlTipoBiciMod->SelectedIndex==0)
			{
				MessageBox::Show("Debes seleccionar el tipo de bicicleta","Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);
			}
			else if(txtPrecioBiciMod->Text=="")
			{
				MessageBox::Show("Debes introducir un precio por dia","Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);
			}
			else if(ddlEstadoBiciMod->SelectedIndex==0)
			{
				MessageBox::Show("Debes seleccionar el estado de la bicicleta","Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);
			}
			else
			{
				Bicicleta bici;
				if (ddlTamañoBiciMod->SelectedIndex==1)
					bici.setTamanyo(Bicicleta::Pequenya);
				else if (ddlTamañoBiciMod->SelectedIndex==2)
					bici.setTamanyo(Bicicleta::Mediana);
				else if (ddlTamañoBiciMod->SelectedIndex==3)
					bici.setTamanyo(Bicicleta::Grande);

				if (ddlTipoBiciMod->SelectedIndex==1)
					bici.setTipo(Bicicleta::Montanya);
				else if (ddlTipoBiciMod->SelectedIndex==2)
					bici.setTipo(Bicicleta::Carretera);
				else if (ddlTipoBiciMod->SelectedIndex==3)
					bici.setTipo(Bicicleta::Paseo);

				if (ddlEstadoBiciMod->SelectedIndex==1)
					bici.setEstado(Bicicleta::Disponible);
				else if (ddlEstadoBiciMod->SelectedIndex==2)
					bici.setEstado(Bicicleta::Alquilada);
				else if (ddlEstadoBiciMod->SelectedIndex==3)
					bici.setEstado(Bicicleta::enTaller);
					
				float precio = System::Convert::ToSingle(txtPrecioBiciMod->Text);
					
					
				bici.setPrecioPorDia(precio);
				bici.setIdBicicleta(System::Convert::ToInt32(txtIdBiciMod->Text));

				string mensaje="";
				modificarBici(tienda,bici.getIdBicicleta(),bici,mensaje);

				MessageBox::Show("La bicicleta se modificó correctamente","Modificar Bicicleta", MessageBoxButtons::OK,MessageBoxIcon::Information);
				
				btBuscarBiciMod->Enabled=true;
				btModificarBiciMod->Enabled=false;
				btCancelarMod->Enabled=false;


				ddlEstadoBiciMod->Enabled=false;
				ddlTipoBiciMod->Enabled=false;
				ddlTamañoBiciMod->Enabled=false;
				txtPrecioBiciMod->Enabled=false;
				txtIdBiciMod->Enabled=true;

				ddlEstadoBiciMod->SelectedIndex=0;
				ddlTipoBiciMod->SelectedIndex=0;
				ddlTamañoBiciMod->SelectedIndex=0;
				txtIdBiciMod->Text="";
				txtPrecioBiciMod->Text="";
			}
		 }
private: System::Void btCancelarMod_Click(System::Object^  sender, System::EventArgs^  e) {

			btBuscarBiciMod->Enabled=true;
			btModificarBiciMod->Enabled=false;
			btCancelarMod->Enabled=false;


			ddlEstadoBiciMod->Enabled=false;
			ddlTipoBiciMod->Enabled=false;
			ddlTamañoBiciMod->Enabled=false;
			txtPrecioBiciMod->Enabled=false;
			txtIdBiciMod->Enabled=true;

			ddlEstadoBiciMod->SelectedIndex=0;
			ddlTipoBiciMod->SelectedIndex=0;
			ddlTamañoBiciMod->SelectedIndex=0;
			txtIdBiciMod->Text="";
			txtPrecioBiciMod->Text="";
		 }
private: System::Void guardarToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 //guardar();
			 Dao::guardar(tienda);

		 }

private: System::Void btnAceptarAltaOferta_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			if(cBTipoBiciOfertas->SelectedIndex==0){
				MessageBox::Show("Debes seleccionar el tipo de bicicleta","Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);
			}else if(txtNumAlquileresOfertas->Text==""){
				MessageBox::Show("Debes introducir un numero de alquileres","Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);
				 }
			else if(txtDescuentoOfertas->Text==""){
				MessageBox::Show("Debes introducir un descuento","Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);
				 }
			else{
				Oferta oferta;
				if (cBTipoBiciOfertas->SelectedIndex==1) 
					oferta.tipoBici(Oferta::Montanya);
				else if (cBTipoBiciOfertas->SelectedIndex==2)
					oferta.tipoBici(Oferta::Carretera);
				else if (cBTipoBiciOfertas->SelectedIndex==3)
					oferta.tipoBici(Oferta::Paseo);
					
				int numAlquileres = System::Convert::ToInt32(txtNumAlquileresOfertas->Text);
				oferta.numAlquileres(numAlquileres);

				float descuento = System::Convert::ToSingle(txtDescuentoOfertas->Text);
				oferta.descuento(descuento);
					 
				string mensaje="";
				bool resultado=anyadirOferta(tienda,oferta,mensaje);
				if(resultado){
						MessageBox::Show("La oferta se guardó correctamente","Alta Oferta", MessageBoxButtons::OK,MessageBoxIcon::Information);

						cBTipoBiciOfertas->SelectedIndex=0;
						txtNumAlquileresOfertas->Text="";
						txtDescuentoOfertas->Text="";

						txtIdOfertaAlta->Text=tienda.dameUltimoRegOferta().ToString();
					}
					else
					{
						
						MessageBox::Show(System::String(mensaje.c_str()).ToString(),"Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);
					}				 

				 }
		 }
private: System::Void btConsultaBicis_Click(System::Object^  sender, System::EventArgs^  e) {

				txtConsultaBici->Text="";

				Bicicleta bici;
				if (ddlTamanyioConsBici->SelectedIndex==1)
					bici.setTamanyo(Bicicleta::Pequenya);
				else if (ddlTamanyioConsBici->SelectedIndex==2)
					bici.setTamanyo(Bicicleta::Mediana);
				else if (ddlTamanyioConsBici->SelectedIndex==3)
					bici.setTamanyo(Bicicleta::Grande);
				else if(ddlTamanyioConsBici->SelectedIndex==0)
					bici.setTamanyo(Bicicleta::tamanyoNulo);

				if (ddlTipoConsBici->SelectedIndex==1)
					bici.setTipo(Bicicleta::Montanya);
				else if (ddlTipoConsBici->SelectedIndex==2)
					bici.setTipo(Bicicleta::Carretera);
				else if (ddlTipoConsBici->SelectedIndex==3)
					bici.setTipo(Bicicleta::Paseo);
				else if(ddlTipoConsBici->SelectedIndex==0)
					bici.setTipo(Bicicleta::tipoNulo);

				if (ddlEstadoConsBici->SelectedIndex==1)
					bici.setEstado(Bicicleta::Disponible);
				else if (ddlEstadoConsBici->SelectedIndex==2)
					bici.setEstado(Bicicleta::Alquilada);
				else if (ddlEstadoConsBici->SelectedIndex==3)
					bici.setEstado(Bicicleta::enTaller);
				else if(ddlEstadoConsBici->SelectedIndex==0)
					bici.setEstado(Bicicleta::estadoNulo);


			 ListaBicicleta lb=consultarBicis(tienda,bici.getTamanyo(),bici.getTipo(),bici.getEstado());

			 //System::String(bici.tamanyoAString(bici.getTamanyo()).c_str()).ToString();
			 
			 String^ cadena="";

			 for(int i=0;i<lb.numElems();i++)
			 {
				 cadena="ID: "+ System::Convert::ToString(lb.dameElem(i).getIdBicicleta());

				if(lb.dameElem(i).getTamanyo() != Bicicleta::tamanyoNulo)
				{
					
					cadena= cadena + " -- Tamaño: " + System::String(lb.dameElem(i).tamanyoAString(lb.dameElem(i).getTamanyo()).c_str()).ToString();
				}
				
				if(lb.dameElem(i).getTipo() != Bicicleta::tipoNulo)
				{
					cadena=cadena+" -- Tipo: "+ System::String(lb.dameElem(i).tipoAString(lb.dameElem(i).getTipo()).c_str()).ToString();
				}

				cadena= cadena+ " -- Precio: " + System::Convert::ToString(lb.dameElem(i).getPrecio());

				if(lb.dameElem(i).getEstado() != Bicicleta::estadoNulo)
				{
					cadena=cadena+" -- Estado: "+ System::String(lb.dameElem(i).estadoAString(lb.dameElem(i).getEstado()).c_str()).ToString();
				}

				txtConsultaBici->Text=txtConsultaBici->Text + cadena + "\r\n" ;
			 }


		 }
private: System::Void btCancelarConsBici_Click(System::Object^  sender, System::EventArgs^  e) {

			ddlTamanyioConsBici->SelectedIndex=0;
			ddlTipoConsBici->SelectedIndex=0;
			ddlEstadoConsBici->SelectedIndex=0;

			txtConsultaBici->Text="";

		 }
private: System::Void btnCancelarAltaOferta_Click(System::Object^  sender, System::EventArgs^  e) {
			 cBTipoBiciOfertas->SelectedIndex=0;
			 txtNumAlquileresOfertas->Text="";
			 txtDescuentoOfertas->Text="";
		 }
private: System::Void btnBuscarBajaOferta_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(txtIdOfertaBaja->Text=="")
			 {
				 MessageBox::Show("Debes introducir el Id Oferta","Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);
			 }
			 else
			 {
				 Oferta of;
				 bool resultado=tienda.buscaOfertaPorRegistro(System::Convert::ToInt32(txtIdOfertaBaja->Text),of);
				 
				 if(resultado)
				 {
					 lblTipoBiciBajaOferta->Text=System::String(of.tipoAString(of.tipoBici()).c_str()).ToString();
					 lblNumAlquileresOfertaBaja->Text=of.numAlquileres().ToString();
					 lblDescuentoOfertaBaja->Text=of.descuento().ToString() + "%";
						
					txtIdOfertaBaja->Enabled=false;

					btnBuscarBajaOferta->Enabled=false;
					btnCancelarBajaOferta->Enabled=true;
					btnEliminarBajaOferta->Enabled=true;
				 }
				 else
				 {
					 MessageBox::Show("No se encuentra ninguna oferta con el Id Oferta especificado","Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);

				 }
			 }
		 }
private: System::Void btnEliminarBajaOferta_Click(System::Object^  sender, System::EventArgs^  e) {
			 string mensaje="";
			 bool resultado=borrarOferta(tienda,System::Convert::ToInt32(txtIdOfertaBaja->Text),mensaje);

			 if(resultado)
			 {
				 txtIdOfertaBaja->Enabled=true;

				 btnCancelarBajaOferta_Click(sender,e);

				 MessageBox::Show("La oferta se eliminó correctamente","Baja Oferta", MessageBoxButtons::OK,MessageBoxIcon::Information);
			 }
			 else
			 {
				 MessageBox::Show(System::String(mensaje.c_str()).ToString(),"Baja Oferta", MessageBoxButtons::OK,MessageBoxIcon::Warning);
			 }
		 }
private: System::Void btnCancelarBajaOferta_Click(System::Object^  sender, System::EventArgs^  e) {
			 txtIdOfertaBaja->Enabled=true;

			 btnBuscarBajaOferta->Enabled=true;
			 btnCancelarBajaOferta->Enabled=false;
			 btnEliminarBajaOferta->Enabled=false;

			 txtIdOfertaBaja->Text="";
			 lblTipoBiciBajaOferta->Text="";
			 lblNumAlquileresOfertaBaja->Text="";
			 lblDescuentoOfertaBaja->Text="";
		 }
private: System::Void btnConsultarOferta_Click(System::Object^  sender, System::EventArgs^  e) {
			 txtConsultaOferta->Text="";

				Oferta of;

				if (cBTipoBiciConsulta->SelectedIndex==1)
					of.tipoBici(Oferta::Montanya);
				else if (cBTipoBiciConsulta->SelectedIndex==2)
					of.tipoBici(Oferta::Carretera);
				else if (cBTipoBiciConsulta->SelectedIndex==3)
					of.tipoBici(Oferta::Paseo);
				else if(cBTipoBiciConsulta->SelectedIndex==0)
					of.tipoBici(Oferta::tipoNulo);

			 ListaOfertas lo=consultarOfertas(tienda,of.tipoBici());
			 
			 String^ cadena="";

			 for(int i=0;i<lo.numElems();i++)
			 {
				cadena="ID: "+ System::Convert::ToString(lo.dameElem(i).idOferta());
				
				if(lo.dameElem(i).tipoBici() != Oferta::tipoNulo)
				{
					cadena=cadena+" -- Tipo: "+ System::String(lo.dameElem(i).tipoAString(lo.dameElem(i).tipoBici()).c_str()).ToString();
				}

				cadena= cadena+ " -- Num Alquileres: " + System::Convert::ToString(lo.dameElem(i).numAlquileres());

				cadena= cadena+ " -- Descuento: " + System::Convert::ToString(lo.dameElem(i).descuento()) + "%";

				txtConsultaOferta->Text=txtConsultaOferta->Text + cadena + "\r\n" ;
			 }
		 }
private: System::Void btnCancelarConsultaOferta_Click(System::Object^  sender, System::EventArgs^  e) {
			cBTipoBiciConsulta->SelectedIndex=0;

			txtConsultaOferta->Text="";
		 }
private: System::Void btnBuscarModificacionOferta_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(txtIdModificacionOferta->Text=="")
			 {
				 MessageBox::Show("Debes introducir el Id Oferta","Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);
			 }
			 else
			 {
				 Oferta of;
				 bool resultado=tienda.buscaOfertaPorRegistro(System::Convert::ToInt32(txtIdModificacionOferta->Text),of);
				 
				 if(resultado)
				 {
					 if(of.tipoBici()==Oferta::Montanya)
					 {
						 cbTipoBiciModificacionOferta->SelectedIndex=1;
					 }
					 else if(of.tipoBici()==Oferta::Carretera)
					 {
						 cbTipoBiciModificacionOferta->SelectedIndex=2;
					 }
					 else if(of.tipoBici()==Oferta::Paseo)
					 {
						 cbTipoBiciModificacionOferta->SelectedIndex=3;
					 }					 

					txtNumAlquileresModificacionOferta->Text=of.numAlquileres().ToString();
					txtDescuentoModificacionOferta->Text=of.descuento().ToString();

					btnBuscarModificacionOferta->Enabled=false;
					btnModificarOferta->Enabled=true;
					btnCancelarModifOferta->Enabled=true;

					txtIdModificacionOferta->Enabled=false;
					txtDescuentoModificacionOferta->Enabled=true;
					txtNumAlquileresModificacionOferta->Enabled=true;
					cbTipoBiciModificacionOferta->Enabled=true;
				 }
				 else
				 {

					MessageBox::Show("No se encuentra ninguna oferta con el Id Oferta especificado","Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);

				 }
				
			 }
		 }
private: System::Void btnModificarOferta_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(txtNumAlquileresModificacionOferta->Text=="")
			{
				MessageBox::Show("Debes seleccionar el numero de alquileres","Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);
			}else if(cbTipoBiciModificacionOferta->SelectedIndex==0)
			{
				MessageBox::Show("Debes seleccionar el tipo de bicicleta","Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);
			}
			else if(txtDescuentoModificacionOferta->Text=="")
			{
				MessageBox::Show("Debes introducir un descuento","Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);
			}
			else
			{
				Oferta of;
				if (cbTipoBiciModificacionOferta->SelectedIndex==1)
					of.tipoBici(Oferta::Montanya);
				else if (cbTipoBiciModificacionOferta->SelectedIndex==2)
					of.tipoBici(Oferta::Carretera);
				else if (cbTipoBiciModificacionOferta->SelectedIndex==3)
					of.tipoBici(Oferta::Paseo);
					
				float descuento = System::Convert::ToSingle(txtDescuentoModificacionOferta->Text);

				int numAlquileres = System::Convert::ToInt32(txtNumAlquileresModificacionOferta->Text);
					
					
				of.descuento(descuento);
				of.numAlquileres(numAlquileres);
				of.idOferta(System::Convert::ToInt32(txtIdModificacionOferta->Text));

				string mensaje="";
				modificarOferta(tienda,of.idOferta(),of,mensaje);

				MessageBox::Show("La oferta se modificó correctamente","Modificar Oferta", MessageBoxButtons::OK,MessageBoxIcon::Information);
				
				btnCancelarModifOferta_Click(sender,e);
			}
		 }
private: System::Void btnCancelarModifOferta_Click(System::Object^  sender, System::EventArgs^  e) {
			btnBuscarModificacionOferta->Enabled=true;
			btnModificarOferta->Enabled=false;
			btnCancelarModifOferta->Enabled=false;


			cbTipoBiciModificacionOferta->Enabled=false;
			txtNumAlquileresModificacionOferta->Enabled=false;
			txtDescuentoModificacionOferta->Enabled=false;
			txtIdModificacionOferta->Enabled=true;

			cbTipoBiciModificacionOferta->SelectedIndex=0;
			txtNumAlquileresModificacionOferta->Text="";
			txtDescuentoModificacionOferta->Text="";
			txtIdModificacionOferta->Text="";
		 }
private: System::Void btAceptarAltaSocio_Click(System::Object^  sender, System::EventArgs^  e) {

			 if(txtDniAltaSocio->Text=="")
			 {
				 MessageBox::Show("Debes introducir el DNI del socio","Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);
			 }
			 else if(txtNombreAltaSocio->Text=="")
			 {
				 MessageBox::Show("Debes introducir el nombre del socio","Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);
			 }
			 else if(txtApellidosAltaSocio->Text=="")
			 {
				 MessageBox::Show("Debes introducir los apellidos del socio","Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);
			 }
			 else if(txtDireccionAltaSocio->Text=="")
			 {
				 MessageBox::Show("Debes introducir la dirección del socio","Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);
			 }
			 else if(txtTlfAltaSocio->Text=="")
			 {
				 MessageBox::Show("Debes introducir el teléfono del socio","Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);
			 }
			 else
			 {

				 Cliente aux;
				 if(!tienda.buscaClientePorDni(convierteStringAstring(txtDniAltaSocio->Text),aux))
				 {
					 Cliente cli(0,convierteStringAstring(txtDniAltaSocio->Text),convierteStringAstring(txtNombreAltaSocio->Text),convierteStringAstring(txtApellidosAltaSocio->Text),convierteStringAstring(txtDireccionAltaSocio->Text),System::Convert::ToInt32(txtTlfAltaSocio->Text));

					 string mensaje="";
					 bool resultado=anyadirCliente(tienda,cli,mensaje);
					 
					 if(resultado)
					 {
							txtDniAltaSocio->Text="";
							txtNombreAltaSocio->Text="";
							txtApellidosAltaSocio->Text="";
							txtDireccionAltaSocio->Text="";
							txtTlfAltaSocio->Text="";
							
							//lblIdSocioAlta->Text=(tienda.dameClientes().dameElem(tienda.dameClientes().numElems()-1).idCliente()+1).ToString();

							//lblIdSocioAlta->Text=(System::Convert::ToInt32(lblIdSocioAlta->Text)+1).ToString();

							lblIdSocioAlta->Text=tienda.dameUltimoCodCliente().ToString();
							MessageBox::Show("El socio se ha dado de alta correctamente","Alta Socio", MessageBoxButtons::OK,MessageBoxIcon::Information);
					 }
					 else
					 {
						 MessageBox::Show(System::String(mensaje.c_str()).ToString(),"Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);
					 }

					 
					
				 }
				 else 
				 {
					 MessageBox::Show("Ya existe un socio con ese DNI","Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);
				 }

			 }


			 
		 }

private: System::Void btCancelarAltaSocio_Click(System::Object^  sender, System::EventArgs^  e) {


			 txtDniAltaSocio->Text="";
			 txtNombreAltaSocio->Text="";
			 txtApellidosAltaSocio->Text="";
			 txtDireccionAltaSocio->Text="";
			 txtTlfAltaSocio->Text="";



		 }
private: System::Void btBuscarBajaCliente_Click(System::Object^  sender, System::EventArgs^  e) {

			 if(txtDniBajaCliente->Text=="")
			 {
				 MessageBox::Show("Debes introducir el DNI del socio","Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);
			 }
			 else
			 {
				string dni=convierteStringAstring(txtDniBajaCliente->Text);
				Cliente cli;
				bool resultado=tienda.buscaClientePorDni(dni,cli);

				if(resultado)
				{
					lblNombreBajaCliente->Text=String(cli.nombre().c_str()).ToString();
					lblApellidosBajaCliente->Text=String(cli.apellidos().c_str()).ToString();
					lblDireccionBajaCliente->Text=String(cli.direccion().c_str()).ToString();
					lblTlfBajaCliente->Text=cli.telefono().ToString();

					txtDniBajaCliente->Enabled=false;
					btBuscarBajaCliente->Enabled=false;
					btCancelarBajaCliente->Enabled=true;
					btEliminarBajaCliente->Enabled=true;

				}
				else
				{
					MessageBox::Show("No se encuentra a ningún socio con ese DNI","Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);
				}
			 }
		 }
private: System::Void btEliminarBajaCliente_Click(System::Object^  sender, System::EventArgs^  e) {

			string dni=convierteStringAstring(txtDniBajaCliente->Text);
			Cliente cli;

			tienda.buscaClientePorDni(dni,cli);

			string mensaje="";
			bool resultado=borrarCliente(tienda,cli.idCliente(),mensaje);


			if(resultado)
			{

				txtDniBajaCliente->Enabled=true;
				btBuscarBajaCliente->Enabled=true;
				btCancelarBajaCliente->Enabled=false;
				btEliminarBajaCliente->Enabled=false;

				txtDniBajaCliente->Text="";
				lblNombreBajaCliente->Text="";
				lblApellidosBajaCliente->Text="";
				lblDireccionBajaCliente->Text="";
				lblTlfBajaCliente->Text="";

				MessageBox::Show("El socio se ha dado de baja correctamente","Baja Socio", MessageBoxButtons::OK,MessageBoxIcon::Information);
			}
			else
			{
				MessageBox::Show(System::String(mensaje.c_str()).ToString(),"Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);

			}
		 }
private: System::Void btCancelarBajaCliente_Click(System::Object^  sender, System::EventArgs^  e) {

					txtDniBajaCliente->Enabled=true;
					btBuscarBajaCliente->Enabled=true;
					btCancelarBajaCliente->Enabled=false;
					btEliminarBajaCliente->Enabled=false;

					txtDniBajaCliente->Text="";
					lblNombreBajaCliente->Text="";
					lblApellidosBajaCliente->Text="";
					lblDireccionBajaCliente->Text="";
					lblTlfBajaCliente->Text="";
		 }
private: System::Void btCancelarConsultaSocio_Click(System::Object^  sender, System::EventArgs^  e) {

			 txtMostrarConsultaSocio->Text="";

		 }
private: System::Void btConsultarSocio_Click(System::Object^  sender, System::EventArgs^  e) {

				 txtMostrarConsultaSocio->Text="";

				 ListaClientes lc=tienda.dameClientes();
				 String^ cadena="";
				 if(lc.numElems()>0)
				 {
					 for(int i=0;i<lc.numElems();i++)
					 {
						 cadena="ID: "+ System::Convert::ToString(lc.dameElem(i).idCliente()) + " -- DNI: " + System::String(lc.dameElem(i).dni().c_str()).ToString()+" -- Nombre: "+ System::String(lc.dameElem(i).nombre().c_str()).ToString()+" -- Apellidos: "+ System::String(lc.dameElem(i).apellidos().c_str()).ToString()+" -- Direccion: "+ System::String(lc.dameElem(i).direccion().c_str()).ToString()+ " -- Teléfono: " + System::Convert::ToString(lc.dameElem(i).telefono());
						 txtMostrarConsultaSocio->Text=txtMostrarConsultaSocio->Text + cadena + "\r\n" ;
					}
				 }

		 }

private: System::Void btnAceptAltaInci_Click(System::Object^  sender, System::EventArgs^  e) {
			if(cbTipoAltaInci->SelectedIndex==1){
				 if(txtIdBiciAltaInci->Text==""){
					MessageBox::Show("Debes introducir un id de bicicleta","Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);
					 }
				 else if(txtImporAltaInci->Text==""){
					MessageBox::Show("Debes introducir un importe de la incidencia","Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);
					 }
				else if(txtConcepAltaInci->Text==""){
					MessageBox::Show("Debes introducir un concepto para la incidencia de bici","Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);
					 }
				else if(cbEstadAltaInci->SelectedIndex==0){
					MessageBox::Show("Debes seleccionar el estado de la incidencia","Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);
				}
				else {
					Bicicleta bici;
					bool resul=tienda.buscaBiciPorRegistro(System::Convert::ToInt32(txtIdBiciAltaInci->Text),bici);
				 
					if(resul)
					{
						Incidencia in;
						if (cbEstadAltaInci->SelectedIndex==1) 
							in.estadoI(Incidencia::Resuelta);
						else if (cbEstadAltaInci->SelectedIndex==2)
							in.estadoI(Incidencia::EnProceso);
					
						int idBici = System::Convert::ToInt32(txtIdBiciAltaInci->Text);
						in.idBici(idBici);

						float importe = System::Convert::ToSingle(txtImporAltaInci->Text);
						in.importe(importe);
					 
						string concepto = convierteStringAstring(txtConcepAltaInci->Text);
						in.concepto(concepto);

						string fechaCrea = convierteStringAstring(System::Convert::ToString(dtpCreaAltaInci->Text));
						in.fechaCreacion(fechaCrea);

						string mensaje="";
						bool resultado=anyadirIncidencia(tienda,in,mensaje);
						if(resultado){
								bici.setEstado(Bicicleta::enTaller);

								MessageBox::Show("La incidencia se guardó correctamente","Alta Incidencia", MessageBoxButtons::OK,MessageBoxIcon::Information);
								cbEstadAltaInci->SelectedIndex=0;
								txtIdBiciAltaInci->Text="";
								txtImporAltaInci->Text="";
								txtConcepAltaInci->Text="";
								dtpCreaAltaInci->Text="";
								lblIdInciAlta->Text=tienda.dameUltimoIdIncidencia().ToString();
						}
						else
							MessageBox::Show(System::String(mensaje.c_str()).ToString(),"Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);			 
					}
					else
						 MessageBox::Show("El Id bicicleta no esta en la base de datos","Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);
				}
			}
			else if(cbTipoAltaInci->SelectedIndex==2){
				if(txtNombreAltaInci->Text==""){
					MessageBox::Show("Debes introducir un nombre de empleado","Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);
				}
				else if(txtConcepAltaInci->Text==""){
					MessageBox::Show("Debes introducir un concepto para la incidencia de bici","Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);
				}
				else{
					Incidencia in;

					string fechaCrea = convierteStringAstring(System::Convert::ToString(dtpCreaAltaInci->Text));
					in.fechaCreacion(fechaCrea);

					string concepto = convierteStringAstring(txtConcepAltaInci->Text);
					in.concepto(concepto);

					string nombre = convierteStringAstring(txtNombreAltaInci->Text);
					in.nombre(nombre);

					in.idBici(-1);
					string mensaje="";
					bool resultado=anyadirIncidencia(tienda,in,mensaje);
					if(resultado){
							MessageBox::Show("La incidencia se guardó correctamente","Alta Incidencia", MessageBoxButtons::OK,MessageBoxIcon::Information);
							cbEstadAltaInci->SelectedIndex=0;
							txtIdBiciAltaInci->Text="";
							txtImporAltaInci->Text="";
							txtConcepAltaInci->Text="";
							txtNombreAltaInci->Text="";
							dtpCreaAltaInci->Text="";
							lblIdInciAlta->Text=tienda.dameUltimoIdIncidencia().ToString();
					}
					else
						MessageBox::Show(System::String(mensaje.c_str()).ToString(),"Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);			 
				}
			}
			txtNombreAltaInci->Enabled=false;
			txtIdBiciAltaInci->Enabled=false;
			txtImporAltaInci->Enabled=false;
			cbEstadAltaInci->Enabled=false;
		}
private: System::Void btnBuscarIncidenciasBaja_Click(System::Object^  sender, System::EventArgs^  e) {
		 if(txtIdIncidenciaBaja->Text=="")
			 {
				 MessageBox::Show("Debes introducir el ID de la incidencia","Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);
			 }
			 else
			 {
				 int id = System::Convert::ToInt32(txtIdIncidenciaBaja->Text);
				 Incidencia incidencia;
				 string tipo;
				 bool resultado=tienda.buscaIncidenciaPorId(id,incidencia);
				 if(resultado)
				{
					if (incidencia.idBici()!=-1){
						lblIdBiciIncidenciaBaja->Text=incidencia.idBici().ToString();
						lblImporteIncidenciaBaja->Text=incidencia.importe().ToString();
						lblConceptoIncidenciaBaja->Text=String(incidencia.concepto().c_str()).ToString();
						lblFCreacionIncidenciaBaja->Text=String(incidencia.fechaCreacion().c_str()).ToString();
						lblFResolucionIncidenciaBaja->Text=String(incidencia.fechaResolucion().c_str()).ToString();
						tipo="BICICLETA";
						lblTipoBajaIncidencia->Text=String((tipo).c_str()).ToString();

						txtIdIncidenciaBaja->Enabled=false;
						btnBuscarIncidenciasBaja->Enabled=false;
						btnCancelarIncidenciasBaja->Enabled=true;
						btnEliminarIncidenciasBaja->Enabled=true;
					}
					else{
						lblConceptoIncidenciaBaja->Text=String(incidencia.concepto().c_str()).ToString();
						lblFCreacionIncidenciaBaja->Text=String(incidencia.fechaCreacion().c_str()).ToString();
						lblFResolucionIncidenciaBaja->Text=String(incidencia.fechaResolucion().c_str()).ToString();
						lblNombreBajaIncidencia->Text=String(incidencia.nombre().c_str()).ToString();
						tipo="EMPLEADO";
						lblTipoBajaIncidencia->Text=String((tipo).c_str()).ToString();

						txtIdIncidenciaBaja->Enabled=false;
						btnBuscarIncidenciasBaja->Enabled=false;
						btnCancelarIncidenciasBaja->Enabled=true;
						btnEliminarIncidenciasBaja->Enabled=true;
					}
				 }
				 else
				{
					MessageBox::Show("No se encuentra a ninguna incidencia con ese ID","Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);
				}
			 }
		}
private: System::Void btnCancelarIncidenciasBaja_Click(System::Object^  sender, System::EventArgs^  e) {
		txtIdIncidenciaBaja->Enabled=true;
		btnBuscarIncidenciasBaja->Enabled=true;
		btnCancelarIncidenciasBaja->Enabled=false;
		btnEliminarIncidenciasBaja->Enabled=false;
		
		txtIdIncidenciaBaja->Text="";
		lblIdBiciIncidenciaBaja->Text="";
		lblImporteIncidenciaBaja->Text="";
		lblConceptoIncidenciaBaja->Text="";
		lblFCreacionIncidenciaBaja->Text="";
		lblFResolucionIncidenciaBaja->Text="";
		lblNombreBajaIncidencia->Text="";
		}
private: System::Void btnEliminarIncidenciasBaja_Click(System::Object^  sender, System::EventArgs^  e) {
			
			int id = System::Convert::ToInt32(txtIdIncidenciaBaja->Text);
			Incidencia incidencia;

			tienda.buscaIncidenciaPorId(id,incidencia);

			string mensaje="";
			bool resultado=borrarIncidencia(tienda,incidencia.idIncidencia(),mensaje);


			if(resultado)
			{

				txtIdIncidenciaBaja->Enabled=true;
				btnBuscarIncidenciasBaja->Enabled=true;
				btnCancelarIncidenciasBaja->Enabled=false;
				btnEliminarIncidenciasBaja->Enabled=false;
		
				txtIdIncidenciaBaja->Text="";
				lblIdBiciIncidenciaBaja->Text="";
				lblImporteIncidenciaBaja->Text="";
				lblConceptoIncidenciaBaja->Text="";
				lblFCreacionIncidenciaBaja->Text="";
				lblFResolucionIncidenciaBaja->Text="";
				lblNombreBajaIncidencia->Text="";

				MessageBox::Show("La incidencia se ha dado de baja correctamente","Baja Incidencia", MessageBoxButtons::OK,MessageBoxIcon::Information);
			}
			else
			{
				MessageBox::Show(System::String(mensaje.c_str()).ToString(),"Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);

			}
		 }

private: System::Void btConsultaIncidencias_Click(System::Object^  sender, System::EventArgs^  e) {
			
			txtConsultaIncidencia->Text="";

			ListaIncidencias lista=tienda.dameIncidencias();
			String^ cadena="";

			for(int i=0;i<lista.numElems();i++)
			{
				if (lista.dameElem(i).idBici()!=-1)
					cadena="--TIPO: BICICLETA--" +
						"\r\n ID: "+ System::Convert::ToString(lista.dameElem(i).idIncidencia()) + 
						"\r\n -- ID Bici: " + System::Convert::ToString(lista.dameElem(i).idBici()) + 
						"\r\n -- Importe: " + System::Convert::ToString(lista.dameElem(i).importe()) + 
						"\r\n -- Concepto: " + System::String(lista.dameElem(i).concepto().c_str()).ToString() +
						"\r\n -- Fecha de creación: " + System::String(lista.dameElem(i).fechaCreacion().c_str()).ToString() + 
						"\r\n -- Fecha de resolución: " + System::String(lista.dameElem(i).fechaResolucion().c_str()).ToString() + 
						"\r\n -- Estado: " + System::String(Incidencia::estadoAString(lista.dameElem(i).estadoI()).c_str()).ToString();
				else
					cadena="--TIPO: EMPLEADO--" +
						"\r\n ID: "+ System::Convert::ToString(lista.dameElem(i).idIncidencia()) + 
						"\r\n -- Nombre de empleado: " + System::String(lista.dameElem(i).nombre().c_str()).ToString() +
						"\r\n -- Concepto: " + System::String(lista.dameElem(i).concepto().c_str()).ToString() +
						"\r\n -- Fecha de creación: " + System::String(lista.dameElem(i).fechaCreacion().c_str()).ToString() + 
						"\r\n -- Fecha de resolución: " + System::String(lista.dameElem(i).fechaResolucion().c_str()).ToString();
					
				txtConsultaIncidencia->Text=txtConsultaIncidencia->Text + cadena + "\r\n\r\n" ;
			}
				 
		 }

private: System::Void btBuscarModificacionCliente_Click(System::Object^  sender, System::EventArgs^  e) {


			 if(txtDniModificacionCliente->Text=="")
			 {
				 MessageBox::Show("Debes introducir el DNI del socio","Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);
			 }
			 else
			 {
				string dni=convierteStringAstring(txtDniModificacionCliente->Text);
				Cliente cli;
				bool resultado=tienda.buscaClientePorDni(dni,cli);

				if(resultado)
				{
					lblIdSocioModificacionCliente->Text=System::Convert::ToString(cli.idCliente());
					txtNombreModificacionCliente->Text=String(cli.nombre().c_str()).ToString();
					txtApellidosModificacionCliente->Text=String(cli.apellidos().c_str()).ToString();
					txtDireccionModificacionCliente->Text=String(cli.direccion().c_str()).ToString();
					txtTlfModificacionCliente->Text=cli.telefono().ToString();

					txtDniModificacionCliente->Enabled=false;
					txtNombreModificacionCliente->Enabled=true;
					txtApellidosModificacionCliente->Enabled=true;
					txtDireccionModificacionCliente->Enabled=true;
					txtTlfModificacionCliente->Enabled=true;

					btBuscarModificacionCliente->Enabled=false;
					btCancelarModificacionCliente->Enabled=true;
					btModificarModificacionCliente->Enabled=true;

				}
				else
				{
					MessageBox::Show("No se encuentra a ningún socio con ese DNI","Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);
				}
			 }

		 }
private: System::Void btModificarModificacionCliente_Click(System::Object^  sender, System::EventArgs^  e) {

			 if(txtDniModificacionCliente->Text=="")
			 {
				 MessageBox::Show("Debes introducir el DNI del socio","Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);
			 }
			 else if(txtNombreModificacionCliente->Text=="")
			 {
				 MessageBox::Show("Debes introducir el nombre del socio","Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);
			 }
			 else if(txtApellidosModificacionCliente->Text=="")
			 {
				 MessageBox::Show("Debes introducir los apellidos del socio","Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);
			 }
			 else if(txtDireccionModificacionCliente->Text=="")
			 {
				 MessageBox::Show("Debes introducir la dirección del socio","Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);
			 }
			 else if(txtTlfModificacionCliente->Text=="")
			 {
				 MessageBox::Show("Debes introducir el teléfono del socio","Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);
			 }
			 else
			 {

					 Cliente cli(System::Convert::ToInt32(lblIdSocioModificacionCliente->Text),convierteStringAstring(txtDniModificacionCliente->Text),convierteStringAstring(txtNombreModificacionCliente->Text),convierteStringAstring(txtApellidosModificacionCliente->Text),convierteStringAstring(txtDireccionModificacionCliente->Text),System::Convert::ToInt32(txtTlfModificacionCliente->Text));

					 string mensaje="";
					 bool resultado=modificarCliente(tienda,cli.idCliente(),cli,mensaje);
					 
					 if(resultado)
					 {
							lblIdSocioModificacionCliente->Text="";
							txtDniModificacionCliente->Text="";
							txtNombreModificacionCliente->Text="";
							txtApellidosModificacionCliente->Text="";
							txtDireccionModificacionCliente->Text="";
							txtTlfModificacionCliente->Text="";


			
							txtNombreModificacionCliente->Enabled=false;
							txtApellidosModificacionCliente->Enabled=false;
							txtDireccionModificacionCliente->Enabled=false;
							txtTlfModificacionCliente->Enabled=false;
							txtDniModificacionCliente->Enabled=true;
							btBuscarModificacionCliente->Enabled=true;
							btCancelarModificacionCliente->Enabled=false;
							btModificarModificacionCliente->Enabled=false;
							

							
							MessageBox::Show("El socio se ha modificado correctamente","Modificación Socio", MessageBoxButtons::OK,MessageBoxIcon::Information);
					 }
					 else
					 {
						 MessageBox::Show(System::String(mensaje.c_str()).ToString(),"Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);
					 }

			 }


		 }
private: System::Void btCancelarModificacionCliente_Click(System::Object^  sender, System::EventArgs^  e) {

			lblIdSocioModificacionCliente->Text="";
			txtDniModificacionCliente->Text="";
			txtNombreModificacionCliente->Text="";
			txtApellidosModificacionCliente->Text="";
			txtDireccionModificacionCliente->Text="";
			txtTlfModificacionCliente->Text="";


			
			txtNombreModificacionCliente->Enabled=false;
			txtApellidosModificacionCliente->Enabled=false;
			txtDireccionModificacionCliente->Enabled=false;
			txtTlfModificacionCliente->Enabled=false;
			txtDniModificacionCliente->Enabled=true;
			btBuscarModificacionCliente->Enabled=true;
			btCancelarModificacionCliente->Enabled=false;
			btModificarModificacionCliente->Enabled=false;
		 }

private: System::Void btAceptarAltaAlquiler_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (tbIdClienteNuevoAlquiler->Text==""){
				 MessageBox::Show("Debes introducir un Id de cliente","Aviso", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			 }
			 else if (tbIdBiciNuevoAlquiler->Text==""){
				MessageBox::Show("Debes introducir un Id de bici","Aviso", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			 }
			 else{

				string fechaAlta = convierteStringAstring(System::Convert::ToString(dTimeFechaNuevoAlquiler->Text));
								 
				int idBici = System::Convert::ToInt32(tbIdBiciNuevoAlquiler->Text);
				string dniCliente = convierteStringAstring(tbIdClienteNuevoAlquiler->Text);
				Bicicleta b;
				Cliente c;
				
				if (!tienda.buscaClientePorDni(dniCliente,c)){
					MessageBox::Show("El id de ese cliente no existe","Aviso", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				}else if (!tienda.buscaBiciPorRegistro(idBici,b)){
					MessageBox::Show("El id de esta bicicleta no existe","Aviso", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				}else if ( b.getEstado()==Bicicleta::Alquilada || b.getEstado()==Bicicleta::enTaller)
				{
					MessageBox::Show("La bicicleta con ese id no esta disponible","Aviso", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				}else{
					 //Meter el alquiler
					 //bool Tienda::alquila (int codigoCliente, int codigoBici, string fAlquiler, string fDevolucion,TipoBici tipo, float precio){
					 string fechaFin="";
					 Oferta o;
					 // Ver la oferta que le aplicamos a la bicicleta
					 //buscaOfertaPorRegistro(Bicicleta::TipoBici b, Oferta &oferta)
					 float precio= b.getPrecio();
					 if (tienda.buscaOfertaPorTipo(b.getTipo(),o)){
						 if ((c.numAlquileresTipo(b.getTipo())+1) % o.numAlquileres() == 0) 
						 {
							 int descuento=100-System::Convert::ToInt32(o.descuento());
							 String^ cad=descuento.ToString();
							 cad="0,"+cad;
							 float precioDescuento=System::Convert::ToSingle(cad);
							 precio = precio * precioDescuento;
						 }
						 else
							 precio = b.getPrecio();
					 }else
						 precio = b.getPrecio();
				
						MessageBox::Show("Precio: "+precio.ToString(),"Información", MessageBoxButtons::OK, MessageBoxIcon::Information);
				

					 bool alquilado = tienda.alquila(c.idCliente(),idBici,fechaAlta,fechaFin,b.getTipo(),precio);
					 if (alquilado){
							 MessageBox::Show("El alquiler se registro satisfactoriamente","Nuevo alquiler", MessageBoxButtons::OK, MessageBoxIcon::Information);
							 tbIdClienteNuevoAlquiler->Text="";
							 tbIdBiciNuevoAlquiler->Text="";
							 dTimeFechaNuevoAlquiler->Text="";
					}
				}
			 }
		 }
private: System::Void btCancelarAltaAlquiler_Click(System::Object^  sender, System::EventArgs^  e) {
			  tbIdClienteNuevoAlquiler->Text="";
			 tbIdBiciNuevoAlquiler->Text="";
		 }
private: System::Void btAceptarBajaAlquiler_Click(System::Object^  sender, System::EventArgs^  e) {
			if(textBoxDniSocioBajaAlquiler->Text==""){
				MessageBox::Show("Debes introducir un DNI de socio","Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);
			}else if(textBoxidBiciBajaAlquiler->Text==""){
				MessageBox::Show("Debes introducir un Id de bicicleta","Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);
			}
			else {
				Cliente cliente;
				tienda.buscaClientePorDni (convierteStringAstring(textBoxDniSocioBajaAlquiler->Text),cliente);
				int i = 0;
				bool encontrado = false;
				int id = System::Convert::ToInt32(textBoxidBiciBajaAlquiler->Text);
			
					while((i<cliente.alquileres().numElems())&&(!encontrado)){
						if(cliente.alquileres().dameElem(i).id_bici() == id){
							encontrado = true;
							string fecha = convierteStringAstring(System::Convert::ToString(dtpDevolucion->Text));
							ListaAlquileres alquileres = cliente.alquileres();
							Alquiler alqui = alquileres.dameElem(i);
							alqui.fecha_devolucion(fecha);
							alquileres.borraElem(i);
							alquileres.ponElem(alqui);
							cliente.alquileres(alquileres);
							Bicicleta bici;
							tienda.buscaBiciPorRegistro(id, bici);
							bici.setTamanyo(bici.getTamanyo());
							bici.setTipo(bici.getTipo());
							bici.setEstado(Bicicleta::Disponible);
							bici.setPrecioPorDia(bici.getPrecio());
							bici.setIdBicicleta(bici.getIdBicicleta());
							string mensaje="";
							tienda.modificarBici(bici.getIdBicicleta(),bici);
							tienda.modificarCliente(cliente.idCliente(),cliente);
							 MessageBox::Show("El alquiler fue dado de baja","Baja alquiler", MessageBoxButtons::OK, MessageBoxIcon::Information);
							 textBoxDniSocioBajaAlquiler->Text="";
							 textBoxidBiciBajaAlquiler->Text="";
							 dtpDevolucion->Text="";
						}
						else{
							i++;
						}
					}
					if(!encontrado)
						MessageBox::Show("La bici no es del socio","Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);
			}
		 }
private: System::Void btnConsultaAlquiler_Click(System::Object^  sender, System::EventArgs^  e) {
			txtConsultaAlquiler->Text="";
			 ListaClientes clientes = tienda.dameClientes();
			 if(clientes.numElems()>0)
			 {
				 for(int j=0;j<clientes.numElems();j++){
					 Cliente cliente = clientes.dameElem(j);
					 ListaAlquileres alquileres = cliente.alquileres();
					 String^ cadena="";
					 if(alquileres.numElems()>0)
					 {
						 for(int i=0;i<alquileres.numElems();i++)
						 {
							 cadena="ID: "+ System::Convert::ToString(alquileres.dameElem(i).idAlquiler()) + 
									"\r\n\t -- Fecha Alquiler: "+ System::String(alquileres.dameElem(i).fecha_alquiler().c_str()).ToString()+
									"\r\n\t -- Fecha Devolucion: "+ System::String(alquileres.dameElem(i).fecha_devolucion().c_str()).ToString()+
									"\r\n\t -- ID bici: "+ System::Convert::ToString(alquileres.dameElem(i).id_bici()) +
									"\r\n\t -- Tipo bici: " +System::String(alquileres.dameElem(i).tipoAString(alquileres.dameElem(i).tipo_bici()).c_str()).ToString()+
									"\r\n\t -- Precio de la factura: "+ System::Convert::ToString(alquileres.dameElem(i).precio_factura());
							 txtConsultaAlquiler->Text=txtConsultaAlquiler->Text + cadena + "\r\n" ;
						}
					 }
				 }
			 }
		 }

private: System::Void cbTipoAltaInci_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			  if (cbTipoAltaInci->SelectedIndex == 1){
				txtIdBiciAltaInci->Enabled=true;
				txtImporAltaInci->Enabled=true;
				cbEstadAltaInci->Enabled=true;
				txtNombreAltaInci->Enabled=false;
			 }
			 else if (cbTipoAltaInci->SelectedIndex == 2){
				txtNombreAltaInci->Enabled=true;
				txtIdBiciAltaInci->Enabled=false;
				txtImporAltaInci->Enabled=false;
				cbEstadAltaInci->Enabled=false;
			 }
			 else{
				txtNombreAltaInci->Enabled=false;
				txtIdBiciAltaInci->Enabled=false;
				txtImporAltaInci->Enabled=false;
				cbEstadAltaInci->Enabled=false;
			 }
		 }
private: System::Void btCancelarBajaAlquiler_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBoxDniSocioBajaAlquiler->Text="";
			 textBoxidBiciBajaAlquiler->Text="";
			 dtpDevolucion->Text="";
		 }
private: System::Void btAcep_Click(System::Object^  sender, System::EventArgs^  e) {
			  if(txtIdIncidenciaModInci->Text=="")
			 {
				 MessageBox::Show("Debes introducir el ID de la incidencia","Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);
			 }
			 else
			 {
				int idInci=System::Convert::ToInt32(txtIdIncidenciaModInci->Text);
				Incidencia inci;
				bool resultado=tienda.buscaIncidenciaPorId(idInci,inci);

				if(resultado)
					if (inci.idBici()!=-1)
					{
						txtFechaMod->Text=String(inci.fechaCreacion().c_str()).ToString();
						txtIdBiciModInci->Text=System::Convert::ToString(inci.idBici());
						txtImporteModInci->Text=System::Convert::ToString(inci.importe());
						txtConceptoModInci->Text=String(inci.concepto().c_str()).ToString();
						if (inci.estadoI()==Incidencia::Resuelta)
							comboBoxEstadoModInci->SelectedIndex=1;
						if (inci.estadoI()==Incidencia::EnProceso)
							comboBoxEstadoModInci->SelectedIndex=2;
				
						txtIdIncidenciaModInci->Enabled=false;
						txtFechaMod->Enabled=true;
						txtIdBiciModInci->Enabled=true;
						txtImporteModInci->Enabled=true;
						txtConceptoModInci->Enabled=true;
						comboBoxEstadoModInci->Enabled=true;
			 
						btAcep->Enabled=false;
						btMod->Enabled=true;
						btCanc->Enabled=true;

					}
					else
						MessageBox::Show("Solo puede realizar modificaciones de incidencias sobre bicicletas","Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);
				else
				{
					MessageBox::Show("No se encuentra a nonguna incidencia con esa ID","Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);
				}
			 }

		 }
private: System::Void btMod_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 if(txtFechaMod->Text=="")
			 {
				 MessageBox::Show("Debes introducir la fecha de creación de la incidencia","Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);
			 }
			 else if(txtIdBiciModInci->Text=="")
			 {
				 MessageBox::Show("Debes introducir el ID de bici","Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);
			 }
			 else if(txtImporteModInci->Text=="")
			 {
				 MessageBox::Show("Debes introducir el importe de la incidencia","Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);
			 }
			 else if(txtConceptoModInci->Text=="")
			 {
				 MessageBox::Show("Debes introducir el concepto de la incidencia","Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);
			 }
			 else if(comboBoxEstadoModInci->SelectedIndex==0)
			 {
				 MessageBox::Show("Debes seleccionar un estado para la incidencia","Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);
			 }
			 else
			 {

					 Incidencia inci;
					 int idBici = System::Convert::ToInt32(txtIdBiciModInci->Text);
					 string fCreacion = convierteStringAstring(txtFechaMod->Text);
					 string concepto = convierteStringAstring(txtConceptoModInci->Text);
					 float importe = System::Convert::ToSingle(txtImporteModInci->Text);
					 int idInci=System::Convert::ToInt32(txtIdIncidenciaModInci->Text);

					 inci.idIncidencia(idInci);
					 inci.fechaCreacion(fCreacion);
					 inci.idBici(idBici);
					 inci.concepto(concepto);
					 inci.importe(importe);
					 if (comboBoxEstadoModInci->SelectedIndex==1) 
						inci.estadoI(Incidencia::Resuelta);
					 else if (comboBoxEstadoModInci->SelectedIndex==2)
						inci.estadoI(Incidencia::EnProceso);

					 string mensaje="";
					 bool resultado=modificarIncidencia(tienda,inci.idIncidencia(),inci,mensaje);
					 
					 if(resultado)
					 {
							txtIdIncidenciaModInci->Text="";
							txtFechaMod->Text="";
							txtIdBiciModInci->Text="";
							txtImporteModInci->Text="";
							txtConceptoModInci->Text="";
							comboBoxEstadoModInci->SelectedIndex=0;
				
							txtIdIncidenciaModInci->Enabled=true;
							txtFechaMod->Enabled=false;
							txtIdBiciModInci->Enabled=false;
							txtImporteModInci->Enabled=false;
							txtConceptoModInci->Enabled=false;
							comboBoxEstadoModInci->Enabled=false;
			 
							btAcep->Enabled=true;
							btMod->Enabled=false;
							btCanc->Enabled=false;
							

							
							MessageBox::Show("La incidencia se ha modificado correctamente","Modificación Socio", MessageBoxButtons::OK,MessageBoxIcon::Information);
					 }
					 else
					 {
						 MessageBox::Show(System::String(mensaje.c_str()).ToString(),"Aviso", MessageBoxButtons::OK,MessageBoxIcon::Warning);
					 }

			 }
		 }
private: System::Void btCanc_Click(System::Object^  sender, System::EventArgs^  e) {
			 txtIdIncidenciaModInci->Text="";
			txtFechaMod->Text="";
			txtIdBiciModInci->Text="";
			txtImporteModInci->Text="";
			txtConceptoModInci->Text="";
			comboBoxEstadoModInci->SelectedIndex=0;
				
			txtIdIncidenciaModInci->Enabled=true;
			txtFechaMod->Enabled=false;
			txtIdBiciModInci->Enabled=false;
			txtImporteModInci->Enabled=false;
			txtConceptoModInci->Enabled=false;
			comboBoxEstadoModInci->Enabled=false;
			 
			btAcep->Enabled=true;
			btMod->Enabled=false;
			btCanc->Enabled=false;
		 }

};
}


