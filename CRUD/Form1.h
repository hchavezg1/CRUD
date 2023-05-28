#pragma once
#include "VEHICULO.h"
#include "modificar.h"





namespace CppCLRWinFormsProject {

	

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;



	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	
	public:
		
		
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->data = gcnew VEHICULO();
	//data va ser igual a gcnew//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txt_codigo;
	private: System::Windows::Forms::TextBox^ txt_nombre;
	private: System::Windows::Forms::TextBox^ txt_a�o;


	protected:

	protected:

	protected:




	protected:

	protected:


	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker2;
	private: System::Windows::Forms::DataGridView^ data_grid;

	private: System::Windows::Forms::Label^ lbl_marca;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ lbl_serie;
	private: System::Windows::Forms::Button^ btn_guardar;
	private: VEHICULO^ data;
	private: System::Windows::Forms::Label^ lbl_nombre;
	private: System::Windows::Forms::TextBox^ txt_marca;


	private: System::Windows::Forms::TextBox^ txt_buscar;

	private: System::Windows::Forms::Button^ btn_buscar;
	private:	   String^ ConnectionString;
	private:	   MySqlConnection^ conn;
	private: MySqlDataReader^ lector;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txt_serie;
	private: System::Windows::Forms::Button^ btn_borrar;







	






	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txt_codigo = (gcnew System::Windows::Forms::TextBox());
			this->txt_nombre = (gcnew System::Windows::Forms::TextBox());
			this->txt_a�o = (gcnew System::Windows::Forms::TextBox());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->backgroundWorker2 = (gcnew System::ComponentModel::BackgroundWorker());
			this->data_grid = (gcnew System::Windows::Forms::DataGridView());
			this->lbl_marca = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lbl_serie = (gcnew System::Windows::Forms::Label());
			this->btn_guardar = (gcnew System::Windows::Forms::Button());
			this->lbl_nombre = (gcnew System::Windows::Forms::Label());
			this->txt_marca = (gcnew System::Windows::Forms::TextBox());
			this->txt_buscar = (gcnew System::Windows::Forms::TextBox());
			this->btn_buscar = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txt_serie = (gcnew System::Windows::Forms::TextBox());
			this->btn_borrar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid))->BeginInit();
			this->SuspendLayout();
			// 
			// txt_codigo
			// 
			this->txt_codigo->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_codigo->Location = System::Drawing::Point(631, 91);
			this->txt_codigo->Multiline = true;
			this->txt_codigo->Name = L"txt_codigo";
			this->txt_codigo->Size = System::Drawing::Size(232, 30);
			this->txt_codigo->TabIndex = 0;
			// 
			// txt_nombre
			// 
			this->txt_nombre->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_nombre->Location = System::Drawing::Point(630, 127);
			this->txt_nombre->Multiline = true;
			this->txt_nombre->Name = L"txt_nombre";
			this->txt_nombre->Size = System::Drawing::Size(232, 30);
			this->txt_nombre->TabIndex = 1;
			// 
			// txt_a�o
			// 
			this->txt_a�o->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_a�o->Location = System::Drawing::Point(630, 163);
			this->txt_a�o->Multiline = true;
			this->txt_a�o->Name = L"txt_a�o";
			this->txt_a�o->Size = System::Drawing::Size(232, 30);
			this->txt_a�o->TabIndex = 2;
			// 
			// data_grid
			// 
			this->data_grid->AllowUserToOrderColumns = true;
			this->data_grid->AllowUserToResizeColumns = false;
			this->data_grid->AllowUserToResizeRows = false;
			this->data_grid->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->data_grid->BackgroundColor = System::Drawing::Color::White;
			this->data_grid->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->data_grid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->data_grid->Location = System::Drawing::Point(12, 82);
			this->data_grid->MultiSelect = false;
			this->data_grid->Name = L"data_grid";
			this->data_grid->ReadOnly = true;
			this->data_grid->RowHeadersVisible = false;
			this->data_grid->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->data_grid->Size = System::Drawing::Size(464, 292);
			this->data_grid->TabIndex = 3;
			this->data_grid->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::data_grid_CellContentClick);
			this->data_grid->DoubleClick += gcnew System::EventHandler(this, &Form1::data_grid_DoubleClick);
			// 
			// lbl_marca
			// 
			this->lbl_marca->AutoSize = true;
			this->lbl_marca->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_marca->ForeColor = System::Drawing::Color::White;
			this->lbl_marca->Location = System::Drawing::Point(552, 209);
			this->lbl_marca->Name = L"lbl_marca";
			this->lbl_marca->Size = System::Drawing::Size(72, 20);
			this->lbl_marca->TabIndex = 4;
			this->lbl_marca->Text = L"MARCA";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(578, 173);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"A�O";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// lbl_serie
			// 
			this->lbl_serie->AutoSize = true;
			this->lbl_serie->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_serie->ForeColor = System::Drawing::Color::White;
			this->lbl_serie->Location = System::Drawing::Point(560, 245);
			this->lbl_serie->Name = L"lbl_serie";
			this->lbl_serie->Size = System::Drawing::Size(64, 20);
			this->lbl_serie->TabIndex = 6;
			this->lbl_serie->Text = L"SERIE";
			// 
			// btn_guardar
			// 
			this->btn_guardar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_guardar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_guardar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_guardar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_guardar->ForeColor = System::Drawing::Color::White;
			this->btn_guardar->Location = System::Drawing::Point(630, 271);
			this->btn_guardar->Name = L"btn_guardar";
			this->btn_guardar->Size = System::Drawing::Size(98, 36);
			this->btn_guardar->TabIndex = 7;
			this->btn_guardar->Text = L"Guardar";
			this->btn_guardar->UseVisualStyleBackColor = false;
			this->btn_guardar->Click += gcnew System::EventHandler(this, &Form1::btn_guardar_Click);
			// 
			// lbl_nombre
			// 
			this->lbl_nombre->AutoSize = true;
			this->lbl_nombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_nombre->ForeColor = System::Drawing::Color::White;
			this->lbl_nombre->Location = System::Drawing::Point(539, 137);
			this->lbl_nombre->Name = L"lbl_nombre";
			this->lbl_nombre->Size = System::Drawing::Size(85, 20);
			this->lbl_nombre->TabIndex = 8;
			this->lbl_nombre->Text = L"NOMBRE";
			// 
			// txt_marca
			// 
			this->txt_marca->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_marca->Location = System::Drawing::Point(630, 199);
			this->txt_marca->Multiline = true;
			this->txt_marca->Name = L"txt_marca";
			this->txt_marca->Size = System::Drawing::Size(232, 30);
			this->txt_marca->TabIndex = 9;
			// 
			// txt_buscar
			// 
			this->txt_buscar->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->txt_buscar->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_buscar->Location = System::Drawing::Point(12, 48);
			this->txt_buscar->Multiline = true;
			this->txt_buscar->Name = L"txt_buscar";
			this->txt_buscar->Size = System::Drawing::Size(379, 27);
			this->txt_buscar->TabIndex = 10;
			this->txt_buscar->TextChanged += gcnew System::EventHandler(this, &Form1::txt_buscar_TextChanged);
			// 
			// btn_buscar
			// 
			this->btn_buscar->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btn_buscar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_buscar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_buscar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_buscar->ForeColor = System::Drawing::Color::Black;
			this->btn_buscar->Location = System::Drawing::Point(397, 48);
			this->btn_buscar->Name = L"btn_buscar";
			this->btn_buscar->Size = System::Drawing::Size(79, 28);
			this->btn_buscar->TabIndex = 11;
			this->btn_buscar->Text = L"BUSCAR...";
			this->btn_buscar->UseVisualStyleBackColor = false;
			this->btn_buscar->Click += gcnew System::EventHandler(this, &Form1::btn_buscar_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(759, 437);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(103, 38);
			this->button1->TabIndex = 12;
			this->button1->Text = L"<Salir>...";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Yellow;
			this->label1->Location = System::Drawing::Point(297, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(243, 24);
			this->label1->TabIndex = 13;
			this->label1->Text = L"CLIENTES VEHICULOS";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(544, 101);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 20);
			this->label3->TabIndex = 14;
			this->label3->Text = L"CODIGO";
			// 
			// txt_serie
			// 
			this->txt_serie->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_serie->Location = System::Drawing::Point(630, 235);
			this->txt_serie->Multiline = true;
			this->txt_serie->Name = L"txt_serie";
			this->txt_serie->Size = System::Drawing::Size(232, 30);
			this->txt_serie->TabIndex = 15;
			// 
			// btn_borrar
			// 
			this->btn_borrar->BackColor = System::Drawing::Color::Red;
			this->btn_borrar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_borrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->btn_borrar->ForeColor = System::Drawing::Color::White;
			this->btn_borrar->Location = System::Drawing::Point(12, 380);
			this->btn_borrar->Name = L"btn_borrar";
			this->btn_borrar->Size = System::Drawing::Size(108, 38);
			this->btn_borrar->TabIndex = 16;
			this->btn_borrar->Text = L"Borrar";
			this->btn_borrar->UseVisualStyleBackColor = false;
			this->btn_borrar->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Teal;
			this->ClientSize = System::Drawing::Size(874, 487);
			this->Controls->Add(this->btn_borrar);
			this->Controls->Add(this->txt_serie);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btn_buscar);
			this->Controls->Add(this->txt_buscar);
			this->Controls->Add(this->txt_marca);
			this->Controls->Add(this->lbl_nombre);
			this->Controls->Add(this->btn_guardar);
			this->Controls->Add(this->lbl_serie);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->lbl_marca);
			this->Controls->Add(this->data_grid);
			this->Controls->Add(this->txt_a�o);
			this->Controls->Add(this->txt_nombre);
			this->Controls->Add(this->txt_codigo);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Evento cargar formualrio nos mostrara al ejecutar el programa los datos en el data_grid que estan en la base de datos//
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		
		this->Consulta();
	}
		   // metodo consulta nos permitira ingresar los datos de la base de datos al data_grid//
		   public: void Consulta()
		   {
			   this->data->AbrirConexion();// abre la conexion con la base de datos//
			   this->data_grid->DataSource = this->data->getData(); //ingresa los datos en el data_grid//
			   this->data->CerrarConexion();//cerramos la conexion con la base de dataos//
		   }

			//Evento click en el boton guardar nos permite ingresar los datos que estan en las cajas de texto a la base de datos//
private: System::Void btn_guardar_Click(System::Object^ sender, System::EventArgs^ e) {
	this->data->AbrirConexion();
	this->data->Insertar(this->txt_codigo->Text, this->txt_nombre->Text, this->txt_a�o->Text, this->txt_marca->Text, this->txt_serie->Text); // aca es donde se insertan los datos a la base de datos//
	this->data->CerrarConexion();
	this->Consulta();
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
		//EVENTO QUE NOS PERMITE BUSCAR UN REGISTRO EN LA BASE DE DATOS //
private: System::Void btn_buscar_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->data->AbrirConexion();
	this->ConnectionString = "datasource=localhost; username=root; password=hugoch97; database=vehiculo;";
	this->conn = gcnew MySqlConnection(this->ConnectionString);
	String^ sql = "Select * from vehiculos where NOMBRE='" + txt_buscar->Text + "'";
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(sql, this->conn);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	data_grid->DataSource = tabla;
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	this->data->CerrarConexion();
	}
	


		
private: System::Void data_grid_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
	String^ CODIGO = Convert::ToString(data_grid->SelectedRows[0]->Cells[0]->Value);
	String^ NOMBRE = Convert::ToString(data_grid->SelectedRows[0]->Cells[1]->Value);
	String^ ANIO = Convert::ToString(data_grid->SelectedRows[0]->Cells[2]->Value);
	String^ MARCA = Convert::ToString(data_grid->SelectedRows[0]->Cells[3]->Value);
	String^ SERIE = Convert::ToString(data_grid->SelectedRows[0]->Cells[4]->Value);
	CRUD::modificar^ form = gcnew CRUD::modificar();
	form->txt_Codigo->Text = CODIGO;
	form->txt_Nombre->Text = NOMBRE;
	form->txt_Anio->Text = ANIO;
	form->txt_Marca->Text = MARCA;
	form->txt_Serie->Text = SERIE;
	form->ShowDialog();
	VEHICULO^ data = gcnew VEHICULO();
	data->AbrirConexion();
	data->Modificar(form->txt_Codigo->Text, form->txt_Nombre->Text, form->txt_Anio->Text, form->txt_Marca->Text, form->txt_Serie->Text, CODIGO);
	data->CerrarConexion();
	this->Consulta();

}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void data_grid_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void txt_buscar_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {

	this->Close();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ NOMBRE = Convert::ToString(data_grid->SelectedRows[0]->Cells[1]->Value);
	VEHICULO^ data = gcnew VEHICULO();
	data->AbrirConexion();
	data->Eliminar(NOMBRE);
	data->CerrarConexion();
	this->Consulta();
}
};
}