//CREAMOS UN CPP PARA LOS SIGUIENTES CONSTRUCTORES//
#include "pch.h"
#include "VEHICULO.h"





VEHICULO::VEHICULO()
{
	// DECLARAMOS LAS VARIABLES PARA CONECTAR EL PROJECTO CON LA BASE DE DATOS//
	this->ConnectionString = "datasource=localhost; username=root; password=hugoch97; database=vehiculo;";
	this->conn = gcnew MySqlConnection(this->ConnectionString);     
}

	void VEHICULO::AbrirConexion()
	{
		this->conn->Open();           //METODO PARA ABRIR LA CONEXION CON LA BASE DE DATOS//
	}

	void VEHICULO::CerrarConexion()
	{
		this->conn->Close();         //METODO PARA CERRAR LA CONEXION CON LA BASE DE DATOS//
	}

	
	

	DataTable^ VEHICULO::getData()
	{
		String^ sql = "Select * from vehiculos";
		MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
		MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
		DataTable^ tabla = gcnew DataTable();
		data->Fill(tabla);
		return tabla;
	}

	void VEHICULO::Insertar(String^c, String^n, String^a, String^m, String^s )
	{
		String^ sql = "insert into vehiculos(codigo, nombre, año, marca, serie) values ('"+c+"', '"+n+"','"+a+"', '"+m+"', '"+s+"')";
		MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
		try
		{
			cursor->ExecuteNonQuery();

		}
		catch (Exception^ e)
		{
			using namespace System::Windows::Forms;
			using namespace System::Data;
			using namespace System::Drawing;
			MessageBox::Show(e->Message);
		}
	}

	void VEHICULO::Modificar(String^ c, String^n, String^ a, String^ m, String^ s, String^ ref)
	{
		String^ sql = "update vehiculos set CODIGO='" + c + "', NOMBRE = '" + n + "',  AÑO = '" + a + "', MARCA = '" + m + "', SERIE = '" + s + "' where CODIGO = '" + ref + "'";
		MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
			try
		{
			using namespace System::Windows::Forms;
			using namespace System::Data;
			using namespace System::Drawing;
			cursor->ExecuteNonQuery();

		}
			catch (Exception^ e)
			{
				using namespace System::Windows::Forms;
				using namespace System::Data;
				using namespace System::Drawing;
				MessageBox::Show(e->Message);
			}

	}

	void VEHICULO::Eliminar(String^ CODIGO) {
		String^ sql = "delete from vehiculos where CODIGO = '" + CODIGO + "'";
		MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
		try
		{
			using namespace System::Windows::Forms;
			using namespace System::Data;
			using namespace System::Drawing;
			cursor->ExecuteNonQuery();
			using namespace System::Windows::Forms;
			using namespace System::Data;
			using namespace System::Drawing;
			MessageBox::Show("¡Eliminado Correctamente");

		}
		catch (Exception^ e)
		{
			using namespace System::Windows::Forms;
			using namespace System::Data;
			using namespace System::Drawing;
			MessageBox::Show(e->Message);
		}
	}

	
	