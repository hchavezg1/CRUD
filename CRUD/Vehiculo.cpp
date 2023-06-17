//CREAMOS UN CPP PARA LOS SIGUIENTES CONSTRUCTORES//
#include "pch.h"
#include "VEHICULO.h"





VEHICULO::VEHICULO()
{
	// DECLARAMOS LOS SIGUIENTES OBJETOS PARA CONECTAR EL FORMULARIO CON LA BASE DE DATOS//
	this->ConnectionString = "datasource=localhost; username=root; password=hugoch97; database=colegio;";
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
		String^ sql = "Select * from estudiantes"; //SELECCIONAMOS LA TABLA DE DATOS TAL CUAL LA TENEMOS EN LA BASE DE DATOS//
		MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn); 
		MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor); //ADAPTADOR DE DATOS//
		DataTable^ tabla = gcnew DataTable(); 
		data->Fill(tabla);//LLENAMOS LA TABLA CON LOS DATOS QUE YA ADAPTAMOS CON EL DATA//
		return tabla;
	}

	void VEHICULO::Insertar( String^n, String^e, String^g, String^no, String^p, String^f, String^d, String^p2 ) //METODO PARA INSERTAR DATOS EN LA BASE DE DATOS//
	{
		String^ sql = "insert into estudiantes(nombre, edad, genero, calculo, proceso, fisica, derecho, programacion) values ( '"+n+"','"+e+"', '"+g+"', '"+no+"', '" + p + "', '" + f + "', '" + d + "', '" + p2 + "' )";
		MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
		MySqlDataReader^ dataReader;


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

	void VEHICULO::Modificar(String^ i, String^n, String^ e, String^ g, String^ no, String^ p, String^ f, String^ d, String^ p2, String^ ref) //METODO PARA MODIFICAR DATOS EN LA BASE DE DATOS//
	{
		String^ sql = "update estudiantes set idestudiantes='" + i + "', NOMBRE = '" + n + "',  EDAD = '" + e + "', GENERO = '" + g + "', CALCULO= '" + n + "', PROCESO= '" + p + "', FISICA= '" + f + "', DERECHO= '" + d + "', PROGRAMACION= '" + p2 + "' where idestudiantes = '" + ref + "'";
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

	void VEHICULO::Eliminar(String^ idestudiantes)  //METODO PARA ELIMINAR UN REGISTRO EN LA BASE DE DATOS//
	{
		String^ sql = "delete from estudiantes where idestudiantes = '" + idestudiantes + "'";
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

	
	