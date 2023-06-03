//CREAMOS UN CPP PARA LOS SIGUIENTES CONSTRUCTORES//
#include "pch.h"
#include "VEHICULO.h"





VEHICULO::VEHICULO()
{
	// DECLARAMOS LOS SIGUIENTES OBJETOS PARA CONECTAR EL FORMULARIO CON LA BASE DE DATOS//
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

	
	

	DataTable^ VEHICULO::getData() //METODO PARA CAPTURAR DATOS DE LA BASE DE DATOS//
	{
		String^ sql = "Select * from vehiculos"; //SELECCIONAMOS LA TABLA DE DATOS TAL CUAL LA TENEMOS EN LA BASE DE DATOS//
		MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn); 
		MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor); //ADAPTADOR DE DATOS//
		DataTable^ tabla = gcnew DataTable(); 
		data->Fill(tabla);//LLENAMOS LA TABLA CON LOS DATOS QUE YA ADAPTAMOS CON EL DATA//
		return tabla;
	}

	void VEHICULO::Insertar(String^c, String^n, String^a, String^m, String^s ) //METODO PARA INSERTAR DATOS EN LA BASE DE DATOS//
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

	void VEHICULO::Modificar(String^ c, String^n, String^ a, String^ m, String^ s, String^ ref) //METODO PARA MODIFICAR DATOS EN LA BASE DE DATOS//
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

	void VEHICULO::Eliminar(String^ CODIGO)  //METODO PARA ELIMINAR UN REGISTRO EN LA BASE DE DATOS//
	{
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

	
	