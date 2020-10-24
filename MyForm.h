#include "lista.h";
#pragma once

namespace Tarea4FranciscoPuga1183819 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	int V[10];
	int x = 10;
	int V1[216];
	int x1 = 216;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		lista* milist;
		lista* milist1;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Total;
	public:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column14;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column15;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::OpenFileDialog^ ofdImportar;
	private: System::Windows::Forms::DataGridView^ dgvMatriz;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ txtPath;




	public:
		
		
		MyForm(void)
		{
			InitializeComponent();
			milist = new lista();
			milist->count = 0;
			milist->start = nullptr;
			milist->end = nullptr;

			milist1 = new lista();
			milist1->count = 0;
			milist1->start = nullptr;
			milist1->end = nullptr;

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Total = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->ofdImportar = (gcnew System::Windows::Forms::OpenFileDialog());
			this->dgvMatriz = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->txtPath = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMatriz))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(38, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ejercicio 1:";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(16) {
				this->Total,
					this->Column1, this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9,
					this->Column10, this->Column11, this->Column12, this->Column13, this->Column14, this->Column15
			});
			this->dataGridView1->Location = System::Drawing::Point(123, 60);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(1143, 265);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// Total
			// 
			this->Total->HeaderText = L"Total";
			this->Total->Name = L"Total";
			this->Total->ReadOnly = true;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"0 a 4";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"5 a 9";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"10 a 14";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"15 a19";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"20 a 24";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"25 a 29";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"30 a 34";
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"35 a 39";
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"40 a 44";
			this->Column9->Name = L"Column9";
			this->Column9->ReadOnly = true;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"45 a 49";
			this->Column10->Name = L"Column10";
			this->Column10->ReadOnly = true;
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"50 a 54";
			this->Column11->Name = L"Column11";
			this->Column11->ReadOnly = true;
			// 
			// Column12
			// 
			this->Column12->HeaderText = L"55 a 59";
			this->Column12->Name = L"Column12";
			this->Column12->ReadOnly = true;
			// 
			// Column13
			// 
			this->Column13->HeaderText = L"60 a 64";
			this->Column13->Name = L"Column13";
			this->Column13->ReadOnly = true;
			// 
			// Column14
			// 
			this->Column14->HeaderText = L"65 y mas";
			this->Column14->Name = L"Column14";
			this->Column14->ReadOnly = true;
			// 
			// Column15
			// 
			this->Column15->HeaderText = L"Ignorado";
			this->Column15->Name = L"Column15";
			this->Column15->ReadOnly = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(382, 342);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(138, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Ordenar por Bubble Sort";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(837, 347);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(127, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Tiempo de ordenamiento:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(970, 347);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(81, 63);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(26, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Año";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(81, 87);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(31, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"2008";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(81, 109);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(31, 13);
			this->label6->TabIndex = 7;
			this->label6->Text = L"2009";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(81, 131);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(31, 13);
			this->label7->TabIndex = 8;
			this->label7->Text = L"2010";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(81, 153);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(31, 13);
			this->label8->TabIndex = 9;
			this->label8->Text = L"2011";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(81, 177);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(31, 13);
			this->label9->TabIndex = 10;
			this->label9->Text = L"2012";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(81, 199);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(31, 13);
			this->label10->TabIndex = 11;
			this->label10->Text = L"2013";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(81, 222);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(31, 13);
			this->label11->TabIndex = 12;
			this->label11->Text = L"2014";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(81, 244);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(31, 13);
			this->label12->TabIndex = 13;
			this->label12->Text = L"2015";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(81, 266);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(31, 13);
			this->label13->TabIndex = 14;
			this->label13->Text = L"2016";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(81, 288);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(31, 13);
			this->label14->TabIndex = 15;
			this->label14->Text = L"2017";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(41, 380);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(59, 13);
			this->label15->TabIndex = 16;
			this->label15->Text = L"Ejercicio 2 ";
			// 
			// ofdImportar
			// 
			this->ofdImportar->FileName = L"openFileDialog1";
			// 
			// dgvMatriz
			// 
			this->dgvMatriz->AllowUserToAddRows = false;
			this->dgvMatriz->AllowUserToDeleteRows = false;
			this->dgvMatriz->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvMatriz->Location = System::Drawing::Point(123, 461);
			this->dgvMatriz->Name = L"dgvMatriz";
			this->dgvMatriz->ReadOnly = true;
			this->dgvMatriz->Size = System::Drawing::Size(783, 150);
			this->dgvMatriz->TabIndex = 17;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(123, 417);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(171, 23);
			this->button2->TabIndex = 18;
			this->button2->Text = L"Importar archivo de Covid";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// txtPath
			// 
			this->txtPath->Location = System::Drawing::Point(300, 419);
			this->txtPath->Name = L"txtPath";
			this->txtPath->Size = System::Drawing::Size(297, 20);
			this->txtPath->TabIndex = 19;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(832, 633);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(13, 13);
			this->label16->TabIndex = 22;
			this->label16->Text = L"0";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(699, 633);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(127, 13);
			this->label17->TabIndex = 21;
			this->label17->Text = L"Tiempo de ordenamiento:";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(244, 628);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(138, 23);
			this->button3->TabIndex = 20;
			this->button3->Text = L"Ordenar por Bubble Sort";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1359, 708);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->txtPath);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dgvMatriz);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMatriz))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < 9; ++i) {
		dataGridView1->Rows->Add();
	}

	dataGridView1->Rows[0]->Cells[0]->Value = 23721;
	dataGridView1->Rows[1]->Cells[0]->Value = 31497;
	dataGridView1->Rows[2]->Cells[0]->Value = 32017;
	dataGridView1->Rows[3]->Cells[0]->Value = 33484;
	dataGridView1->Rows[4]->Cells[0]->Value = 36107;
	dataGridView1->Rows[5]->Cells[0]->Value = 36170;
	dataGridView1->Rows[6]->Cells[0]->Value = 34330;
	dataGridView1->Rows[7]->Cells[0]->Value = 31929;
	dataGridView1->Rows[8]->Cells[0]->Value = 31190;
	dataGridView1->Rows[9]->Cells[0]->Value = 30384;

	dataGridView1->Rows[0]->Cells[1]->Value = 21;
	dataGridView1->Rows[1]->Cells[1]->Value = 29;
	dataGridView1->Rows[2]->Cells[1]->Value = 36;
	dataGridView1->Rows[3]->Cells[1]->Value = 38;
	dataGridView1->Rows[4]->Cells[1]->Value = 21;
	dataGridView1->Rows[5]->Cells[1]->Value = 26;
	dataGridView1->Rows[6]->Cells[1]->Value = 57;
	dataGridView1->Rows[7]->Cells[1]->Value = 44;
	dataGridView1->Rows[8]->Cells[1]->Value = 41;
	dataGridView1->Rows[9]->Cells[1]->Value = 49;

	dataGridView1->Rows[0]->Cells[2]->Value = 58;
	dataGridView1->Rows[1]->Cells[2]->Value = 43;
	dataGridView1->Rows[2]->Cells[2]->Value = 54;
	dataGridView1->Rows[3]->Cells[2]->Value = 48;
	dataGridView1->Rows[4]->Cells[2]->Value = 78;
	dataGridView1->Rows[5]->Cells[2]->Value = 50;
	dataGridView1->Rows[6]->Cells[2]->Value = 86;
	dataGridView1->Rows[7]->Cells[2]->Value = 85;
	dataGridView1->Rows[8]->Cells[2]->Value = 76;
	dataGridView1->Rows[9]->Cells[2]->Value = 83;

	dataGridView1->Rows[0]->Cells[3]->Value = 178;
	dataGridView1->Rows[1]->Cells[3]->Value = 221;
	dataGridView1->Rows[2]->Cells[3]->Value = 224;
	dataGridView1->Rows[3]->Cells[3]->Value = 223;
	dataGridView1->Rows[4]->Cells[3]->Value = 242;
	dataGridView1->Rows[5]->Cells[3]->Value = 280;
	dataGridView1->Rows[6]->Cells[3]->Value = 304;
	dataGridView1->Rows[7]->Cells[3]->Value = 275;
	dataGridView1->Rows[8]->Cells[3]->Value = 240;
	dataGridView1->Rows[9]->Cells[3]->Value = 245;

	dataGridView1->Rows[0]->Cells[4]->Value = 2211;
	dataGridView1->Rows[1]->Cells[4]->Value = 2748;
	dataGridView1->Rows[2]->Cells[4]->Value = 2979;
	dataGridView1->Rows[3]->Cells[4]->Value = 3070;
	dataGridView1->Rows[4]->Cells[4]->Value = 3373;
	dataGridView1->Rows[5]->Cells[4]->Value = 3420;
	dataGridView1->Rows[6]->Cells[4]->Value = 3316;
	dataGridView1->Rows[7]->Cells[4]->Value = 2895;
	dataGridView1->Rows[8]->Cells[4]->Value = 2717;
	dataGridView1->Rows[9]->Cells[4]->Value = 2369;

	dataGridView1->Rows[0]->Cells[5]->Value = 4354;
	dataGridView1->Rows[1]->Cells[5]->Value = 5955;
	dataGridView1->Rows[2]->Cells[5]->Value = 5974;
	dataGridView1->Rows[3]->Cells[5]->Value = 6213;
	dataGridView1->Rows[4]->Cells[5]->Value = 6825;
	dataGridView1->Rows[5]->Cells[5]->Value = 6780;
	dataGridView1->Rows[6]->Cells[5]->Value = 6275;
	dataGridView1->Rows[7]->Cells[5]->Value = 5998;
	dataGridView1->Rows[8]->Cells[5]->Value = 5716;
	dataGridView1->Rows[9]->Cells[5]->Value = 5677;

	dataGridView1->Rows[0]->Cells[6]->Value = 4707;
	dataGridView1->Rows[1]->Cells[6]->Value = 6190;
	dataGridView1->Rows[2]->Cells[6]->Value = 6187;
	dataGridView1->Rows[3]->Cells[6]->Value = 6261;
	dataGridView1->Rows[4]->Cells[6]->Value = 6823;
	dataGridView1->Rows[5]->Cells[6]->Value = 6816;
	dataGridView1->Rows[6]->Cells[6]->Value = 6367;
	dataGridView1->Rows[7]->Cells[6]->Value = 5972;
	dataGridView1->Rows[8]->Cells[6]->Value = 5887;
	dataGridView1->Rows[9]->Cells[6]->Value = 5714;

	dataGridView1->Rows[0]->Cells[7]->Value = 3937;
	dataGridView1->Rows[1]->Cells[7]->Value = 5154;
	dataGridView1->Rows[2]->Cells[7]->Value = 5441;
	dataGridView1->Rows[3]->Cells[7]->Value = 5599;
	dataGridView1->Rows[4]->Cells[7]->Value = 6081;
	dataGridView1->Rows[5]->Cells[7]->Value = 6056;
	dataGridView1->Rows[6]->Cells[7]->Value = 5648;
	dataGridView1->Rows[7]->Cells[7]->Value = 5162;
	dataGridView1->Rows[8]->Cells[7]->Value = 5048;
	dataGridView1->Rows[9]->Cells[7]->Value = 4687;

	dataGridView1->Rows[0]->Cells[8]->Value = 2787;
	dataGridView1->Rows[1]->Cells[8]->Value = 3816;
	dataGridView1->Rows[2]->Cells[8]->Value = 3826;
	dataGridView1->Rows[3]->Cells[8]->Value = 4121;
	dataGridView1->Rows[4]->Cells[8]->Value = 4402;
	dataGridView1->Rows[5]->Cells[8]->Value = 4287;
	dataGridView1->Rows[6]->Cells[8]->Value = 4166;
	dataGridView1->Rows[7]->Cells[8]->Value = 3985;
	dataGridView1->Rows[8]->Cells[8]->Value = 3821;
	dataGridView1->Rows[9]->Cells[8]->Value = 3873;

	dataGridView1->Rows[0]->Cells[9]->Value = 1925;
	dataGridView1->Rows[1]->Cells[9]->Value = 2472;
	dataGridView1->Rows[2]->Cells[9]->Value = 2508;
	dataGridView1->Rows[3]->Cells[9]->Value = 2600;
	dataGridView1->Rows[4]->Cells[9]->Value = 2795;
	dataGridView1->Rows[5]->Cells[9]->Value = 2913;
	dataGridView1->Rows[6]->Cells[9]->Value = 2747;
	dataGridView1->Rows[7]->Cells[9]->Value = 2505;
	dataGridView1->Rows[8]->Cells[9]->Value = 2503;
	dataGridView1->Rows[9]->Cells[9]->Value = 2490;

	dataGridView1->Rows[0]->Cells[10]->Value = 1196;
	dataGridView1->Rows[1]->Cells[10]->Value = 1682;
	dataGridView1->Rows[2]->Cells[10]->Value = 1663;
	dataGridView1->Rows[3]->Cells[10]->Value = 1768;
	dataGridView1->Rows[4]->Cells[10]->Value = 1774;
	dataGridView1->Rows[5]->Cells[10]->Value = 1789;
	dataGridView1->Rows[6]->Cells[10]->Value = 1721;
	dataGridView1->Rows[7]->Cells[10]->Value = 1539;
	dataGridView1->Rows[8]->Cells[10]->Value = 1543;
	dataGridView1->Rows[9]->Cells[10]->Value = 1676;

	dataGridView1->Rows[0]->Cells[11]->Value = 795;
	dataGridView1->Rows[1]->Cells[11]->Value = 1039;
	dataGridView1->Rows[2]->Cells[11]->Value = 1002;
	dataGridView1->Rows[3]->Cells[11]->Value = 1117;
	dataGridView1->Rows[4]->Cells[11]->Value = 1172;
	dataGridView1->Rows[5]->Cells[11]->Value = 1241;
	dataGridView1->Rows[6]->Cells[11]->Value = 1114;
	dataGridView1->Rows[7]->Cells[11]->Value = 1046;
	dataGridView1->Rows[8]->Cells[11]->Value = 1039;
	dataGridView1->Rows[9]->Cells[11]->Value = 1008;

	dataGridView1->Rows[0]->Cells[12]->Value = 457;
	dataGridView1->Rows[1]->Cells[12]->Value = 621;
	dataGridView1->Rows[2]->Cells[12]->Value = 612;
	dataGridView1->Rows[3]->Cells[12]->Value = 674;
	dataGridView1->Rows[4]->Cells[12]->Value = 702;
	dataGridView1->Rows[5]->Cells[12]->Value = 727;
	dataGridView1->Rows[6]->Cells[12]->Value = 725;
	dataGridView1->Rows[7]->Cells[12]->Value = 713;
	dataGridView1->Rows[8]->Cells[12]->Value = 715;
	dataGridView1->Rows[9]->Cells[12]->Value = 681;

	dataGridView1->Rows[0]->Cells[13]->Value = 286;
	dataGridView1->Rows[1]->Cells[13]->Value = 421;
	dataGridView1->Rows[2]->Cells[13]->Value = 423;
	dataGridView1->Rows[3]->Cells[13]->Value = 472;
	dataGridView1->Rows[4]->Cells[13]->Value = 482;
	dataGridView1->Rows[5]->Cells[13]->Value = 509;
	dataGridView1->Rows[6]->Cells[13]->Value = 538;
	dataGridView1->Rows[7]->Cells[13]->Value = 496;
	dataGridView1->Rows[8]->Cells[13]->Value = 497;
	dataGridView1->Rows[9]->Cells[13]->Value = 500;

	dataGridView1->Rows[0]->Cells[14]->Value = 486;
	dataGridView1->Rows[1]->Cells[14]->Value = 757;
	dataGridView1->Rows[2]->Cells[14]->Value = 756;
	dataGridView1->Rows[3]->Cells[14]->Value = 842;
	dataGridView1->Rows[4]->Cells[14]->Value = 877;
	dataGridView1->Rows[5]->Cells[14]->Value = 848;
	dataGridView1->Rows[6]->Cells[14]->Value = 889;
	dataGridView1->Rows[7]->Cells[14]->Value = 915;
	dataGridView1->Rows[8]->Cells[14]->Value = 885;
	dataGridView1->Rows[9]->Cells[14]->Value = 943;

	dataGridView1->Rows[0]->Cells[15]->Value = 323;
	dataGridView1->Rows[1]->Cells[15]->Value = 349;
	dataGridView1->Rows[2]->Cells[15]->Value = 332;
	dataGridView1->Rows[3]->Cells[15]->Value = 438;
	dataGridView1->Rows[4]->Cells[15]->Value = 460;
	dataGridView1->Rows[5]->Cells[15]->Value = 428;
	dataGridView1->Rows[6]->Cells[15]->Value = 377;
	dataGridView1->Rows[7]->Cells[15]->Value = 299;
	dataGridView1->Rows[8]->Cells[15]->Value = 462;
	dataGridView1->Rows[9]->Cells[15]->Value = 389;
}

private: void ReestablecerMatriz() {
	dgvMatriz->Rows->Clear();
	dgvMatriz->Columns->Clear();
	dgvMatriz->ColumnHeadersVisible = false;
	dgvMatriz->RowHeadersVisible = false;
};

void BubbleSortNodos() {
	int aux;
	for (int z = 0; z < 10; z++) {
		V[z] = milist->GetValue(z);
	}

	for (int i = 0; i < x - 1; i++)
	{
		for (int j = i + 1; j < x; j++)
		{
			if (V[i] > V[j]) {
				aux = V[i];
				V[i] = V[j];
				V[j] = aux;
			}
		}
	}

}

void BubbleSortNodos1() {
	int aux;
	for (int z = 0; z < 217; z++) {
		V1[z] = milist1->GetValue(z);
	}

	for (int i = 0; i < x1 - 1; i++)
	{
		for (int j = i + 1; j < x1; j++)
		{
			if (V1[i] > V1[j]) {
				aux = V1[i];
				V1[i] = V1[j];
				V1[j] = aux;
			}
		}
	}

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	for (int j = 0; j < 16; ++j) {
		for (int i = 0; i < 10; ++i) {
			int value = Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value);
			milist->InsertAtEnd(value);
		}
		BubbleSortNodos();
		for (int i = 0; i < 10; ++i) {
			milist->ExtractAtEnd();
		}
		for (int i = 0; i < 10; ++i) {
			milist->InsertAtEnd(V[i]);
		}
		for (int i = 0; i < 10; ++i) {
			dataGridView1->Rows[i]->Cells[j]->Value = milist->GetValue(i);
		}
		for (int i = 0; i < 10; ++i) {
			milist->ExtractAtEnd();
		}
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	ofdImportar->Filter = "Archivos separados por coma (csv) | *.csv";
	ofdImportar->FileName = "";


	if (ofdImportar->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		ReestablecerMatriz(); 
		txtPath->Text = ofdImportar->FileName;


		array<String^>^ archivoLineas = File::ReadAllLines(ofdImportar->FileName);

		if (archivoLineas->Length > 0) {


			array<String^>^ archivoColumna = archivoLineas[0]->Split(',');
			if (archivoColumna->Length > 0) {
				int cantidadColumnas = archivoColumna->Length;


				for (int i = 0; i < cantidadColumnas; i++) {

					DataGridViewColumn^ nuevacolumna = gcnew DataGridViewColumn();
					nuevacolumna->Width = 20;

					DataGridViewCell^ cellTemplate = gcnew DataGridViewTextBoxCell();
					nuevacolumna->CellTemplate = cellTemplate;
					
					dgvMatriz->Columns->Add(nuevacolumna);
				}

				for (int i = 0; i < archivoLineas->Length; i++) {
					dgvMatriz->Rows->Add();
				}

	
				for (int i = 0; i < archivoLineas->Length; i++) {
					array<String^>^ fila = archivoLineas[i]->Split(',');
					int j = 0;

					while ((j < cantidadColumnas) && (j < fila->Length)) {
						dgvMatriz->Rows[i]->Cells[j]->Value = fila[j];
						j++;
					}
				}
			}
		}

	}
	else {

		MessageBox::Show("No se seleccionó ningún archivo"
			, "Archivo no seleccionado"
			, MessageBoxButtons::OK
			, MessageBoxIcon::Exclamation);
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	for (int j = 0; j < 12; ++j) {
		for (int i = 0; i < 217; ++i) {
			int value = Convert::ToInt32(dgvMatriz->Rows[i]->Cells[j]->Value);
			milist1->InsertAtEnd(value);
		}
		BubbleSortNodos1();
		for (int i = 0; i < 217; ++i) {
			milist1->ExtractAtEnd();
		}
		for (int i = 0; i < 217; ++i) {
			milist1->InsertAtEnd(V[i]);
		}
		for (int i = 0; i < 217; ++i) {
			dgvMatriz->Rows[i]->Cells[j]->Value = milist->GetValue(i);
		}
		for (int i = 0; i < 217; ++i) {
			milist1->ExtractAtEnd();
		}
	}
}
};
}
