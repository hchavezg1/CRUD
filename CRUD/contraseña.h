#pragma once
#include "VEHICULO.h"

namespace CRUD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de contraseña
	/// </summary>
	public ref class contraseña : public System::Windows::Forms::Form
	{
	public:
		contraseña(void)
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
		~contraseña()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_Guardar;
	public: System::Windows::Forms::TextBox^ txt_Contraseña;
	private:

	protected:



	protected:


	private: System::Windows::Forms::Label^ label3;


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btn_Guardar = (gcnew System::Windows::Forms::Button());
			this->txt_Contraseña = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btn_Guardar
			// 
			this->btn_Guardar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_Guardar->FlatAppearance->BorderSize = 0;
			this->btn_Guardar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Guardar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Guardar->ForeColor = System::Drawing::Color::White;
			this->btn_Guardar->Location = System::Drawing::Point(124, 202);
			this->btn_Guardar->Name = L"btn_Guardar";
			this->btn_Guardar->Size = System::Drawing::Size(128, 26);
			this->btn_Guardar->TabIndex = 11;
			this->btn_Guardar->Text = L"GUARDAR";
			this->btn_Guardar->UseVisualStyleBackColor = false;
			this->btn_Guardar->Click += gcnew System::EventHandler(this, &contraseña::btn_Guardar_Click);
			// 
			// txt_Contraseña
			// 
			this->txt_Contraseña->Location = System::Drawing::Point(91, 152);
			this->txt_Contraseña->Multiline = true;
			this->txt_Contraseña->Name = L"txt_Contraseña";
			this->txt_Contraseña->PasswordChar = '*';
			this->txt_Contraseña->Size = System::Drawing::Size(212, 28);
			this->txt_Contraseña->TabIndex = 10;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Teal;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(-6, 161);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 19);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Contraseña:";
			// 
			// contraseña
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Teal;
			this->ClientSize = System::Drawing::Size(345, 314);
			this->Controls->Add(this->btn_Guardar);
			this->Controls->Add(this->txt_Contraseña);
			this->Controls->Add(this->label3);
			this->Name = L"contraseña";
			this->Text = L"contraseña";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//EVENTO QUE NOS PERMITE MOSTRAR UN MENSAJE EN PANTALLA//
	private: System::Void btn_Guardar_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Contraseña Modificada");
		this->Close();
	}
};
}
