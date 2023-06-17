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
	public: System::Windows::Forms::TextBox^ txt_Calculo;
	private:

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
	public: System::Windows::Forms::TextBox^ txt_Proceso;

	private: System::Windows::Forms::Label^ label7;
	public: System::Windows::Forms::TextBox^ txt_Fisica;
	private:
	private: System::Windows::Forms::Label^ label8;
	public:
	public: System::Windows::Forms::TextBox^ txt_Derecho;
	private:
	private: System::Windows::Forms::Label^ label9;
	public:
	public: System::Windows::Forms::TextBox^ txt_Progra;
	private:
	private: System::Windows::Forms::Label^ label10;
	public:
	public:
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
			this->txt_Calculo = (gcnew System::Windows::Forms::TextBox());
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
			this->txt_Proceso = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txt_Fisica = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txt_Derecho = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txt_Progra = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
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
			this->btn_cancelar->Location = System::Drawing::Point(248, 439);
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
			this->btn_guardar->Location = System::Drawing::Point(31, 439);
			this->btn_guardar->Name = L"btn_guardar";
			this->btn_guardar->Size = System::Drawing::Size(104, 36);
			this->btn_guardar->TabIndex = 20;
			this->btn_guardar->Text = L"Guardar";
			this->btn_guardar->UseVisualStyleBackColor = false;
			this->btn_guardar->Click += gcnew System::EventHandler(this, &modificar::btn_guardar_Click);
			// 
			// txt_Calculo
			// 
			this->txt_Calculo->Location = System::Drawing::Point(110, 202);
			this->txt_Calculo->Name = L"txt_Calculo";
			this->txt_Calculo->Size = System::Drawing::Size(239, 20);
			this->txt_Calculo->TabIndex = 19;
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
			this->label5->Location = System::Drawing::Point(19, 200);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(85, 22);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Calculo I";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(28, 164);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(71, 22);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Genero";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(28, 128);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 22);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Edad";
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
			this->label6->Size = System::Drawing::Size(31, 22);
			this->label6->TabIndex = 22;
			this->label6->Text = L"ID";
			// 
			// txt_Codigo
			// 
			this->txt_Codigo->Location = System::Drawing::Point(110, 61);
			this->txt_Codigo->Name = L"txt_Codigo";
			this->txt_Codigo->Size = System::Drawing::Size(239, 20);
			this->txt_Codigo->TabIndex = 23;
			this->txt_Codigo->TextChanged += gcnew System::EventHandler(this, &modificar::txt_Codigo_TextChanged);
			// 
			// txt_Proceso
			// 
			this->txt_Proceso->Location = System::Drawing::Point(108, 234);
			this->txt_Proceso->Name = L"txt_Proceso";
			this->txt_Proceso->Size = System::Drawing::Size(239, 20);
			this->txt_Proceso->TabIndex = 25;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(-4, 234);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(108, 22);
			this->label7->TabIndex = 24;
			this->label7->Text = L"Proceso Ad.";
			// 
			// txt_Fisica
			// 
			this->txt_Fisica->Location = System::Drawing::Point(108, 270);
			this->txt_Fisica->Name = L"txt_Fisica";
			this->txt_Fisica->Size = System::Drawing::Size(239, 20);
			this->txt_Fisica->TabIndex = 27;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(45, 270);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(59, 22);
			this->label8->TabIndex = 26;
			this->label8->Text = L"Fisica";
			// 
			// txt_Derecho
			// 
			this->txt_Derecho->Location = System::Drawing::Point(108, 307);
			this->txt_Derecho->Name = L"txt_Derecho";
			this->txt_Derecho->Size = System::Drawing::Size(239, 20);
			this->txt_Derecho->TabIndex = 29;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(-4, 307);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(112, 22);
			this->label9->TabIndex = 28;
			this->label9->Text = L"Derecho Inf.";
			// 
			// txt_Progra
			// 
			this->txt_Progra->Location = System::Drawing::Point(108, 346);
			this->txt_Progra->Name = L"txt_Progra";
			this->txt_Progra->Size = System::Drawing::Size(239, 20);
			this->txt_Progra->TabIndex = 31;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(34, 344);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(68, 22);
			this->label10->TabIndex = 30;
			this->label10->Text = L"Progra";
			// 
			// modificar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Teal;
			this->ClientSize = System::Drawing::Size(364, 487);
			this->Controls->Add(this->txt_Progra);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->txt_Derecho);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->txt_Fisica);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->txt_Proceso);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txt_Codigo);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->btn_cancelar);
			this->Controls->Add(this->btn_guardar);
			this->Controls->Add(this->txt_Calculo);
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

		//EVENTO QUE NOS PERMITE CERRAR LA VENTANA DE MODIFICAR UN REGISTRO//
	private: System::Void btn_cancelar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
		   //EVENTO QUE NOS PERMITE MOSTRAR UN MENSAJE EN PANTALLA AL GUARDAR UN RESGISTRO//
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
