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
	/// Resumen de contrase�a
	/// </summary>
	public ref class contrase�a : public System::Windows::Forms::Form
	{
	public:
		contrase�a(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~contrase�a()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_Guardar;
	public: System::Windows::Forms::TextBox^ txt_Contrase�a;
	private:

	protected:



	protected:


	private: System::Windows::Forms::Label^ label3;


	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btn_Guardar = (gcnew System::Windows::Forms::Button());
			this->txt_Contrase�a = (gcnew System::Windows::Forms::TextBox());
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
			this->btn_Guardar->Click += gcnew System::EventHandler(this, &contrase�a::btn_Guardar_Click);
			// 
			// txt_Contrase�a
			// 
			this->txt_Contrase�a->Location = System::Drawing::Point(91, 152);
			this->txt_Contrase�a->Multiline = true;
			this->txt_Contrase�a->Name = L"txt_Contrase�a";
			this->txt_Contrase�a->PasswordChar = '*';
			this->txt_Contrase�a->Size = System::Drawing::Size(212, 28);
			this->txt_Contrase�a->TabIndex = 10;
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
			this->label3->Text = L"Contrase�a:";
			// 
			// contrase�a
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Teal;
			this->ClientSize = System::Drawing::Size(345, 314);
			this->Controls->Add(this->btn_Guardar);
			this->Controls->Add(this->txt_Contrase�a);
			this->Controls->Add(this->label3);
			this->Name = L"contrase�a";
			this->Text = L"contrase�a";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//EVENTO QUE NOS PERMITE MOSTRAR UN MENSAJE EN PANTALLA//
	private: System::Void btn_Guardar_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Contrase�a Modificada");
		this->Close();
	}
};
}
