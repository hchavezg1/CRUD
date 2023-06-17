#pragma once
#include "Form1.h"

#include "contraseña.h"






namespace CRUD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace CppCLRWinFormsProject;

	

	/// <summary>
	/// Resumen de LOGIN
	/// </summary>
	public ref class LOGIN : public System::Windows::Forms::Form	{
	public:
		LOGIN(void)
		{
			InitializeComponent();

			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~LOGIN()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txt_usuario;
	private: System::Windows::Forms::TextBox^ txt_contraseña;



	private: System::Windows::Forms::Button^ btn_iniciar;


	private:	   String^ ConnectionString = "datasource=localhost; username=root; password=hugoch97; database=usuarios;";
	private: MySqlConnection^ conn = gcnew MySqlConnection(ConnectionString);
	private: VEHICULO^ data;
	
	
	
	
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txt_usuario = (gcnew System::Windows::Forms::TextBox());
			this->txt_contraseña = (gcnew System::Windows::Forms::TextBox());
			this->btn_iniciar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Teal;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(101, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(190, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"INICIAR SESION";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Teal;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(24, 143);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(66, 19);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Usuario:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Teal;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(-1, 220);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 19);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Contraseña:";
			// 
			// txt_usuario
			// 
			this->txt_usuario->Location = System::Drawing::Point(96, 134);
			this->txt_usuario->Multiline = true;
			this->txt_usuario->Name = L"txt_usuario";
			this->txt_usuario->Size = System::Drawing::Size(212, 28);
			this->txt_usuario->TabIndex = 3;
			// 
			// txt_contraseña
			// 
			this->txt_contraseña->Location = System::Drawing::Point(96, 211);
			this->txt_contraseña->Multiline = true;
			this->txt_contraseña->Name = L"txt_contraseña";
			this->txt_contraseña->PasswordChar = '*';
			this->txt_contraseña->Size = System::Drawing::Size(212, 28);
			this->txt_contraseña->TabIndex = 4;
			// 
			// btn_iniciar
			// 
			this->btn_iniciar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_iniciar->FlatAppearance->BorderSize = 0;
			this->btn_iniciar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_iniciar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_iniciar->ForeColor = System::Drawing::Color::White;
			this->btn_iniciar->Location = System::Drawing::Point(129, 261);
			this->btn_iniciar->Name = L"btn_iniciar";
			this->btn_iniciar->Size = System::Drawing::Size(128, 26);
			this->btn_iniciar->TabIndex = 6;
			this->btn_iniciar->Text = L"INGRESAR";
			this->btn_iniciar->UseVisualStyleBackColor = false;
			this->btn_iniciar->Click += gcnew System::EventHandler(this, &LOGIN::button1_Click);
			// 
			// LOGIN
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Teal;
			this->ClientSize = System::Drawing::Size(347, 369);
			this->Controls->Add(this->btn_iniciar);
			this->Controls->Add(this->txt_contraseña);
			this->Controls->Add(this->txt_usuario);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"LOGIN";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L" ";
			this->Load += gcnew System::EventHandler(this, &LOGIN::LOGIN_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void LOGIN_Load(System::Object^ sender, System::EventArgs^ e) {
	}

		   //EVENTO QUE NOS PERMITE INICIAR SESION CON USUARIO Y CONTRASENA//
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txt_usuario->Text == "") {

			MessageBox::Show("El usuario esta vacio");
			return;
		}
		String^ sql = "select * from usuarios where USUARIO= '" + txt_usuario->Text + "' and CONTRASEÑA = '" + txt_contraseña->Text + "'";
		MySqlCommand^ cursor = gcnew MySqlCommand(sql, conn);
		MySqlDataReader^ dataReader; 
		
		
		try {
			
			
			this->conn->Open();
			
			dataReader = cursor->ExecuteReader();
			if (dataReader->Read())
			{
				
				
				this->Hide();
				MessageBox::Show(L"Bienvenido: " + txt_usuario->Text);
				
				CppCLRWinFormsProject::Form1^ form = gcnew CppCLRWinFormsProject::Form1(); // LLAMAMOS AL FORMULARIO FORM1 //
				form->Show(); //
				
			}
			else
			{
				MessageBox::Show(L"Usuario o contraseña incorrecto");
				
			}
			this->conn->Close();
		}
		catch (Exception^ x)
		{
			MessageBox::Show(x->Message);

		}
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {

		
		CRUD::contraseña^ form = gcnew CRUD::contraseña();
		
		form->Show();
		


		
	}
};
}
