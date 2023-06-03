#pragma once
using namespace std;
using namespace System::Data;
using namespace System;
using namespace MySql::Data::MySqlClient;


// CREAMOS LA CLASE VEHICULO// 
ref class VEHICULO
{
private:
	//CREAMOS LOS ATRIBUTOS  PRIVADOS//
	String^ ConnectionString; //CADENA DE CONEXIION 
	MySqlConnection^ conn; // CREA LA CONEXION CON MYSQL
	
public:
	VEHICULO();//METODO CONSTRUCTOR

	//CREAMOS LOS METODOS PUBLICOS//
	DataTable^ getData(); //PARA HACER MODIFICACIONES EN LA BASE DE DATOS//
	void AbrirConexion(); //ABRE CONEXION CON LA BASE DE DATOS
	void CerrarConexion(); //CIERRA CONEXION CON LA BASE DE DATOS
	

	//NETODOS PARA INSERTAR MODIFICAR Y ELIMINAR UN REGISTRO//
	void Insertar(String^, String^, String^, String^, String^);
	void Modificar(String^, String^, String^, String^, String^, String^);
	void Eliminar(String^);
	
	
	
	
};

 