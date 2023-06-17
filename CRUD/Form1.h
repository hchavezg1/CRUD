#pragma once
#include "VEHICULO.h" // INCLUIMOS LA CLASE VEHICULO //
#include "modificar.h" //INCLUIMOS LA CLASE MODIFICAR//





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

	private: System::Windows::Forms::TextBox^ txt_nombre;
	private: System::Windows::Forms::TextBox^ txt_año;


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
	private: VEHICULO^ data;   //CREAMOS EL OBJETO VEHICULO^DATA//
	private: System::Windows::Forms::Label^ lbl_nombre;
	private: System::Windows::Forms::TextBox^ txt_marca;


	private: System::Windows::Forms::TextBox^ txt_buscar;

	private: System::Windows::Forms::Button^ btn_buscar;
	private:	   String^ ConnectionString;
	private:	   MySqlConnection^ conn;
	private: MySqlDataReader^ lector;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_calculo;


	private: System::Windows::Forms::Button^ btn_borrar;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txt_proceso;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txt_fisica;
	private: System::Windows::Forms::TextBox^ txt_derecho;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txt_programacion;
	private: System::Windows::Forms::Label^ label6;








	






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
			this->txt_nombre = (gcnew System::Windows::Forms::TextBox());
			this->txt_año = (gcnew System::Windows::Forms::TextBox());
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
			this->txt_calculo = (gcnew System::Windows::Forms::TextBox());
			this->btn_borrar = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txt_proceso = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txt_fisica = (gcnew System::Windows::Forms::TextBox());
			this->txt_derecho = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txt_programacion = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid))->BeginInit();
			this->SuspendLayout();
			// 
			// txt_nombre
			// 
			this->txt_nombre->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_nombre->Location = System::Drawing::Point(725, 82);
			this->txt_nombre->Multiline = true;
			this->txt_nombre->Name = L"txt_nombre";
			this->txt_nombre->Size = System::Drawing::Size(232, 30);
			this->txt_nombre->TabIndex = 1;
			// 
			// txt_año
			// 
			this->txt_año->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_año->Location = System::Drawing::Point(725, 118);
			this->txt_año->Multiline = true;
			this->txt_año->Name = L"txt_año";
			this->txt_año->Size = System::Drawing::Size(232, 30);
			this->txt_año->TabIndex = 2;
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
			this->data_grid->Size = System::Drawing::Size(528, 292);
			this->data_grid->TabIndex = 3;
			this->data_grid->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::data_grid_CellContentClick);
			this->data_grid->DoubleClick += gcnew System::EventHandler(this, &Form1::data_grid_DoubleClick);
			// 
			// lbl_marca
			// 
			this->lbl_marca->AutoSize = true;
			this->lbl_marca->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_marca->ForeColor = System::Drawing::Color::White;
			this->lbl_marca->Location = System::Drawing::Point(634, 164);
			this->lbl_marca->Name = L"lbl_marca";
			this->lbl_marca->Size = System::Drawing::Size(85, 20);
			this->lbl_marca->TabIndex = 4;
			this->lbl_marca->Text = L"GENERO";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(659, 128);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"EDAD";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// lbl_serie
			// 
			this->lbl_serie->AutoSize = true;
			this->lbl_serie->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_serie->ForeColor = System::Drawing::Color::White;
			this->lbl_serie->Location = System::Drawing::Point(617, 200);
			this->lbl_serie->Name = L"lbl_serie";
			this->lbl_serie->Size = System::Drawing::Size(102, 20);
			this->lbl_serie->TabIndex = 6;
			this->lbl_serie->Text = L"CALCULO I";
			// 
			// btn_guardar
			// 
			this->btn_guardar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_guardar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_guardar->FlatAppearance->BorderSize = 0;
			this->btn_guardar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_guardar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_guardar->ForeColor = System::Drawing::Color::White;
			this->btn_guardar->Location = System::Drawing::Point(630, 380);
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
			this->lbl_nombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_nombre->ForeColor = System::Drawing::Color::White;
			this->lbl_nombre->Location = System::Drawing::Point(634, 92);
			this->lbl_nombre->Name = L"lbl_nombre";
			this->lbl_nombre->Size = System::Drawing::Size(85, 20);
			this->lbl_nombre->TabIndex = 8;
			this->lbl_nombre->Text = L"NOMBRE";
			// 
			// txt_marca
			// 
			this->txt_marca->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_marca->Location = System::Drawing::Point(725, 154);
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
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(759, 437);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(103, 38);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Salir... >";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(297, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(314, 24);
			this->label1->TabIndex = 13;
			this->label1->Text = L"INFORMACION ESTUDIANTES";
			// 
			// txt_calculo
			// 
			this->txt_calculo->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_calculo->Location = System::Drawing::Point(725, 190);
			this->txt_calculo->Multiline = true;
			this->txt_calculo->Name = L"txt_calculo";
			this->txt_calculo->Size = System::Drawing::Size(232, 30);
			this->txt_calculo->TabIndex = 15;
			// 
			// btn_borrar
			// 
			this->btn_borrar->BackColor = System::Drawing::Color::Red;
			this->btn_borrar->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btn_borrar->FlatAppearance->BorderSize = 0;
			this->btn_borrar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_borrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_borrar->ForeColor = System::Drawing::Color::White;
			this->btn_borrar->Location = System::Drawing::Point(12, 380);
			this->btn_borrar->Name = L"btn_borrar";
			this->btn_borrar->Size = System::Drawing::Size(108, 38);
			this->btn_borrar->TabIndex = 16;
			this->btn_borrar->Text = L"Borrar";
			this->btn_borrar->UseVisualStyleBackColor = false;
			this->btn_borrar->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(437, 378);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(103, 38);
			this->button2->TabIndex = 17;
			this->button2->Text = L"< Regresar";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click_1);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(594, 236);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(125, 20);
			this->label3->TabIndex = 18;
			this->label3->Text = L"PROCESO AD";
			// 
			// txt_proceso
			// 
			this->txt_proceso->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_proceso->Location = System::Drawing::Point(725, 226);
			this->txt_proceso->Multiline = true;
			this->txt_proceso->Name = L"txt_proceso";
			this->txt_proceso->Size = System::Drawing::Size(232, 30);
			this->txt_proceso->TabIndex = 19;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(650, 272);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(68, 20);
			this->label4->TabIndex = 20;
			this->label4->Text = L"FISICA";
			// 
			// txt_fisica
			// 
			this->txt_fisica->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_fisica->Location = System::Drawing::Point(724, 262);
			this->txt_fisica->Multiline = true;
			this->txt_fisica->Name = L"txt_fisica";
			this->txt_fisica->Size = System::Drawing::Size(232, 30);
			this->txt_fisica->TabIndex = 21;
			// 
			// txt_derecho
			// 
			this->txt_derecho->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_derecho->Location = System::Drawing::Point(724, 298);
			this->txt_derecho->Multiline = true;
			this->txt_derecho->Name = L"txt_derecho";
			this->txt_derecho->Size = System::Drawing::Size(232, 30);
			this->txt_derecho->TabIndex = 23;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(583, 308);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(136, 20);
			this->label5->TabIndex = 22;
			this->label5->Text = L"DERECHO INF.";
			// 
			// txt_programacion
			// 
			this->txt_programacion->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_programacion->Location = System::Drawing::Point(724, 334);
			this->txt_programacion->Multiline = true;
			this->txt_programacion->Name = L"txt_programacion";
			this->txt_programacion->Size = System::Drawing::Size(232, 30);
			this->txt_programacion->TabIndex = 25;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(565, 344);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(154, 20);
			this->label6->TabIndex = 24;
			this->label6->Text = L"PROGRAMACION";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(978, 541);
			this->Controls->Add(this->txt_programacion);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txt_derecho);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txt_fisica);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txt_proceso);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->btn_borrar);
			this->Controls->Add(this->txt_calculo);
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
			this->Controls->Add(this->txt_año);
			this->Controls->Add(this->txt_nombre);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"VEHICULOS";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//EVENTO QUE NOS MUESTRA LOS REGISTROS EN EL DATAGRID AL ABRIR EL FORMULARIO//
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		
		this->Consulta();
	}

		   public: void Consulta()
		   {
			   this->data->AbrirConexion();// abre la conexion con la base de datos//
			   this->data_grid->DataSource = this->data->getData(); //ingresa los datos en el data_grid//
			   this->data->CerrarConexion();//cerramos la conexion con la base de dataos//
		   }

			//EVENTO QUE NOS PERMITE INSERTAR UN REGISTRO EN LA BASE DE DATOS//
private: System::Void btn_guardar_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txt_nombre->Text == "") {

		MessageBox::Show("Campos vacios");
		return;
	}
		this->data->AbrirConexion();
	this->data->Insertar( this->txt_nombre->Text, this->txt_año->Text, this->txt_marca->Text, this->txt_calculo->Text, this->txt_proceso->Text, this->txt_fisica->Text, this->txt_derecho->Text, this->txt_programacion->Text); // aca es donde se insertan los datos a la base de datos//
	this->data->CerrarConexion();
	this->Consulta();
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
		//EVENTO QUE NOS PERMITE BUSCAR UN REGISTRO EN LA BASE DE DATOS //
private: System::Void btn_buscar_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->data->AbrirConexion();
	this->ConnectionString = "datasource=localhost; username=root; password=hugoch97; database=colegio;";
	this->conn = gcnew MySqlConnection(this->ConnectionString);
	String^ sql = "Select * from estudiantes where NOMBRE='" + txt_buscar->Text + "' ";
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(sql, this->conn);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	data_grid->DataSource = tabla;
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	this->data->CerrarConexion();

	
	}
	


		//EVENTO QUE NOS PERMITE MODIFICAR UN REGISTRO//
private: System::Void data_grid_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
	String^ CODIGO = Convert::ToString(data_grid->SelectedRows[0]->Cells[0]->Value);
	String^ NOMBRE = Convert::ToString(data_grid->SelectedRows[0]->Cells[1]->Value);
	String^ ANIO = Convert::ToString(data_grid->SelectedRows[0]->Cells[2]->Value);
	String^ MARCA = Convert::ToString(data_grid->SelectedRows[0]->Cells[3]->Value);
	String^ CALCULO = Convert::ToString(data_grid->SelectedRows[0]->Cells[4]->Value);
	String^ PROCESO = Convert::ToString(data_grid->SelectedRows[0]->Cells[5]->Value);
	String^ FISICA = Convert::ToString(data_grid->SelectedRows[0]->Cells[6]->Value);
	String^ DERECHO = Convert::ToString(data_grid->SelectedRows[0]->Cells[7]->Value);
	String^ PROGRAMACION = Convert::ToString(data_grid->SelectedRows[0]->Cells[8]->Value);
	CRUD::modificar^ form = gcnew CRUD::modificar();
	form->txt_Codigo->Text = CODIGO;
	form->txt_Nombre->Text = NOMBRE;
	form->txt_Anio->Text = ANIO;
	form->txt_Marca->Text = MARCA;
	form->txt_Calculo->Text = CALCULO;
	form->txt_Proceso->Text = PROCESO;
	form->txt_Fisica->Text = FISICA;
	form->txt_Derecho->Text = DERECHO;
	form->txt_Progra->Text = PROGRAMACION;
	form->ShowDialog();
	VEHICULO^ data = gcnew VEHICULO();
	data->AbrirConexion();
	data->Modificar(form->txt_Codigo->Text, form->txt_Nombre->Text, form->txt_Anio->Text, form->txt_Marca->Text, form->txt_Calculo->Text, form->txt_Proceso->Text, form->txt_Fisica->Text, form->txt_Derecho->Text, form->txt_Progra->Text, CODIGO);
	data->CerrarConexion();
	this->Consulta();

}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void data_grid_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void txt_buscar_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

	   //EVENTO QUE NOS PERMITE CERRAR EL PROGRAMA//
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {

	this->Close();
}

	   //EVENTO QUE NOS PERMITE ELIMINAR UN REGISTRO EN LA BASE DE DATOS 
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ CODIGO = Convert::ToString(data_grid->SelectedRows[0]->Cells[0]->Value);
	VEHICULO^ data = gcnew VEHICULO();
	data->AbrirConexion();
	data->Eliminar(CODIGO);
	data->CerrarConexion();
	this->Consulta();
}

	   //EVENTO QUE NOS PERMITE REFRESCAR EL REGISTRO DE BUSQUEDA//
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->Consulta();
}
};
}
