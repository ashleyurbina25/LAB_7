#pragma once
#include <string>
#include "List.h"

namespace Lab06JavierLopez1049722 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{

		
		int* arreglo;
		int cantidad; 

	public:

		List<int>* Arreglo;
	private: System::Windows::Forms::TabControl^ tabControl1;
	public:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ listBox2;
		   array<List<int>*, 1>^ Hash = gcnew array<List<int>*, 1>(100);
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

















	protected:

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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Location = System::Drawing::Point(33, 27);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(651, 402);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->listBox2);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(643, 373);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Ejercicio #1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(443, 296);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(103, 35);
			this->button4->TabIndex = 16;
			this->button4->Text = L"Agregar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(443, 227);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(103, 35);
			this->button3->TabIndex = 15;
			this->button3->Text = L"Agregar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(443, 152);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(103, 35);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Agregar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(443, 45);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(103, 35);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Agregar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(205, 302);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(185, 27);
			this->textBox4->TabIndex = 12;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(205, 233);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(185, 27);
			this->textBox3->TabIndex = 11;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(205, 158);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(185, 27);
			this->textBox2->TabIndex = 10;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(205, 51);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(185, 30);
			this->textBox1->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(201, 277);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 22);
			this->label4->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(201, 208);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 22);
			this->label3->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(201, 133);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 22);
			this->label2->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(201, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 22);
			this->label1->TabIndex = 5;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 16;
			this->listBox2->Location = System::Drawing::Point(22, 17);
			this->listBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(151, 340);
			this->listBox2->TabIndex = 4;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(702, 443);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"Ejercicios";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		void funcionRandom() {
			int cantidad = Convert::ToInt16(textBox1->Text);
			arreglo = new int[cantidad];
			for (int i = 0; i < cantidad; i++) {
				int numero = rand() % (900 - (1 + 1)) + 1;
				arreglo[i] = numero;
				insertarHashDinamico(&numero);
			}
		}
		void Burbuja(int n)
		{
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n - i - 1; j++)
				{
					if (arreglo[j] > arreglo[j + 1])
					{
						int aux = arreglo[j];
						arreglo[j] = arreglo[j + 1];
						arreglo[j + 1] = aux;

					}
				}
			}
		}
		void llenarListaConArreglo(int n) {
			int contador = 0;
			for (int i = 0; i < n; i++) {
				listBox2->Items->Add(contador + " --- " + arreglo[i]);
				contador++;
			}
		}
		int metodoSecuencial(int cantidad, int numero) {

			for (int i = 0; i < cantidad; i++)
			{
				if (this->arreglo[i] == numero)
				{
					return i;
				}
			}
			return -1;
		}
		int Binario(int m, int s, int numero)
		{
			int medio = 0;
			while (m <= s) {
				medio = (m + s) / 2;
				if (this->arreglo[medio] == numero) {
					return medio;
				}
				if (arreglo[medio] > numero) {
					s = medio;
					medio = (m + s) / 2;
				}
				if (this->arreglo[medio] < numero) {
					m = medio;
					medio = (m + s) / 2;
				}
			}
			return -1;
		}
		int insertarHashDinamico(int* value)
		{
			int Indice = *value % 100;
			if (Hash[Indice] == nullptr)
				Hash[Indice] = new List<int>;
			Hash[Indice]->add(value);
			return Indice;
		}

		int busquedaHashDinamico(int value)
		{
			int Indice = value % 100;
			if (Hash[Indice] == nullptr)
				return -1;
			int Pos = Hash[Indice]->getPosicion(&value);
			if (Pos != 1) {
				return Indice;
			}
			else {
				return -1;
			}

					
	
		
		}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		listBox2->Items->Clear();
		if (textBox1->Text != "") {
			cantidad = Convert::ToInt16(textBox1->Text);
			funcionRandom();
			Burbuja(cantidad);
			llenarListaConArreglo(cantidad);
		}
		else {
			MessageBox::Show("Ingrese un número", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	if (textBox2->Text != "") {
		int numero = Convert::ToInt16(textBox2->Text);
		busquedaHashDinamico(numero);
		if (busquedaHashDinamico(numero) == -1) {
			MessageBox::Show("El número no existe ");
		}
		else {
			MessageBox::Show("El número se encuentra en la posición de la Hashtable: " + busquedaHashDinamico(numero));
		}
	}
	else {
		MessageBox::Show("Ingrese un número", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	if (textBox3->Text != "") {
		int numero = Convert::ToInt16(textBox3->Text);
		if (Binario(0, cantidad, numero) == -1) {
			MessageBox::Show("El número no existe ");
		}
		else {
			MessageBox::Show("El número se encuentra en la posición: " + Binario(0, cantidad, numero));
		}
	}
	else {
		MessageBox::Show("Ingrese un número", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	

	if (textBox4->Text != "") {
		int numero = Convert::ToInt16(textBox4->Text);
		if (metodoSecuencial(cantidad, numero) == -1) {
			MessageBox::Show("El número no existe ");
		}
		else {
			MessageBox::Show("El número se encuentra en la posición: " + metodoSecuencial(cantidad, numero));
		}

		
	}
	else {
		MessageBox::Show("Ingrese un número", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
