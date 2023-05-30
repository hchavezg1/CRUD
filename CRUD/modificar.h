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
	/// Resumen de modificar
	/// </summary>
	public ref class modificar : public System::Windows::Forms::Form
	{
	public:
		modificar(void)
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
		~modificar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_cancelar;
	protected:
	private: System::Windows::Forms::Button^ btn_guardar;
	public: System::Windows::Forms::TextBox^ txt_Serie;
	private:
	public: System::Windows::Forms::TextBox^ txt_Marca;
	public: System::Windows::Forms::TextBox^ txt_Anio;
	public: System::Windows::Forms::TextBox^ txt_Nombre;
	private: System::Windows::Forms::Label^ label5;
	public:
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label6;
	public: System::Windows::Forms::TextBox^ txt_Codigo;
	private:

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
			this->btn_cancelar = (gcnew System::Windows::Forms::Button());
			this->btn_guardar = (gcnew System::Windows::Forms::Button());
			this->txt_Serie = (gcnew System::Windows::Forms::TextBox());
			this->txt_Marca = (gcnew System::Windows::Forms::TextBox());
			this->txt_Anio = (gcnew System::Windows::Forms::TextBox());
			this->txt_Nombre = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txt_Codigo = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// btn_cancelar
			// 
			this->btn_cancelar->BackColor = System::Drawing::Color::Red;
			this->btn_cancelar->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btn_cancelar->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btn_cancelar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btn_cancelar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_cancelar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_cancelar->ForeColor = System::Drawing::Color::White;
			this->btn_cancelar->Location = System::Drawing::Point(249, 275);
			this->btn_cancelar->Name = L"btn_cancelar";
			this->btn_cancelar->Size = System::Drawing::Size(104, 36);
			this->btn_cancelar->TabIndex = 21;
			this->btn_cancelar->Text = L"Cancelar";
			this->btn_cancelar->UseVisualStyleBackColor = false;
			this->btn_cancelar->Click += gcnew System::EventHandler(this, &modificar::btn_cancelar_Click);
			// 
			// btn_guardar
			// 
			this->btn_guardar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_guardar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_guardar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_guardar->ForeColor = System::Drawing::Color::White;
			this->btn_guardar->Location = System::Drawing::Point(32, 275);
			this->btn_guardar->Name = L"btn_guardar";
			this->btn_guardar->Size = System::Drawing::Size(104, 36);
			this->btn_guardar->TabIndex = 20;
			this->btn_guardar->Text = L"Guardar";
			this->btn_guardar->UseVisualStyleBackColor = false;
			this->btn_guardar->Click += gcnew System::EventHandler(this, &modificar::btn_guardar_Click);
			// 
			// txt_Serie
			// 
			this->txt_Serie->Location = System::Drawing::Point(110, 202);
			this->txt_Serie->Name = L"txt_Serie";
			this->txt_Serie->Size = System::Drawing::Size(239, 20);
			this->txt_Serie->TabIndex = 19;
			// 
			// txt_Marca
			// 
			this->txt_Marca->Location = System::Drawing::Point(110, 166);
			this->txt_Marca->Name = L"txt_Marca";
			this->txt_Marca->Size = System::Drawing::Size(239, 20);
			this->txt_Marca->TabIndex = 18;
			// 
			// txt_Anio
			// 
			this->txt_Anio->Location = System::Drawing::Point(110, 130);
			this->txt_Anio->Name = L"txt_Anio";
			this->txt_Anio->Size = System::Drawing::Size(239, 20);
			this->txt_Anio->TabIndex = 17;
			// 
			// txt_Nombre
			// 
			this->txt_Nombre->Location = System::Drawing::Point(110, 97);
			this->txt_Nombre->Name = L"txt_Nombre";
			this->txt_Nombre->Size = System::Drawing::Size(239, 20);
			this->txt_Nombre->TabIndex = 16;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(28, 200);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(52, 22);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Serie";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(28, 164);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 22);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Marca";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(28, 128);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 22);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Año";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(28, 94);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 22);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Nombre";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Yellow;
			this->label1->Location = System::Drawing::Point(138, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(133, 24);
			this->label1->TabIndex = 11;
			this->label1->Text = L"MODIFICAR";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(28, 59);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(69, 22);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Codigo";
			// 
			// txt_Codigo
			// 
			this->txt_Codigo->Location = System::Drawing::Point(110, 61);
			this->txt_Codigo->Name = L"txt_Codigo";
			this->txt_Codigo->Size = System::Drawing::Size(239, 20);
			this->txt_Codigo->TabIndex = 23;
			this->txt_Codigo->TextChanged += gcnew System::EventHandler(this, &modificar::txt_Codigo_TextChanged);
			// 
			// modificar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Teal;
			this->ClientSize = System::Drawing::Size(365, 323);
			this->Controls->Add(this->txt_Codigo);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->btn_cancelar);
			this->Controls->Add(this->btn_guardar);
			this->Controls->Add(this->txt_Serie);
			this->Controls->Add(this->txt_Marca);
			this->Controls->Add(this->txt_Anio);
			this->Controls->Add(this->txt_Nombre);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"modificar";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"modificar";
			this->Load += gcnew System::EventHandler(this, &modificar::modificar_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_cancelar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void btn_guardar_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show(L"¡MODIFICADO CORRECTAMENTE!");
	this->Close();
}
private: System::Void txt_Codigo_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void modificar_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
