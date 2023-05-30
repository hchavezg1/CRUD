#pragma once
using namespace std;
using namespace System::Data;
using namespace System;
using namespace MySql::Data::MySqlClient;


// CREAMOS LA CLASE VEHICULO// 
ref class VEHICULO
{
private:
	//CREAMOS LAS VARIABLES PUBLICAS//
	String^ ConnectionString;
	MySqlConnection^ conn;
	
public:
	VEHICULO();

	//CREAMOS LOS METODOS PUBLICOS//
	DataTable^ getData(); //PARA HACER MODIFICACIONES EN LA BASE DE DATOS//
	void AbrirConexion();
	void CerrarConexion();
	
	void Insertar(String^, String^, String^, String^, String^);
	void Modificar(String^, String^, String^, String^, String^, String^);
	void Eliminar(String^);
	
	
	
	
};

 