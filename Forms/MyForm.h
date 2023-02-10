#pragma once

#include "../Includes.h"
#include "../Calc.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();

			InitializeToolTip();

			InitializeSettingsToMenu();
			//
			//TODO: add the constructor code
			//
		}

	protected:
		/// <summary>
		/// Release all used resources..
		/// </summary>
		~MyForm()
		{
		}

	private: System::Windows::Forms::RichTextBox^ richTextBox_notepad;
	private: System::Windows::Forms::Label^ label_notepad;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::TextBox^ textBox_calc2_10sf;
	private: System::Windows::Forms::TextBox^ textBox_calc2_10ui;
	private: System::Windows::Forms::TextBox^ textBox_calc2_10si;
	private: System::Windows::Forms::TextBox^ textBox_calc2_16sf;
	private: System::Windows::Forms::TextBox^ textBox_calc2_16ui;
	private: System::Windows::Forms::TextBox^ textBox_calc2_16si;
	private: System::Windows::Forms::TextBox^ textBox_calc2_enter;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox_lc;
	private: System::Windows::Forms::TextBox^ textBox_uc;
	private: System::Windows::Forms::TextBox^ textBox_rvalue;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::TextBox^ textBox_calc_enter_x10;
	private: System::Windows::Forms::TextBox^ textBox_calc_16sf;
	private: System::Windows::Forms::TextBox^ textBox_calc_16ui;
	private: System::Windows::Forms::TextBox^ textBox_calc_16si;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox_calc_10sf;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox_calc_10ui;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox_calc_10si;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox_calc_enter_x16;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ textBox_idap;
	private: System::Windows::Forms::TextBox^ textBox_codem;
	private: System::Windows::Forms::TextBox^ textBox_codep;
	private: System::Windows::Forms::Label^ label_size;
	private: System::Windows::Forms::ComboBox^ comboBox_calc_bits;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::TextBox^ textBox_bit_value1;
	private: System::Windows::Forms::TextBox^ textBox_bit_value2;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::GroupBox^ groupBox7;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::ComboBox^ comboBox_settings_hexstyle;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::GroupBox^ groupBox8;
	private: System::Windows::Forms::TextBox^ textBox_byte_value;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::TextBox^ textBox_byte_value_ui_32;

	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::TextBox^ textBox_byte_value_sf_32;

	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::TextBox^ textBox_byte_value_si_32;

	private: System::Windows::Forms::TextBox^ textBox_byte_value_sf_64;
private: System::Windows::Forms::TextBox^ textBox_byte_value_si_64;
private: System::Windows::Forms::TextBox^ textBox_byte_value_ui_64;



	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::TextBox^ textBox_bit_value3;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::ComboBox^ comboBox_bit_style;
private: System::Windows::Forms::GroupBox^ groupBox9;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::Label^ label40;
private: System::Windows::Forms::Label^ label42;
private: System::Windows::Forms::TextBox^ textBox_str_for_byte_value;
private: System::Windows::Forms::TextBox^ textBox_byte_from_str_value;
private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::Label^ label41;
private: System::Windows::Forms::TextBox^ textBox_bytes;
private: System::Windows::Forms::Label^ label43;
private: System::Windows::Forms::TextBox^ textBox_byte_value_ui_64_hex;

private: System::Windows::Forms::TextBox^ textBox_byte_value_ui_32_hex;






	private: System::Windows::Forms::Label^ label28;

	private:
		/// <summary>
		/// Required constructor variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method to support the constructor — do not change it
		/// the content of this method using the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->richTextBox_notepad = (gcnew System::Windows::Forms::RichTextBox());
			this->label_notepad = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox_calc2_16sf = (gcnew System::Windows::Forms::TextBox());
			this->textBox_calc2_enter = (gcnew System::Windows::Forms::TextBox());
			this->textBox_calc2_16ui = (gcnew System::Windows::Forms::TextBox());
			this->textBox_calc2_16si = (gcnew System::Windows::Forms::TextBox());
			this->textBox_calc2_10sf = (gcnew System::Windows::Forms::TextBox());
			this->textBox_calc2_10ui = (gcnew System::Windows::Forms::TextBox());
			this->textBox_calc2_10si = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox_rvalue = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox_lc = (gcnew System::Windows::Forms::TextBox());
			this->textBox_uc = (gcnew System::Windows::Forms::TextBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox_calc_enter_x16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_calc_enter_x10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_calc_16sf = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox_calc_16ui = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox_calc_16si = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox_calc_10ui = (gcnew System::Windows::Forms::TextBox());
			this->textBox_calc_10sf = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox_calc_10si = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->textBox_bytes = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label_size = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox_idap = (gcnew System::Windows::Forms::TextBox());
			this->textBox_codem = (gcnew System::Windows::Forms::TextBox());
			this->textBox_codep = (gcnew System::Windows::Forms::TextBox());
			this->comboBox_calc_bits = (gcnew System::Windows::Forms::ComboBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->comboBox_bit_style = (gcnew System::Windows::Forms::ComboBox());
			this->textBox_bit_value3 = (gcnew System::Windows::Forms::TextBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->textBox_bit_value2 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox_bit_value1 = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->textBox_byte_value_ui_64_hex = (gcnew System::Windows::Forms::TextBox());
			this->textBox_byte_value_ui_32_hex = (gcnew System::Windows::Forms::TextBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->textBox_byte_value_sf_64 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_byte_value_si_64 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_byte_value_ui_64 = (gcnew System::Windows::Forms::TextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->textBox_byte_value_sf_32 = (gcnew System::Windows::Forms::TextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->textBox_byte_value_si_32 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_byte_value = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->textBox_byte_value_ui_32 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->textBox_str_for_byte_value = (gcnew System::Windows::Forms::TextBox());
			this->textBox_byte_from_str_value = (gcnew System::Windows::Forms::TextBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox_settings_hexstyle = (gcnew System::Windows::Forms::ComboBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->groupBox3->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->groupBox9->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->SuspendLayout();
			// 
			// richTextBox_notepad
			// 
			this->richTextBox_notepad->BackColor = System::Drawing::SystemColors::Window;
			this->richTextBox_notepad->DetectUrls = false;
			this->richTextBox_notepad->ForeColor = System::Drawing::SystemColors::InfoText;
			this->richTextBox_notepad->Location = System::Drawing::Point(22, 46);
			this->richTextBox_notepad->Margin = System::Windows::Forms::Padding(6);
			this->richTextBox_notepad->Name = L"richTextBox_notepad";
			this->richTextBox_notepad->Size = System::Drawing::Size(547, 1104);
			this->richTextBox_notepad->TabIndex = 1;
			this->richTextBox_notepad->Text = L"";
			this->richTextBox_notepad->SelectionChanged += gcnew System::EventHandler(this, &MyForm::richTextBox_notepad_SelectionChanged);
			this->richTextBox_notepad->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox_notepad_TextChanged);
			// 
			// label_notepad
			// 
			this->label_notepad->AutoSize = true;
			this->label_notepad->Location = System::Drawing::Point(220, 17);
			this->label_notepad->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label_notepad->Name = L"label_notepad";
			this->label_notepad->Size = System::Drawing::Size(145, 25);
			this->label_notepad->TabIndex = 13;
			this->label_notepad->Text = L"[ mini notepad ]";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label24);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->label1);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->textBox_calc2_16sf);
			this->groupBox3->Controls->Add(this->textBox_calc2_enter);
			this->groupBox3->Controls->Add(this->textBox_calc2_16ui);
			this->groupBox3->Controls->Add(this->textBox_calc2_16si);
			this->groupBox3->Controls->Add(this->textBox_calc2_10sf);
			this->groupBox3->Controls->Add(this->textBox_calc2_10ui);
			this->groupBox3->Controls->Add(this->textBox_calc2_10si);
			this->groupBox3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox3->Location = System::Drawing::Point(28, 323);
			this->groupBox3->Margin = System::Windows::Forms::Padding(6);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(6);
			this->groupBox3->Size = System::Drawing::Size(1212, 253);
			this->groupBox3->TabIndex = 29;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"[ int/hex - calculator/converter - autodetect ]";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(15, 76);
			this->label24->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(44, 25);
			this->label24->TabIndex = 35;
			this->label24->Text = L"any";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(592, 41);
			this->label8->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(56, 25);
			this->label8->TabIndex = 34;
			this->label8->Text = L"enter";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(15, 196);
			this->label5->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(44, 25);
			this->label5->TabIndex = 32;
			this->label5->Text = L"hex";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(955, 113);
			this->label1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 25);
			this->label1->TabIndex = 33;
			this->label1->Text = L"signed float";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(15, 148);
			this->label6->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(44, 25);
			this->label6->TabIndex = 31;
			this->label6->Text = L"dec";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(578, 113);
			this->label4->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(95, 25);
			this->label4->TabIndex = 32;
			this->label4->Text = L"signed int";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(193, 113);
			this->label7->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(117, 25);
			this->label7->TabIndex = 31;
			this->label7->Text = L"unsigned int";
			// 
			// textBox_calc2_16sf
			// 
			this->textBox_calc2_16sf->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox_calc2_16sf->Location = System::Drawing::Point(823, 190);
			this->textBox_calc2_16sf->Margin = System::Windows::Forms::Padding(6);
			this->textBox_calc2_16sf->Name = L"textBox_calc2_16sf";
			this->textBox_calc2_16sf->Size = System::Drawing::Size(363, 29);
			this->textBox_calc2_16sf->TabIndex = 27;
			// 
			// textBox_calc2_enter
			// 
			this->textBox_calc2_enter->BackColor = System::Drawing::SystemColors::Window;
			this->textBox_calc2_enter->Location = System::Drawing::Point(68, 70);
			this->textBox_calc2_enter->Margin = System::Windows::Forms::Padding(6);
			this->textBox_calc2_enter->Name = L"textBox_calc2_enter";
			this->textBox_calc2_enter->Size = System::Drawing::Size(1119, 29);
			this->textBox_calc2_enter->TabIndex = 28;
			this->textBox_calc2_enter->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_calc2_enter_TextChanged);
			// 
			// textBox_calc2_16ui
			// 
			this->textBox_calc2_16ui->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox_calc2_16ui->Location = System::Drawing::Point(68, 190);
			this->textBox_calc2_16ui->Margin = System::Windows::Forms::Padding(6);
			this->textBox_calc2_16ui->Name = L"textBox_calc2_16ui";
			this->textBox_calc2_16ui->Size = System::Drawing::Size(363, 29);
			this->textBox_calc2_16ui->TabIndex = 26;
			// 
			// textBox_calc2_16si
			// 
			this->textBox_calc2_16si->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox_calc2_16si->Location = System::Drawing::Point(446, 190);
			this->textBox_calc2_16si->Margin = System::Windows::Forms::Padding(6);
			this->textBox_calc2_16si->Name = L"textBox_calc2_16si";
			this->textBox_calc2_16si->Size = System::Drawing::Size(363, 29);
			this->textBox_calc2_16si->TabIndex = 25;
			// 
			// textBox_calc2_10sf
			// 
			this->textBox_calc2_10sf->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox_calc2_10sf->Location = System::Drawing::Point(823, 142);
			this->textBox_calc2_10sf->Margin = System::Windows::Forms::Padding(6);
			this->textBox_calc2_10sf->Name = L"textBox_calc2_10sf";
			this->textBox_calc2_10sf->Size = System::Drawing::Size(363, 29);
			this->textBox_calc2_10sf->TabIndex = 23;
			// 
			// textBox_calc2_10ui
			// 
			this->textBox_calc2_10ui->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox_calc2_10ui->Location = System::Drawing::Point(68, 142);
			this->textBox_calc2_10ui->Margin = System::Windows::Forms::Padding(6);
			this->textBox_calc2_10ui->Name = L"textBox_calc2_10ui";
			this->textBox_calc2_10ui->Size = System::Drawing::Size(363, 29);
			this->textBox_calc2_10ui->TabIndex = 21;
			// 
			// textBox_calc2_10si
			// 
			this->textBox_calc2_10si->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox_calc2_10si->Location = System::Drawing::Point(446, 142);
			this->textBox_calc2_10si->Margin = System::Windows::Forms::Padding(6);
			this->textBox_calc2_10si->Name = L"textBox_calc2_10si";
			this->textBox_calc2_10si->Size = System::Drawing::Size(363, 29);
			this->textBox_calc2_10si->TabIndex = 19;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label26);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox_rvalue);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox_lc);
			this->groupBox1->Controls->Add(this->textBox_uc);
			this->groupBox1->Location = System::Drawing::Point(28, 28);
			this->groupBox1->Margin = System::Windows::Forms::Padding(6);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(6);
			this->groupBox1->Size = System::Drawing::Size(1212, 227);
			this->groupBox1->TabIndex = 30;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"[ register converter ]";
			// 
			// label26
			// 
			this->label26->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label26->Location = System::Drawing::Point(11, 103);
			this->label26->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(1190, 4);
			this->label26->TabIndex = 42;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(11, 59);
			this->label9->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(56, 25);
			this->label9->TabIndex = 35;
			this->label9->Text = L"enter";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(11, 124);
			this->label3->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(104, 25);
			this->label3->TabIndex = 29;
			this->label3->Text = L"uppercase";
			// 
			// textBox_rvalue
			// 
			this->textBox_rvalue->BackColor = System::Drawing::SystemColors::Window;
			this->textBox_rvalue->Location = System::Drawing::Point(145, 54);
			this->textBox_rvalue->Margin = System::Windows::Forms::Padding(6);
			this->textBox_rvalue->Name = L"textBox_rvalue";
			this->textBox_rvalue->Size = System::Drawing::Size(1042, 29);
			this->textBox_rvalue->TabIndex = 30;
			this->textBox_rvalue->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_rvalue_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(11, 172);
			this->label2->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 25);
			this->label2->TabIndex = 28;
			this->label2->Text = L"lowercase";
			// 
			// textBox_lc
			// 
			this->textBox_lc->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox_lc->Location = System::Drawing::Point(145, 166);
			this->textBox_lc->Margin = System::Windows::Forms::Padding(6);
			this->textBox_lc->Name = L"textBox_lc";
			this->textBox_lc->Size = System::Drawing::Size(1042, 29);
			this->textBox_lc->TabIndex = 27;
			// 
			// textBox_uc
			// 
			this->textBox_uc->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox_uc->Location = System::Drawing::Point(145, 118);
			this->textBox_uc->Margin = System::Windows::Forms::Padding(6);
			this->textBox_uc->Name = L"textBox_uc";
			this->textBox_uc->Size = System::Drawing::Size(1042, 29);
			this->textBox_uc->TabIndex = 22;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label20);
			this->groupBox4->Controls->Add(this->label22);
			this->groupBox4->Controls->Add(this->label10);
			this->groupBox4->Controls->Add(this->textBox_calc_enter_x16);
			this->groupBox4->Controls->Add(this->textBox_calc_enter_x10);
			this->groupBox4->Controls->Add(this->textBox_calc_16sf);
			this->groupBox4->Controls->Add(this->label14);
			this->groupBox4->Controls->Add(this->label15);
			this->groupBox4->Controls->Add(this->textBox_calc_16ui);
			this->groupBox4->Controls->Add(this->label12);
			this->groupBox4->Controls->Add(this->textBox_calc_16si);
			this->groupBox4->Controls->Add(this->label13);
			this->groupBox4->Controls->Add(this->textBox_calc_10ui);
			this->groupBox4->Controls->Add(this->textBox_calc_10sf);
			this->groupBox4->Controls->Add(this->label11);
			this->groupBox4->Controls->Add(this->textBox_calc_10si);
			this->groupBox4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox4->Location = System::Drawing::Point(28, 28);
			this->groupBox4->Margin = System::Windows::Forms::Padding(6);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Padding = System::Windows::Forms::Padding(6);
			this->groupBox4->Size = System::Drawing::Size(1212, 284);
			this->groupBox4->TabIndex = 30;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"[ int/hex - calculator/converter ]";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(13, 227);
			this->label20->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(44, 25);
			this->label20->TabIndex = 37;
			this->label20->Text = L"hex";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(13, 179);
			this->label22->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(44, 25);
			this->label22->TabIndex = 36;
			this->label22->Text = L"dec";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(592, 24);
			this->label10->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(56, 25);
			this->label10->TabIndex = 35;
			this->label10->Text = L"enter";
			// 
			// textBox_calc_enter_x16
			// 
			this->textBox_calc_enter_x16->BackColor = System::Drawing::SystemColors::Window;
			this->textBox_calc_enter_x16->Location = System::Drawing::Point(68, 102);
			this->textBox_calc_enter_x16->Margin = System::Windows::Forms::Padding(6);
			this->textBox_calc_enter_x16->Name = L"textBox_calc_enter_x16";
			this->textBox_calc_enter_x16->Size = System::Drawing::Size(1119, 29);
			this->textBox_calc_enter_x16->TabIndex = 30;
			this->textBox_calc_enter_x16->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_calc_enter_x16_TextChanged);
			// 
			// textBox_calc_enter_x10
			// 
			this->textBox_calc_enter_x10->BackColor = System::Drawing::SystemColors::Window;
			this->textBox_calc_enter_x10->Location = System::Drawing::Point(68, 54);
			this->textBox_calc_enter_x10->Margin = System::Windows::Forms::Padding(6);
			this->textBox_calc_enter_x10->Name = L"textBox_calc_enter_x10";
			this->textBox_calc_enter_x10->Size = System::Drawing::Size(1119, 29);
			this->textBox_calc_enter_x10->TabIndex = 28;
			this->textBox_calc_enter_x10->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_calc_enter_x10_TextChanged);
			// 
			// textBox_calc_16sf
			// 
			this->textBox_calc_16sf->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox_calc_16sf->Location = System::Drawing::Point(823, 222);
			this->textBox_calc_16sf->Margin = System::Windows::Forms::Padding(6);
			this->textBox_calc_16sf->Name = L"textBox_calc_16sf";
			this->textBox_calc_16sf->Size = System::Drawing::Size(363, 29);
			this->textBox_calc_16sf->TabIndex = 27;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(15, 107);
			this->label14->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(44, 25);
			this->label14->TabIndex = 18;
			this->label14->Text = L"hex";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(15, 59);
			this->label15->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(44, 25);
			this->label15->TabIndex = 17;
			this->label15->Text = L"dec";
			// 
			// textBox_calc_16ui
			// 
			this->textBox_calc_16ui->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox_calc_16ui->Location = System::Drawing::Point(68, 222);
			this->textBox_calc_16ui->Margin = System::Windows::Forms::Padding(6);
			this->textBox_calc_16ui->Name = L"textBox_calc_16ui";
			this->textBox_calc_16ui->Size = System::Drawing::Size(363, 29);
			this->textBox_calc_16ui->TabIndex = 26;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(578, 144);
			this->label12->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(95, 25);
			this->label12->TabIndex = 22;
			this->label12->Text = L"signed int";
			// 
			// textBox_calc_16si
			// 
			this->textBox_calc_16si->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox_calc_16si->Location = System::Drawing::Point(446, 222);
			this->textBox_calc_16si->Margin = System::Windows::Forms::Padding(6);
			this->textBox_calc_16si->Name = L"textBox_calc_16si";
			this->textBox_calc_16si->Size = System::Drawing::Size(363, 29);
			this->textBox_calc_16si->TabIndex = 25;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(193, 144);
			this->label13->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(117, 25);
			this->label13->TabIndex = 20;
			this->label13->Text = L"unsigned int";
			// 
			// textBox_calc_10ui
			// 
			this->textBox_calc_10ui->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox_calc_10ui->Location = System::Drawing::Point(68, 174);
			this->textBox_calc_10ui->Margin = System::Windows::Forms::Padding(6);
			this->textBox_calc_10ui->Name = L"textBox_calc_10ui";
			this->textBox_calc_10ui->Size = System::Drawing::Size(363, 29);
			this->textBox_calc_10ui->TabIndex = 21;
			// 
			// textBox_calc_10sf
			// 
			this->textBox_calc_10sf->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox_calc_10sf->Location = System::Drawing::Point(823, 174);
			this->textBox_calc_10sf->Margin = System::Windows::Forms::Padding(6);
			this->textBox_calc_10sf->Name = L"textBox_calc_10sf";
			this->textBox_calc_10sf->Size = System::Drawing::Size(363, 29);
			this->textBox_calc_10sf->TabIndex = 23;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(955, 144);
			this->label11->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(111, 25);
			this->label11->TabIndex = 24;
			this->label11->Text = L"signed float";
			// 
			// textBox_calc_10si
			// 
			this->textBox_calc_10si->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox_calc_10si->Location = System::Drawing::Point(446, 174);
			this->textBox_calc_10si->Margin = System::Windows::Forms::Padding(6);
			this->textBox_calc_10si->Name = L"textBox_calc_10si";
			this->textBox_calc_10si->Size = System::Drawing::Size(363, 29);
			this->textBox_calc_10si->TabIndex = 19;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label39);
			this->groupBox2->Controls->Add(this->label41);
			this->groupBox2->Controls->Add(this->textBox_bytes);
			this->groupBox2->Controls->Add(this->label25);
			this->groupBox2->Controls->Add(this->label_size);
			this->groupBox2->Controls->Add(this->label18);
			this->groupBox2->Controls->Add(this->label17);
			this->groupBox2->Controls->Add(this->label16);
			this->groupBox2->Controls->Add(this->textBox_idap);
			this->groupBox2->Controls->Add(this->textBox_codem);
			this->groupBox2->Controls->Add(this->textBox_codep);
			this->groupBox2->Location = System::Drawing::Point(28, 266);
			this->groupBox2->Margin = System::Windows::Forms::Padding(6);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(6);
			this->groupBox2->Size = System::Drawing::Size(1212, 280);
			this->groupBox2->TabIndex = 31;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"[ pattern converter ]";
			// 
			// label39
			// 
			this->label39->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label39->Location = System::Drawing::Point(11, 159);
			this->label39->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(1190, 4);
			this->label39->TabIndex = 43;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(11, 117);
			this->label41->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(59, 25);
			this->label41->TabIndex = 44;
			this->label41->Text = L"bytes";
			// 
			// textBox_bytes
			// 
			this->textBox_bytes->BackColor = System::Drawing::SystemColors::Window;
			this->textBox_bytes->Location = System::Drawing::Point(145, 112);
			this->textBox_bytes->Margin = System::Windows::Forms::Padding(6);
			this->textBox_bytes->Name = L"textBox_bytes";
			this->textBox_bytes->Size = System::Drawing::Size(1042, 29);
			this->textBox_bytes->TabIndex = 42;
			this->textBox_bytes->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_bytes_TextChanged);
			// 
			// label25
			// 
			this->label25->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label25->Location = System::Drawing::Point(11, 99);
			this->label25->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(1190, 4);
			this->label25->TabIndex = 39;
			// 
			// label_size
			// 
			this->label_size->AutoSize = true;
			this->label_size->Location = System::Drawing::Point(1084, 227);
			this->label_size->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label_size->Name = L"label_size";
			this->label_size->Size = System::Drawing::Size(53, 25);
			this->label_size->TabIndex = 41;
			this->label_size->Text = L"size:";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(11, 57);
			this->label18->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(103, 25);
			this->label18->TabIndex = 40;
			this->label18->Text = L"ida pattern";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(11, 227);
			this->label17->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(107, 25);
			this->label17->TabIndex = 39;
			this->label17->Text = L"code mask";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(11, 179);
			this->label16->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(120, 25);
			this->label16->TabIndex = 38;
			this->label16->Text = L"code pattern";
			// 
			// textBox_idap
			// 
			this->textBox_idap->BackColor = System::Drawing::SystemColors::Window;
			this->textBox_idap->Location = System::Drawing::Point(145, 52);
			this->textBox_idap->Margin = System::Windows::Forms::Padding(6);
			this->textBox_idap->Name = L"textBox_idap";
			this->textBox_idap->Size = System::Drawing::Size(1042, 29);
			this->textBox_idap->TabIndex = 37;
			this->textBox_idap->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_idap_TextChanged);
			// 
			// textBox_codem
			// 
			this->textBox_codem->BackColor = System::Drawing::SystemColors::Window;
			this->textBox_codem->Location = System::Drawing::Point(145, 221);
			this->textBox_codem->Margin = System::Windows::Forms::Padding(6);
			this->textBox_codem->Name = L"textBox_codem";
			this->textBox_codem->Size = System::Drawing::Size(926, 29);
			this->textBox_codem->TabIndex = 36;
			this->textBox_codem->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_codem_TextChanged);
			// 
			// textBox_codep
			// 
			this->textBox_codep->BackColor = System::Drawing::SystemColors::Window;
			this->textBox_codep->Location = System::Drawing::Point(145, 173);
			this->textBox_codep->Margin = System::Windows::Forms::Padding(6);
			this->textBox_codep->Name = L"textBox_codep";
			this->textBox_codep->Size = System::Drawing::Size(1042, 29);
			this->textBox_codep->TabIndex = 36;
			this->textBox_codep->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_codep_TextChanged);
			// 
			// comboBox_calc_bits
			// 
			this->comboBox_calc_bits->FormattingEnabled = true;
			this->comboBox_calc_bits->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"64", L"32" });
			this->comboBox_calc_bits->Location = System::Drawing::Point(1018, 587);
			this->comboBox_calc_bits->Margin = System::Windows::Forms::Padding(6);
			this->comboBox_calc_bits->Name = L"comboBox_calc_bits";
			this->comboBox_calc_bits->Size = System::Drawing::Size(219, 32);
			this->comboBox_calc_bits->TabIndex = 32;
			this->comboBox_calc_bits->Text = L"64";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(964, 593);
			this->label19->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(42, 25);
			this->label19->TabIndex = 36;
			this->label19->Text = L"bits";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->label28);
			this->groupBox5->Controls->Add(this->label38);
			this->groupBox5->Controls->Add(this->comboBox_bit_style);
			this->groupBox5->Controls->Add(this->textBox_bit_value3);
			this->groupBox5->Controls->Add(this->label37);
			this->groupBox5->Controls->Add(this->textBox_bit_value2);
			this->groupBox5->Controls->Add(this->label21);
			this->groupBox5->Controls->Add(this->label23);
			this->groupBox5->Controls->Add(this->textBox_bit_value1);
			this->groupBox5->Location = System::Drawing::Point(28, 28);
			this->groupBox5->Margin = System::Windows::Forms::Padding(6);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Padding = System::Windows::Forms::Padding(6);
			this->groupBox5->Size = System::Drawing::Size(1212, 281);
			this->groupBox5->TabIndex = 37;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"[ bit - calculator/converter ]";
			// 
			// label28
			// 
			this->label28->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label28->Location = System::Drawing::Point(11, 103);
			this->label28->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(1190, 4);
			this->label28->TabIndex = 46;
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(871, 222);
			this->label38->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(87, 25);
			this->label38->TabIndex = 44;
			this->label38->Text = L"bits style";
			// 
			// comboBox_bit_style
			// 
			this->comboBox_bit_style->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(2) { L"(1 << * )", L"0x****" });
			this->comboBox_bit_style->FormattingEnabled = true;
			this->comboBox_bit_style->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"(1 << * )", L"0x****" });
			this->comboBox_bit_style->Location = System::Drawing::Point(968, 216);
			this->comboBox_bit_style->Margin = System::Windows::Forms::Padding(6);
			this->comboBox_bit_style->Name = L"comboBox_bit_style";
			this->comboBox_bit_style->Size = System::Drawing::Size(219, 32);
			this->comboBox_bit_style->TabIndex = 43;
			// 
			// textBox_bit_value3
			// 
			this->textBox_bit_value3->BackColor = System::Drawing::SystemColors::Window;
			this->textBox_bit_value3->Location = System::Drawing::Point(86, 168);
			this->textBox_bit_value3->Margin = System::Windows::Forms::Padding(6);
			this->textBox_bit_value3->Name = L"textBox_bit_value3";
			this->textBox_bit_value3->Size = System::Drawing::Size(1100, 29);
			this->textBox_bit_value3->TabIndex = 41;
			this->textBox_bit_value3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_bit_value3_TextChanged);
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(11, 174);
			this->label37->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(72, 25);
			this->label37->TabIndex = 42;
			this->label37->Text = L"bits &&=";
			// 
			// textBox_bit_value2
			// 
			this->textBox_bit_value2->BackColor = System::Drawing::SystemColors::Window;
			this->textBox_bit_value2->Location = System::Drawing::Point(86, 120);
			this->textBox_bit_value2->Margin = System::Windows::Forms::Padding(6);
			this->textBox_bit_value2->Name = L"textBox_bit_value2";
			this->textBox_bit_value2->Size = System::Drawing::Size(1100, 29);
			this->textBox_bit_value2->TabIndex = 36;
			this->textBox_bit_value2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_bit_value2_TextChanged);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(11, 59);
			this->label21->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(50, 25);
			this->label21->TabIndex = 40;
			this->label21->Text = L"num";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(11, 126);
			this->label23->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(64, 25);
			this->label23->TabIndex = 38;
			this->label23->Text = L"bits |=";
			// 
			// textBox_bit_value1
			// 
			this->textBox_bit_value1->BackColor = System::Drawing::SystemColors::Window;
			this->textBox_bit_value1->Location = System::Drawing::Point(86, 54);
			this->textBox_bit_value1->Margin = System::Windows::Forms::Padding(6);
			this->textBox_bit_value1->Name = L"textBox_bit_value1";
			this->textBox_bit_value1->Size = System::Drawing::Size(1100, 29);
			this->textBox_bit_value1->TabIndex = 37;
			this->textBox_bit_value1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_bit_value1_TextChanged);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Location = System::Drawing::Point(583, 46);
			this->tabControl1->Margin = System::Windows::Forms::Padding(6);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1282, 1110);
			this->tabControl1->TabIndex = 38;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->groupBox4);
			this->tabPage1->Controls->Add(this->groupBox3);
			this->tabPage1->Controls->Add(this->label19);
			this->tabPage1->Controls->Add(this->comboBox_calc_bits);
			this->tabPage1->Location = System::Drawing::Point(4, 33);
			this->tabPage1->Margin = System::Windows::Forms::Padding(6);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(6);
			this->tabPage1->Size = System::Drawing::Size(1274, 1073);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Page1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->groupBox8);
			this->tabPage2->Controls->Add(this->groupBox5);
			this->tabPage2->Location = System::Drawing::Point(4, 33);
			this->tabPage2->Margin = System::Windows::Forms::Padding(6);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(6);
			this->tabPage2->Size = System::Drawing::Size(1274, 1073);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Page2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->label43);
			this->groupBox8->Controls->Add(this->textBox_byte_value_ui_64_hex);
			this->groupBox8->Controls->Add(this->textBox_byte_value_ui_32_hex);
			this->groupBox8->Controls->Add(this->label35);
			this->groupBox8->Controls->Add(this->label36);
			this->groupBox8->Controls->Add(this->textBox_byte_value_sf_64);
			this->groupBox8->Controls->Add(this->textBox_byte_value_si_64);
			this->groupBox8->Controls->Add(this->textBox_byte_value_ui_64);
			this->groupBox8->Controls->Add(this->label34);
			this->groupBox8->Controls->Add(this->label33);
			this->groupBox8->Controls->Add(this->textBox_byte_value_sf_32);
			this->groupBox8->Controls->Add(this->label32);
			this->groupBox8->Controls->Add(this->textBox_byte_value_si_32);
			this->groupBox8->Controls->Add(this->textBox_byte_value);
			this->groupBox8->Controls->Add(this->label30);
			this->groupBox8->Controls->Add(this->label31);
			this->groupBox8->Controls->Add(this->textBox_byte_value_ui_32);
			this->groupBox8->Location = System::Drawing::Point(28, 319);
			this->groupBox8->Margin = System::Windows::Forms::Padding(6);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Padding = System::Windows::Forms::Padding(6);
			this->groupBox8->Size = System::Drawing::Size(1212, 238);
			this->groupBox8->TabIndex = 41;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"[ byte - calculator/converter ]";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(131, 43);
			this->label43->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(168, 25);
			this->label43->TabIndex = 58;
			this->label43->Text = L"unsigned int (hex)";
			// 
			// textBox_byte_value_ui_64_hex
			// 
			this->textBox_byte_value_ui_64_hex->BackColor = System::Drawing::SystemColors::Window;
			this->textBox_byte_value_ui_64_hex->Location = System::Drawing::Point(78, 122);
			this->textBox_byte_value_ui_64_hex->Margin = System::Windows::Forms::Padding(6);
			this->textBox_byte_value_ui_64_hex->Name = L"textBox_byte_value_ui_64_hex";
			this->textBox_byte_value_ui_64_hex->Size = System::Drawing::Size(268, 29);
			this->textBox_byte_value_ui_64_hex->TabIndex = 57;
			this->textBox_byte_value_ui_64_hex->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_byte_value_ui_64_hex_TextChanged);
			// 
			// textBox_byte_value_ui_32_hex
			// 
			this->textBox_byte_value_ui_32_hex->BackColor = System::Drawing::SystemColors::Window;
			this->textBox_byte_value_ui_32_hex->Location = System::Drawing::Point(78, 74);
			this->textBox_byte_value_ui_32_hex->Margin = System::Windows::Forms::Padding(6);
			this->textBox_byte_value_ui_32_hex->Name = L"textBox_byte_value_ui_32_hex";
			this->textBox_byte_value_ui_32_hex->Size = System::Drawing::Size(268, 29);
			this->textBox_byte_value_ui_32_hex->TabIndex = 56;
			this->textBox_byte_value_ui_32_hex->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_byte_value_ui_32_hex_TextChanged);
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(17, 127);
			this->label35->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(44, 25);
			this->label35->TabIndex = 55;
			this->label35->Text = L"x64";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(17, 79);
			this->label36->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(44, 25);
			this->label36->TabIndex = 54;
			this->label36->Text = L"x32";
			// 
			// textBox_byte_value_sf_64
			// 
			this->textBox_byte_value_sf_64->BackColor = System::Drawing::SystemColors::Window;
			this->textBox_byte_value_sf_64->Location = System::Drawing::Point(918, 122);
			this->textBox_byte_value_sf_64->Margin = System::Windows::Forms::Padding(6);
			this->textBox_byte_value_sf_64->Name = L"textBox_byte_value_sf_64";
			this->textBox_byte_value_sf_64->Size = System::Drawing::Size(268, 29);
			this->textBox_byte_value_sf_64->TabIndex = 53;
			this->textBox_byte_value_sf_64->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_byte_value_sf_64_TextChanged);
			// 
			// textBox_byte_value_si_64
			// 
			this->textBox_byte_value_si_64->BackColor = System::Drawing::SystemColors::Window;
			this->textBox_byte_value_si_64->Location = System::Drawing::Point(638, 122);
			this->textBox_byte_value_si_64->Margin = System::Windows::Forms::Padding(6);
			this->textBox_byte_value_si_64->Name = L"textBox_byte_value_si_64";
			this->textBox_byte_value_si_64->Size = System::Drawing::Size(268, 29);
			this->textBox_byte_value_si_64->TabIndex = 52;
			this->textBox_byte_value_si_64->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_byte_value_si_64_TextChanged);
			// 
			// textBox_byte_value_ui_64
			// 
			this->textBox_byte_value_ui_64->BackColor = System::Drawing::SystemColors::Window;
			this->textBox_byte_value_ui_64->Location = System::Drawing::Point(358, 122);
			this->textBox_byte_value_ui_64->Margin = System::Windows::Forms::Padding(6);
			this->textBox_byte_value_ui_64->Name = L"textBox_byte_value_ui_64";
			this->textBox_byte_value_ui_64->Size = System::Drawing::Size(268, 29);
			this->textBox_byte_value_ui_64->TabIndex = 51;
			this->textBox_byte_value_ui_64->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_byte_value_ui_64_TextChanged);
			// 
			// label34
			// 
			this->label34->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label34->Location = System::Drawing::Point(11, 172);
			this->label34->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(1190, 4);
			this->label34->TabIndex = 45;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(973, 44);
			this->label33->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(162, 25);
			this->label33->TabIndex = 44;
			this->label33->Text = L"signed float (dec)";
			// 
			// textBox_byte_value_sf_32
			// 
			this->textBox_byte_value_sf_32->BackColor = System::Drawing::SystemColors::Window;
			this->textBox_byte_value_sf_32->Location = System::Drawing::Point(918, 74);
			this->textBox_byte_value_sf_32->Margin = System::Windows::Forms::Padding(6);
			this->textBox_byte_value_sf_32->Name = L"textBox_byte_value_sf_32";
			this->textBox_byte_value_sf_32->Size = System::Drawing::Size(268, 29);
			this->textBox_byte_value_sf_32->TabIndex = 43;
			this->textBox_byte_value_sf_32->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_byte_value_sf_32_TextChanged);
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(703, 44);
			this->label32->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(146, 25);
			this->label32->TabIndex = 42;
			this->label32->Text = L"signed int (dec)";
			// 
			// textBox_byte_value_si_32
			// 
			this->textBox_byte_value_si_32->BackColor = System::Drawing::SystemColors::Window;
			this->textBox_byte_value_si_32->Location = System::Drawing::Point(638, 74);
			this->textBox_byte_value_si_32->Margin = System::Windows::Forms::Padding(6);
			this->textBox_byte_value_si_32->Name = L"textBox_byte_value_si_32";
			this->textBox_byte_value_si_32->Size = System::Drawing::Size(268, 29);
			this->textBox_byte_value_si_32->TabIndex = 41;
			this->textBox_byte_value_si_32->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_byte_value_si_32_TextChanged);
			// 
			// textBox_byte_value
			// 
			this->textBox_byte_value->BackColor = System::Drawing::SystemColors::Window;
			this->textBox_byte_value->Location = System::Drawing::Point(78, 186);
			this->textBox_byte_value->Margin = System::Windows::Forms::Padding(6);
			this->textBox_byte_value->Name = L"textBox_byte_value";
			this->textBox_byte_value->Size = System::Drawing::Size(1109, 29);
			this->textBox_byte_value->TabIndex = 36;
			this->textBox_byte_value->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_byte_value_TextChanged);
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(416, 44);
			this->label30->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(168, 25);
			this->label30->TabIndex = 40;
			this->label30->Text = L"unsigned int (dec)";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(11, 190);
			this->label31->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(59, 25);
			this->label31->TabIndex = 38;
			this->label31->Text = L"bytes";
			// 
			// textBox_byte_value_ui_32
			// 
			this->textBox_byte_value_ui_32->BackColor = System::Drawing::SystemColors::Window;
			this->textBox_byte_value_ui_32->Location = System::Drawing::Point(358, 74);
			this->textBox_byte_value_ui_32->Margin = System::Windows::Forms::Padding(6);
			this->textBox_byte_value_ui_32->Name = L"textBox_byte_value_ui_32";
			this->textBox_byte_value_ui_32->Size = System::Drawing::Size(268, 29);
			this->textBox_byte_value_ui_32->TabIndex = 37;
			this->textBox_byte_value_ui_32->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_byte_value_ui_32_TextChanged);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->groupBox9);
			this->tabPage3->Controls->Add(this->groupBox1);
			this->tabPage3->Controls->Add(this->groupBox2);
			this->tabPage3->Location = System::Drawing::Point(4, 33);
			this->tabPage3->Margin = System::Windows::Forms::Padding(6);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(1274, 1073);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Page3";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->label29);
			this->groupBox9->Controls->Add(this->label40);
			this->groupBox9->Controls->Add(this->label42);
			this->groupBox9->Controls->Add(this->textBox_str_for_byte_value);
			this->groupBox9->Controls->Add(this->textBox_byte_from_str_value);
			this->groupBox9->Location = System::Drawing::Point(28, 558);
			this->groupBox9->Margin = System::Windows::Forms::Padding(6);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Padding = System::Windows::Forms::Padding(6);
			this->groupBox9->Size = System::Drawing::Size(1212, 178);
			this->groupBox9->TabIndex = 42;
			this->groupBox9->TabStop = false;
			this->groupBox9->Text = L"[ string <> bytes converter ]";
			// 
			// label29
			// 
			this->label29->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label29->Location = System::Drawing::Point(11, 102);
			this->label29->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(1190, 4);
			this->label29->TabIndex = 39;
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(11, 57);
			this->label40->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(59, 25);
			this->label40->TabIndex = 40;
			this->label40->Text = L"string";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(11, 122);
			this->label42->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(103, 25);
			this->label42->TabIndex = 38;
			this->label42->Text = L"ida pattern";
			// 
			// textBox_str_for_byte_value
			// 
			this->textBox_str_for_byte_value->BackColor = System::Drawing::SystemColors::Window;
			this->textBox_str_for_byte_value->Location = System::Drawing::Point(145, 52);
			this->textBox_str_for_byte_value->Margin = System::Windows::Forms::Padding(6);
			this->textBox_str_for_byte_value->Name = L"textBox_str_for_byte_value";
			this->textBox_str_for_byte_value->Size = System::Drawing::Size(1042, 29);
			this->textBox_str_for_byte_value->TabIndex = 37;
			this->textBox_str_for_byte_value->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_str_for_byte_value_TextChanged);
			// 
			// textBox_byte_from_str_value
			// 
			this->textBox_byte_from_str_value->BackColor = System::Drawing::SystemColors::Window;
			this->textBox_byte_from_str_value->Location = System::Drawing::Point(145, 116);
			this->textBox_byte_from_str_value->Margin = System::Windows::Forms::Padding(6);
			this->textBox_byte_from_str_value->Name = L"textBox_byte_from_str_value";
			this->textBox_byte_from_str_value->Size = System::Drawing::Size(1042, 29);
			this->textBox_byte_from_str_value->TabIndex = 36;
			this->textBox_byte_from_str_value->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_byte_from_str_value_TextChanged);
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->groupBox7);
			this->tabPage4->Controls->Add(this->groupBox6);
			this->tabPage4->Location = System::Drawing::Point(4, 33);
			this->tabPage4->Margin = System::Windows::Forms::Padding(6);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(1274, 1073);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Settings";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// groupBox7
			// 
			this->groupBox7->Location = System::Drawing::Point(645, 28);
			this->groupBox7->Margin = System::Windows::Forms::Padding(6);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Padding = System::Windows::Forms::Padding(6);
			this->groupBox7->Size = System::Drawing::Size(590, 1004);
			this->groupBox7->TabIndex = 42;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"[ group ]";
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->comboBox_settings_hexstyle);
			this->groupBox6->Controls->Add(this->label27);
			this->groupBox6->Location = System::Drawing::Point(28, 28);
			this->groupBox6->Margin = System::Windows::Forms::Padding(6);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Padding = System::Windows::Forms::Padding(6);
			this->groupBox6->Size = System::Drawing::Size(590, 1004);
			this->groupBox6->TabIndex = 41;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"[ register style ]";
			// 
			// comboBox_settings_hexstyle
			// 
			this->comboBox_settings_hexstyle->FormattingEnabled = true;
			this->comboBox_settings_hexstyle->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"uppercase", L"lowercase" });
			this->comboBox_settings_hexstyle->Location = System::Drawing::Point(303, 52);
			this->comboBox_settings_hexstyle->Margin = System::Windows::Forms::Padding(6);
			this->comboBox_settings_hexstyle->Name = L"comboBox_settings_hexstyle";
			this->comboBox_settings_hexstyle->Size = System::Drawing::Size(257, 32);
			this->comboBox_settings_hexstyle->TabIndex = 0;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(11, 57);
			this->label27->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(89, 25);
			this->label27->TabIndex = 36;
			this->label27->Text = L"hex style";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1866, 1132);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->label_notepad);
			this->Controls->Add(this->richTextBox_notepad);
			this->Margin = System::Windows::Forms::Padding(6);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1890, 1196);
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->Text = L"Reversed Data Converter (by NiceL)";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->groupBox9->ResumeLayout(false);
			this->groupBox9->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		void InitializeToolTip(void)
		{
			System::Windows::Forms::ToolTip^ ToolTip1;
			ToolTip1 = (gcnew System::Windows::Forms::ToolTip());
		}
		void InitializeSettingsToMenu(void)
		{

		}
		void InitializeSettingsFromMenu(void)
		{

		}

#pragma endregion
	bool OutputUsed = false;

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		// init
		String^ Output;
		std::string sPath = (std::string)getenv(u8"appdata") + u8"\\ReverseDataConverter\\";

		// do
		std::ifstream notepad((sPath + "Notepad.ini").c_str(), std::ios_base::in);
		if (notepad.is_open())
		{
			std::string sText = "";

			std::string line;
			while (std::getline(notepad, line))
			{
				sText += line + "\n";
			}

			String^ Output = gcnew String(sText.c_str());
			this->richTextBox_notepad->Text = Output;

			notepad.close();
		}

		char HexStyle[32] = { '\0' };
		GetPrivateProfileStringA("Settings", "HexStyle", "uppercase", HexStyle, 32, (sPath + "Settings.ini").c_str());
		Output = gcnew String(HexStyle);
		this->comboBox_settings_hexstyle->Text = Output;

		char CalcBits[32] = { '\0' };
		GetPrivateProfileStringA("Settings", "CalcBits", "64", CalcBits, 32, (sPath + "Settings.ini").c_str());
		Output = gcnew String(CalcBits);
		this->comboBox_calc_bits->Text = Output;

		char BitStyle[32] = { '\0' };
		GetPrivateProfileStringA("Settings", "BitStyle", "(1 << * )", BitStyle, 32, (sPath + "Settings.ini").c_str());
		Output = gcnew String(BitStyle);
		this->comboBox_bit_style->Text = Output;

	}

	private: System::Void MyForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
	{		
		// init
		std::string sPath = (std::string)getenv(u8"appdata") + u8"\\ReverseDataConverter\\";
		CreateDirectoryA(sPath.c_str(), NULL);

		// do
		std::ofstream notepad((sPath + "Notepad.ini").c_str(), std::ios_base::out | std::ios_base::trunc);
		if (notepad.is_open())
		{
			std::string sText = msclr::interop::marshal_as<std::string>(this->richTextBox_notepad->Text);
			notepad << sText;
			notepad.close();
		}

		WritePrivateProfileStringA("Settings", "HexStyle", msclr::interop::marshal_as<std::string>(this->comboBox_settings_hexstyle->Text).c_str(), (sPath + "Settings.ini").c_str());
		WritePrivateProfileStringA("Settings", "CalcBits", msclr::interop::marshal_as<std::string>(this->comboBox_calc_bits->Text).c_str(), (sPath + "Settings.ini").c_str());
		WritePrivateProfileStringA("Settings", "BitStyle", msclr::interop::marshal_as<std::string>(this->comboBox_bit_style->Text).c_str(), (sPath + "Settings.ini").c_str());
	}


	// Utils
	std::string GetCleanData(System::Windows::Forms::TextBox^ Object, System::Windows::Forms::ComboBox^ Register)
	{
		// init
		int idx;
		std::string sText = msclr::interop::marshal_as<std::string>(Object->Text);
		std::string sText2;

		// delete shitty symbols
		for (int i = 0; i < sText.size(); i++)
		{
			if (sText[i] == 'x' || sText[i] == 'X' || sText[i] == '?' || sText[i] == 'h' || sText[i] == 'H' || sText[i] == ' ' || 
				sText[i] == '<' || sText[i] == '~' || sText[i] == '|' || sText[i] == '&' || sText[i] == '\\' ||
				sText[i] == '(' || sText[i] == ')' || sText[i] == '.' || sText[i] == ',' ||
				sText[i] == '+' || sText[i] == '-' || sText[i] == '*' || sText[i] == '/' || sText[i] == '^' ||
				(sText[i] >= 'a' && sText[i] <= 'f') || (sText[i] >= 'A' && sText[i] <= 'F') || (sText[i] >= '0' && sText[i] <= '9')
			)
				sText2 += sText[i];
		}
		sText = sText2;

		// conver to our register
		if (Register->Text == "uppercase")
		{
			std::transform(sText.begin(), sText.end(), sText.begin(), ::toupper);
		}
		else // lowercase
		{
			std::transform(sText.begin(), sText.end(), sText.begin(), ::tolower);
		}

		// x, h to lowercase - it shows that this is hex value
		while ((idx = sText.find("X")) != -1)
			sText[idx] = 'x';
		while ((idx = sText.find("H")) != -1)
			sText[idx] = 'h';

		// done
		return sText;
	}
	void ClearData(System::Windows::Forms::TextBox^ Object, System::Windows::Forms::ComboBox^ Register)
	{		
		// init
		String^ Output;

		std::string sText = msclr::interop::marshal_as<std::string>(Object->Text);
		std::string sText2 = GetCleanData(Object, Register);

		// output
		OutputUsed = true;

		// fix bug fix cursor
		auto BackupSelectionStart = Object->SelectionStart - ((int)(sText.size() - sText2.size()));
		if (BackupSelectionStart < 0) BackupSelectionStart = 0;

		sText = sText2;
		Output = gcnew String(sText.c_str());
		Object->Text = Output;

		Object->SelectionStart = BackupSelectionStart;

		OutputUsed = false;
	}

	int GetX(unsigned __int64 Value)
	{
		if (Value > 0xffffffff) // x64
			return 64;
		else // x32
			return 32;
	}
	int GetX(System::Windows::Forms::ComboBox^ Object)
	{
		if (Object->Text == "64") // x64
			return 64;
		else // x32
			return 32;
	}

	bool IsHex(std::string sText)
	{
		// hex detect
		for (int i = 0; i < sText.size(); i++)
		{
			if (sText[i] == 'X' || sText[i] == 'x' || sText[i] == 'H' || sText[i] == 'h' ||
				(sText[i] >= 'a' && sText[i] <= 'f') || (sText[i] >= 'A' && sText[i] <= 'F')
				)
				return true;
		}

		return false;
	}

	void GetValue1(unsigned __int64* Value1, std::string sText, bool bHex, int X)
	{
		// int/hex
		if (bHex)
			*Value1 = (unsigned __int64)calc_ui_hex_t().Do(sText);
		else
			*Value1 = (unsigned __int64)calc_ui_dec_t().Do(sText);

		// x32/x64
		if (X == 64)
			*Value1 = (unsigned __int64)*Value1;
		else
			*Value1 = (unsigned __int32)*Value1;
	}
	void GetValue2(signed __int64* Value2, std::string sText, bool bHex, int X)
	{
		// int/hex
		if (bHex)
			*Value2 = (signed __int64)calc_si_hex_t().Do(sText);
		else
			*Value2 = (signed __int64)calc_si_dec_t().Do(sText);

		// x32/x64
		if (X == 64)
			*Value2 = (signed __int64)*Value2;
		else
			*Value2 = (signed __int32)*Value2;
	}
	void GetValue3(long double* Value3, std::string sText, bool bHex, int X)
	{
		// int/hex
		if (bHex)
			*Value3 = (long double)calc_sf_hex_t().Do(sText);
		else
			*Value3 = (long double)calc_sf_dec_t().Do(sText);

		// x32/x64
		if (X == 64)
			*Value3 = (long double)*Value3;
		else
			*Value3 = (float)*Value3;
	}
	void GetValues(unsigned __int64* Value1, signed __int64* Value2, long double* Value3, std::string sText, bool bHex, int X)
	{
		GetValue1(Value1, sText, bHex, X);
		GetValue2(Value2, sText, bHex, X);
		GetValue3(Value3, sText, bHex, X);
	}

	void SetIntValue1(System::Windows::Forms::TextBox^ Object, unsigned __int64 Value)
	{
		String^ Output;
		Output = gcnew String(std::to_string(Value).c_str());
		OutputUsed = true;
		Object->Text = Output;
		OutputUsed = false;
	}
	void SetIntValue2(System::Windows::Forms::TextBox^ Object, signed __int64 Value)
	{
		String^ Output;
		Output = gcnew String(std::to_string(Value).c_str());
		OutputUsed = true;
		Object->Text = Output;
		OutputUsed = false;
	}
	void SetIntValue3(System::Windows::Forms::TextBox^ Object, long double Value)
	{
		String^ Output;
		Output = gcnew String(std::to_string(Value).c_str());
		OutputUsed = true;
		Object->Text = Output;
		OutputUsed = false;
	}

	void SetHexValue1(System::Windows::Forms::TextBox^ Object, System::Windows::Forms::ComboBox^ Register, unsigned __int64 Value, int X)
	{
		String^ Output;
		std::stringstream SS;
		std::string Str;

		SS.str("");
		if (X == 64) // x64
			SS << std::hex << (unsigned __int64)Value;
		else // x32
			SS << std::hex << (unsigned __int32)Value;
		Str = SS.str();

		if (Register->Text == "uppercase") // uppercase
			std::transform(Str.begin(), Str.end(), Str.begin(), ::toupper);
		else // lowercase
			std::transform(Str.begin(), Str.end(), Str.begin(), ::tolower);

		Output = gcnew String(("0x" + Str).c_str());
		OutputUsed = true;
		Object->Text = Output;
		OutputUsed = false;
	}
	void SetHexValue2(System::Windows::Forms::TextBox^ Object, System::Windows::Forms::ComboBox^ Register, signed __int64 Value, int X)
	{
		String^ Output;
		std::stringstream SS;
		std::string Str;

		SS.str("");
		if (X == 64) // x64
			SS << std::hex << (signed __int64)Value;
		else // x32
			SS << std::hex << (signed __int32)Value;
		Str = SS.str();

		if (Register->Text == "uppercase") // uppercase
			std::transform(Str.begin(), Str.end(), Str.begin(), ::toupper);
		else // lowercase
			std::transform(Str.begin(), Str.end(), Str.begin(), ::tolower);

		Output = gcnew String(("0x" + Str).c_str());
		OutputUsed = true;
		Object->Text = Output;
		OutputUsed = false;
	}
	void SetHexValue3(System::Windows::Forms::TextBox^ Object, System::Windows::Forms::ComboBox^ Register, long double Value, int X)
	{
		String^ Output;
		std::stringstream SS;
		std::string Str;

		SS.str("");
		if (X == 64) // x64
			SS << std::hexfloat << (long double)Value;
		else // x32
			SS << std::hexfloat << (float)Value;
		Str = SS.str();

		if (Register->Text == "uppercase") // uppercase
			std::transform(Str.begin(), Str.end(), Str.begin(), ::toupper);
		else // lowercase
			std::transform(Str.begin(), Str.end(), Str.begin(), ::tolower);
		Str[1] = 'x';

		Output = gcnew String((Str).c_str());
		OutputUsed = true;
		Object->Text = Output;
		OutputUsed = false;
	}


	// int/hex - calculator/converter
	private: System::Void textBox_calc_enter_x10_TextChanged(System::Object^ sender, System::EventArgs^ e) // x10 
	{
		if (OutputUsed)
			return;

		// get
		ClearData(this->textBox_calc_enter_x10, this->comboBox_settings_hexstyle);
		std::string sText = msclr::interop::marshal_as<std::string>(this->textBox_calc_enter_x10->Text);

		// do
		unsigned __int64 Value1;
		signed __int64 Value2;
		long double Value3;

		bool bHex = false;
		int X = GetX(this->comboBox_calc_bits);

		GetValues(&Value1, &Value2, &Value3, sText, bHex, GetX(this->comboBox_calc_bits));

		// output
		SetIntValue1(this->textBox_calc_10ui, Value1);
		SetIntValue2(this->textBox_calc_10si, Value2);
		SetIntValue3(this->textBox_calc_10sf, Value3);

		SetHexValue1(this->textBox_calc_16ui, this->comboBox_settings_hexstyle, Value1, X);
		SetHexValue2(this->textBox_calc_16si, this->comboBox_settings_hexstyle, Value2, X);
		SetHexValue3(this->textBox_calc_16sf, this->comboBox_settings_hexstyle, Value3, X);
	}

	private: System::Void textBox_calc_enter_x16_TextChanged(System::Object^ sender, System::EventArgs^ e) // x16
	{
		if (OutputUsed)
			return;

		// get
		ClearData(this->textBox_calc_enter_x16, this->comboBox_settings_hexstyle);
		std::string sText = msclr::interop::marshal_as<std::string>(this->textBox_calc_enter_x16->Text);

		// do
		unsigned __int64 Value1;
		signed __int64 Value2;
		long double Value3;

		bool bHex = true;
		int X = GetX(this->comboBox_calc_bits);

		GetValues(&Value1, &Value2, &Value3, sText, bHex, GetX(this->comboBox_calc_bits));

		// output
		SetIntValue1(this->textBox_calc_10ui, Value1);
		SetIntValue2(this->textBox_calc_10si, Value2);
		SetIntValue3(this->textBox_calc_10sf, Value3);

		SetHexValue1(this->textBox_calc_16ui, this->comboBox_settings_hexstyle, Value1, X);
		SetHexValue2(this->textBox_calc_16si, this->comboBox_settings_hexstyle, Value2, X);
		SetHexValue3(this->textBox_calc_16sf, this->comboBox_settings_hexstyle, Value3, X);
	}

	private: System::Void textBox_calc2_enter_TextChanged(System::Object^ sender, System::EventArgs^ e) // auto
	{
		if (OutputUsed)
			return;

		// get
		ClearData(this->textBox_calc2_enter, this->comboBox_settings_hexstyle);
		std::string sText = msclr::interop::marshal_as<std::string>(this->textBox_calc2_enter->Text);

		// do
		unsigned __int64 Value1;
		signed __int64 Value2;
		long double Value3;

		bool bHex = IsHex(sText);
		int X = GetX(this->comboBox_calc_bits);

		GetValues(&Value1, &Value2, &Value3, sText, bHex, GetX(this->comboBox_calc_bits));

		// output
		SetIntValue1(this->textBox_calc2_10ui, Value1);
		SetIntValue2(this->textBox_calc2_10si, Value2);
		SetIntValue3(this->textBox_calc2_10sf, Value3);

		SetHexValue1(this->textBox_calc2_16ui, this->comboBox_settings_hexstyle, Value1, X);
		SetHexValue2(this->textBox_calc2_16si, this->comboBox_settings_hexstyle, Value2, X);
		SetHexValue3(this->textBox_calc2_16sf, this->comboBox_settings_hexstyle, Value3, X);
	}


	// bits
	private: System::Void textBox_bit_value1_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		if (OutputUsed)
			return;

		// init
		String^ Output;
		std::stringstream SS;
		std::string Str;

		// get
		ClearData(this->textBox_bit_value1, this->comboBox_settings_hexstyle);
		std::string sText = msclr::interop::marshal_as<std::string>(this->textBox_bit_value1->Text);
		std::string sStyle = msclr::interop::marshal_as<std::string>(this->comboBox_bit_style->Text);

		// bad value
		if (!sText.size())
		{
			OutputUsed = true;
			this->textBox_bit_value2->Text = "";
			this->textBox_bit_value3->Text = "";
			OutputUsed = false;
			return;
		}

		// do
		unsigned __int64 Value1;

		bool bHex = IsHex(sText);
		GetValue1(&Value1, sText, bHex, 64);
		int X = GetX(Value1);

		if (X == 64)
		{
			//if ((Value2 > 0 || Value2 == LLONG_MAX + 1) && Value2 != LLONG_MAX) // |= ()
			{			
				Str = "";
				__int64 Value2 = Value1;
				int BitsCount = 0;

				for (__int64 i = 0; i < 64; i++) // (<<)
				{
					if (Value2 & ((__int64)1 << i))
					{
						std::string StrTemp;

						if (sStyle == "(1 << * )")
							StrTemp = (std::string)"(1 << " + std::to_string(i) + ")";
						else
						{
							SS.str("");
							SS << "0x" << std::hex << (1 << i);
							StrTemp = SS.str();
						}

						if (BitsCount)
							StrTemp = " | " + StrTemp;
						Str += StrTemp;
						BitsCount++;
					}
				}
				if (BitsCount > 1)
					Str = "(" + Str + ")";
				Output = gcnew String(Str.c_str());
				OutputUsed = true;
				this->textBox_bit_value2->Text = Output;
				OutputUsed = false;
				//return;
			}
			//else // |= ~()
			{
				Str = "";
				__int64 Value2 = Value1;
				int BitsCount = 0;

				for (__int64 i = 0; i < 64; i++) // (<<)
				{
					if (!(Value2 & ((__int64)1 << i)))
					{
						std::string StrTemp;

						if (sStyle == "(1 << * )")
							StrTemp = (std::string)"(1 << " + std::to_string(i) + ")";
						else
						{
							SS.str("");
							SS << "0x" << std::hex << (1 << i);
							StrTemp = SS.str();
						}
						if (BitsCount)
							StrTemp = " | " + StrTemp;
						Str += StrTemp;
						BitsCount++;
					}
				}

				if (BitsCount > 1)
					Str = "(" + Str + ")";
				if (Str.size() > 0)
					Str = "~" + Str;
				Output = gcnew String(Str.c_str());
				OutputUsed = true;
				this->textBox_bit_value3->Text = Output;
				OutputUsed = false;
				//return;
			}
		}
		else
		{
			__int32 Value2 = Value1;
			int BitsCount = 0;
			//if ((Value2 > 0 || Value2 == INT_MAX + 1) && Value2 != INT_MAX) // |= ()
			{
				Str = "";
				__int32 Value2 = Value1;
				int BitsCount = 0;
				for (__int32 i = 0; i < 32; i++) // (<<)
				{
					if (Value2 & ((__int32)1 << i))
					{
						std::string StrTemp;

						if (sStyle == "(1 << * )")
							StrTemp = (std::string)"(1 << " + std::to_string(i) + ")";
						else
						{
							SS.str("");
							SS << "0x" << std::hex << (1 << i);
							StrTemp = SS.str();
						}
						if (BitsCount)
							StrTemp = " | " + StrTemp;
						Str += StrTemp;
						BitsCount++;
					}
				}
				if (BitsCount > 1)
					Str = "(" + Str + ")";
				Output = gcnew String(Str.c_str());
				OutputUsed = true;
				this->textBox_bit_value2->Text = Output;
				OutputUsed = false;
				//return;
			}
			//else // |= ~()
			{
				Str = "";
				unsigned __int32 Value2 = Value1;
				int BitsCount = 0;
				for (__int32 i = 0; i < 32; i++) // (<<)
				{
					if (!(Value2 & ((__int32)1 << i)))
					{
						std::string StrTemp;

						if (sStyle == "(1 << * )")
							StrTemp = (std::string)"(1 << " + std::to_string(i) + ")";
						else
						{
							SS.str("");
							SS << "0x" << std::hex << (1 << i);
							StrTemp = SS.str();
						}
						if (BitsCount)
							StrTemp = " | " + StrTemp;
						Str += StrTemp;
						BitsCount++;
					}
				}

				if (BitsCount > 1)
					Str = "(" + Str + ")";
				if (Str.size() > 0)
					Str = "~" + Str;
				Output = gcnew String(Str.c_str());
				OutputUsed = true;
				this->textBox_bit_value3->Text = Output;
				OutputUsed = false;
				//return;
			}
		}
	}

	private: System::Void textBox_bit_value2_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		if (OutputUsed)
			return;

		// init
		String^ Output;
		std::stringstream SS;
		std::string Str;

		// get
		ClearData(this->textBox_bit_value2, this->comboBox_settings_hexstyle);
		std::string sText = msclr::interop::marshal_as<std::string>(this->textBox_bit_value2->Text);

		unsigned __int64 Value1;
		bool bHex = IsHex(sText);
		if (bHex)
			Value1 = calc_ui_hex_bits_t().Do(sText);
		else
			Value1 = calc_ui_dec_bits_t().Do(sText);

		int X = GetX(Value1);

		SetHexValue1(this->textBox_bit_value1, this->comboBox_settings_hexstyle, Value1, X);
		OutputUsed = true;
		this->textBox_bit_value3->Text = "";
		OutputUsed = false;
	}

	private: System::Void textBox_bit_value3_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		if (OutputUsed)
			return;

		// init
		String^ Output;
		std::stringstream SS;
		std::string Str;
		int idx;

		// get
		ClearData(this->textBox_bit_value3, this->comboBox_settings_hexstyle);
		std::string sText = msclr::interop::marshal_as<std::string>(this->textBox_bit_value3->Text);

		unsigned __int64 Value1;
		bool bHex = IsHex(sText);
		if (bHex)
			Value1 = calc_ui_hex_bits_t().Do(sText);
		else
			Value1 = calc_ui_dec_bits_t().Do(sText);
		int X = GetX(Value1);

		SetHexValue1(this->textBox_bit_value1, this->comboBox_settings_hexstyle, Value1, X);
		OutputUsed = true;
		this->textBox_bit_value2->Text = "";
		OutputUsed = false;
	}


	// bytes
	private: System::Void textBox_byte_value_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		//if (OutputUsed)
		//	return;

		// init
		String^ Output;
		std::stringstream SS;
		std::string Str;
		int idx;

		// get
		ClearData(this->textBox_byte_value, this->comboBox_settings_hexstyle);
		std::string sText = msclr::interop::marshal_as<std::string>(this->textBox_byte_value->Text);
		while ((idx = sText.find("0x")) != -1)
			sText.erase(idx, 1);

		// do
		unsigned __int64 Value1_hex = 0;
		unsigned __int64 Value1 = 0;
		signed __int64 Value2 = 0;
		long double Value3 = 0;
		unsigned __int32 Value4_hex = 0;
		unsigned __int32 Value4 = 0;
		signed __int32 Value5 = 0;
		float Value6 = 0;

		unsigned char* pValue1_hex = (unsigned char*)&Value1_hex;
		unsigned char* pValue1 = (unsigned char*)&Value1;
		unsigned char* pValue2 = (unsigned char*)&Value2;
		unsigned char* pValue3 = (unsigned char*)&Value3;
		unsigned char* pValue4_hex = (unsigned char*)&Value4_hex;
		unsigned char* pValue4 = (unsigned char*)&Value4;
		unsigned char* pValue5 = (unsigned char*)&Value5;
		unsigned char* pValue6 = (unsigned char*)&Value6;

		std::string sByte;
		idx = 0;
		for (int i = 0; i < sText.size(); i++)
		{
			if (sByte.size() > 1)
			{
				int iByte = static_cast<unsigned char>(std::atof(("0x" + sByte).c_str()));
				pValue1_hex[idx] = iByte;
				pValue1[idx] = iByte;
				pValue2[idx] = iByte;
				pValue3[idx] = iByte;
				if (idx < 4)
				{
					pValue4_hex[idx] = iByte;
					pValue4[idx] = iByte;
					pValue5[idx] = iByte;
					pValue6[idx] = iByte;
				}
				idx++;
				sByte = "";
			}

			if ((sText[i] >= 'a' && sText[i] <= 'f') || (sText[i] >= 'A' && sText[i] <= 'F') || (sText[i] >= '0' && sText[i] <= '9'))
				sByte += sText[i];
			else if (sByte.size() > 0)
			{
				int iByte = static_cast<unsigned char>(std::atof(("0x" + sByte).c_str()));
				pValue1_hex[idx] = iByte;
				pValue1[idx] = iByte;
				pValue2[idx] = iByte;
				pValue3[idx] = iByte;
				if (idx < 4)
				{
					pValue4_hex[idx] = iByte;
					pValue4[idx] = iByte;
					pValue5[idx] = iByte;
					pValue6[idx] = iByte;
				}
				idx++;
				sByte = "";
			}
		}
		if (sByte.size() > 0)
		{
			int iByte = static_cast<unsigned char>(std::atof(("0x" + sByte).c_str()));
			pValue1_hex[idx] = iByte;
			pValue1[idx] = iByte;
			pValue2[idx] = iByte;
			pValue3[idx] = iByte;
			if (idx < 4)
			{
				pValue4_hex[idx] = iByte;
				pValue4[idx] = iByte;
				pValue5[idx] = iByte;
				pValue6[idx] = iByte;
			}
			idx++;
			sByte = "";
		}

		// output
		SS.str("");
		SS << "0x" << std::hex << Value4_hex;
		Str = SS.str();
		Output = gcnew String(Str.c_str());
		OutputUsed = true;
		this->textBox_byte_value_ui_32_hex->Text = Output;
		OutputUsed = false;

		SS.str("");
		SS << Value4;
		Str = SS.str();
		Output = gcnew String(Str.c_str());
		OutputUsed = true;
		this->textBox_byte_value_ui_32->Text = Output;
		OutputUsed = false;

		SS.str("");
		SS << Value5;
		Str = SS.str();
		Output = gcnew String(Str.c_str());
		OutputUsed = true;
		this->textBox_byte_value_si_32->Text = Output;
		OutputUsed = false;

		SS.str("");
		SS << Value6;
		Str = SS.str();
		Output = gcnew String(Str.c_str());
		OutputUsed = true;
		this->textBox_byte_value_sf_32->Text = Output;
		OutputUsed = false;

		SS.str("");
		SS << "0x" << std::hex << Value1_hex;
		Str = SS.str();
		Output = gcnew String(Str.c_str());
		OutputUsed = true;
		this->textBox_byte_value_ui_64_hex->Text = Output;
		OutputUsed = false;

		SS.str("");
		SS << Value1;
		Str = SS.str();
		Output = gcnew String(Str.c_str());
		OutputUsed = true;
		this->textBox_byte_value_ui_64->Text = Output;
		OutputUsed = false;

		SS.str("");
		SS << Value2;
		Str = SS.str();
		Output = gcnew String(Str.c_str());
		OutputUsed = true;
		this->textBox_byte_value_si_64->Text = Output;
		OutputUsed = false;

		SS.str("");
		SS << Value3;
		Str = SS.str();
		Output = gcnew String(Str.c_str());
		OutputUsed = true;
		this->textBox_byte_value_sf_64->Text = Output;
		OutputUsed = false;
	}

	private: System::Void textBox_byte_value_ui_32_hex_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (OutputUsed)
			return;

		// init
		String^ Output;
		std::stringstream SS;
		std::string Str;

		// get
		ClearData(this->textBox_byte_value_ui_32_hex, this->comboBox_settings_hexstyle);
		std::string sText = msclr::interop::marshal_as<std::string>(this->textBox_byte_value_ui_32_hex->Text);

		unsigned __int32 Value;

		// int/hex
		bool bHex = IsHex(sText);
		//if (bHex)
			Value = (unsigned __int32)calc_ui_hex_t().Do(sText);
		//else
		//	Value = (unsigned __int32)calc_ui_dec_t().Do(sText);

		SS.str("");
		for (int i = 0; i < 4; i++)
		{
			unsigned char* l = (unsigned char*)&Value;

			SS << std::setfill('0') << std::setw(2) << std::hex << (int)l[i] << " ";
		}

		Str = SS.str();
		Output = gcnew String(Str.c_str());
		OutputUsed = true;
		this->textBox_byte_value->Text = Output;
		OutputUsed = false;
	}
	private: System::Void textBox_byte_value_ui_32_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		if (OutputUsed)
			return;

		// init
		String^ Output;
		std::stringstream SS;
		std::string Str;

		// get
		ClearData(this->textBox_byte_value_ui_32, this->comboBox_settings_hexstyle);
		std::string sText = msclr::interop::marshal_as<std::string>(this->textBox_byte_value_ui_32->Text);

		unsigned __int32 Value;

		// int/hex
		//bool bHex = IsHex(sText);
		//if (bHex)
		//	Value = (unsigned __int32)calc_ui_hex_t().Do(sText);
		//else
			Value = (unsigned __int32)calc_ui_dec_t().Do(sText);

		SS.str("");
		for (int i = 0; i < 4; i++)
		{
			unsigned char* l = (unsigned char*)&Value;

			SS << std::setfill('0') << std::setw(2) << std::hex << (int)l[i] << " ";
		}

		Str = SS.str();
		Output = gcnew String(Str.c_str());
		OutputUsed = true;
		this->textBox_byte_value->Text = Output;
		OutputUsed = false;
	}
	private: System::Void textBox_byte_value_si_32_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		if (OutputUsed)
			return;

		// init
		String^ Output;
		std::stringstream SS;
		std::string Str;

		// get
		ClearData(this->textBox_byte_value_si_32, this->comboBox_settings_hexstyle);
		std::string sText = msclr::interop::marshal_as<std::string>(this->textBox_byte_value_si_32->Text);

		signed __int32 Value;

		// int/hex
		//bool bHex = IsHex(sText);
		//if (bHex)
		//	Value = (signed __int32)calc_si_hex_t().Do(sText);
		//else
			Value = (signed __int32)calc_si_dec_t().Do(sText);

		SS.str("");
		for (int i = 0; i < 4; i++)
		{
			unsigned char* l = (unsigned char*)&Value;

			SS << std::setfill('0') << std::setw(2) << std::hex << (int)l[i] << " ";
		}

		Str = SS.str();
		Output = gcnew String(Str.c_str());
		OutputUsed = true;
		this->textBox_byte_value->Text = Output;
		OutputUsed = false;
	}
	private: System::Void textBox_byte_value_sf_32_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		if (OutputUsed)
			return;

		// init
		String^ Output;
		std::stringstream SS;
		std::string Str;

		// get
		ClearData(this->textBox_byte_value_sf_32, this->comboBox_settings_hexstyle);
		std::string sText = msclr::interop::marshal_as<std::string>(this->textBox_byte_value_sf_32->Text);

		float Value;

		// int/hex
		//bool bHex = IsHex(sText);
		//if (bHex)
		//	Value = (float)calc_sf_hex_t().Do(sText);
		//else
			Value = (float)calc_sf_dec_t().Do(sText);

		SS.str("");
		for (int i = 0; i < 4; i++)
		{
			unsigned char* l = (unsigned char*)&Value;

			SS << std::setfill('0') << std::setw(2) << std::hex << (int)l[i] << " ";
		}

		Str = SS.str();
		Output = gcnew String(Str.c_str());
		OutputUsed = true;
		this->textBox_byte_value->Text = Output;
		OutputUsed = false;
	}

	private: System::Void textBox_byte_value_ui_64_hex_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (OutputUsed)
			return;

		// init
		String^ Output;
		std::stringstream SS;
		std::string Str;

		// get
		ClearData(this->textBox_byte_value_ui_64_hex, this->comboBox_settings_hexstyle);
		std::string sText = msclr::interop::marshal_as<std::string>(this->textBox_byte_value_ui_64_hex->Text);

		unsigned __int64 Value;

		// int/hex
		//bool bHex = IsHex(sText);
		//if (bHex)
			Value = (unsigned __int64)calc_ui_hex_t().Do(sText);
		//else
		//	Value = (unsigned __int64)calc_ui_dec_t().Do(sText);

		SS.str("");
		for (int i = 0; i < 8; i++)
		{
			unsigned char* l = (unsigned char*)&Value;

			SS << std::setfill('0') << std::setw(2) << std::hex << (int)l[i] << " ";
		}

		Str = SS.str();
		Output = gcnew String(Str.c_str());
		OutputUsed = true;
		this->textBox_byte_value->Text = Output;
		OutputUsed = false;
	}
	private: System::Void textBox_byte_value_ui_64_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		if (OutputUsed)
			return;

		// init
		String^ Output;
		std::stringstream SS;
		std::string Str;

		// get
		ClearData(this->textBox_byte_value_ui_64, this->comboBox_settings_hexstyle);
		std::string sText = msclr::interop::marshal_as<std::string>(this->textBox_byte_value_ui_64->Text);

		unsigned __int64 Value;

		// int/hex
		//bool bHex = IsHex(sText);
		//if (bHex)
		//	Value = (unsigned __int64)calc_ui_hex_t().Do(sText);
		//else
			Value = (unsigned __int64)calc_ui_dec_t().Do(sText);

		SS.str("");
		for (int i = 0; i < 8; i++)
		{
			unsigned char* l = (unsigned char*)&Value;

			SS << std::setfill('0') << std::setw(2) << std::hex << (int)l[i] << " ";
		}

		Str = SS.str();
		Output = gcnew String(Str.c_str());
		OutputUsed = true;
		this->textBox_byte_value->Text = Output;
		OutputUsed = false;
	}
	private: System::Void textBox_byte_value_si_64_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		if (OutputUsed)
			return;

		// init
		String^ Output;
		std::stringstream SS;
		std::string Str;

		// get
		ClearData(this->textBox_byte_value_si_64, this->comboBox_settings_hexstyle);
		std::string sText = msclr::interop::marshal_as<std::string>(this->textBox_byte_value_si_64->Text);

		signed __int64 Value;

		// int/hex
		//bool bHex = IsHex(sText);
		//if (bHex)
		//	Value = (signed __int64)calc_si_hex_t().Do(sText);
		//else
			Value = (signed __int64)calc_si_dec_t().Do(sText);

		SS.str("");
		for (int i = 0; i < 8; i++)
		{
			unsigned char* l = (unsigned char*)&Value;

			SS << std::setfill('0') << std::setw(2) << std::hex << (int)l[i] << " ";
		}

		Str = SS.str();
		Output = gcnew String(Str.c_str());
		OutputUsed = true;
		this->textBox_byte_value->Text = Output;
		OutputUsed = false;
	}
	private: System::Void textBox_byte_value_sf_64_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		if (OutputUsed)
			return;

		// init
		String^ Output;
		std::stringstream SS;
		std::string Str;

		// get
		ClearData(this->textBox_byte_value_sf_64, this->comboBox_settings_hexstyle);
		std::string sText = msclr::interop::marshal_as<std::string>(this->textBox_byte_value_sf_64->Text);

		long double Value;

		// int/hex
		//bool bHex = IsHex(sText);
		//if (bHex)
		//	Value = (long double)calc_sf_hex_t().Do(sText);
		//else
			Value = (long double)calc_sf_dec_t().Do(sText);

		SS.str("");
		for (int i = 0; i < 8; i++)
		{
			unsigned char* l = (unsigned char*)&Value;

			SS << std::setfill('0') << std::setw(2) << std::hex << (int)l[i] << " ";
		}

		Str = SS.str();
		Output = gcnew String(Str.c_str());
		OutputUsed = true;
		this->textBox_byte_value->Text = Output;
		OutputUsed = false;
	}


	// Pattern helper
	private: System::Void textBox_idap_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (OutputUsed)
			return;

		String^ Output;
		std::stringstream SS;
		std::string Str;
		int Idx;

		// Get ida pattern
		ClearData(this->textBox_idap, this->comboBox_settings_hexstyle);
		std::string sIdaP = msclr::interop::marshal_as<std::string>(this->textBox_idap->Text);

		std::string sIdaP2;
		for (int i = 0; i < sIdaP.size(); i++)
		{
			if (sIdaP[i] >= '0' && sIdaP[i] <= '9')
				sIdaP2 += sIdaP[i];
			else if (sIdaP[i] >= 'A' && sIdaP[i] <= 'F')
				sIdaP2 += sIdaP[i];
			else if (sIdaP[i] >= 'a' && sIdaP[i] <= 'f')
				sIdaP2 += sIdaP[i];
			else if (sIdaP[i] == '?' || sIdaP[i] == ' ')
				sIdaP2 += sIdaP[i];
		}

		while (sIdaP2.size() && (Idx = sIdaP2.find("  ")) != -1)
			sIdaP2.erase(Idx, 1);
		while (sIdaP2.size() && (Idx = sIdaP2.find("??")) != -1)
			sIdaP2.erase(Idx, 1);
		while (sIdaP2.size() && sIdaP2[0] == ' ')
			sIdaP2.erase(0, 1);
		if (!GetAsyncKeyState(VK_SPACE) && !GetAsyncKeyState(VK_DELETE) && !GetAsyncKeyState(VK_BACK))
		{
			while (sIdaP2.size() && sIdaP2[sIdaP2.size() - 1] == ' ')
				sIdaP2.erase(sIdaP2.size() - 1, 1);
		}

		// Make code pattern/mask
		std::string sCodeP = "";
		std::string sCodeM = "";
		int BytesCount = 0;
		for (int i = 0; i < sIdaP2.size(); i++)
		{
			if (i == sIdaP2.size() - 1 && sIdaP2[i] == ' ')
				break;

			if (i == 0)
				sCodeP += "\\x";

			if (sIdaP2[i] == ' ')
			{
				sCodeP += "\\x";
				BytesCount++;
			}
			else if (sIdaP2[i] == '?')
			{
				sCodeP += "00";
				if (i == 0 || sIdaP2[i - 1] == ' ')
					sCodeM += "?";
			}
			else
			{
				sCodeP += sIdaP2[i];
				if (i == 0 || sIdaP2[i - 1] == ' ')
					sCodeM += "x";
			}

		}

		// Make bytes
		std::string sBytes = "";
		sBytes = sCodeP;
		while (sBytes.size() && (Idx = sBytes.find("\\")) != -1) {
			sBytes.erase(Idx, 1);
			if (Idx != 0) sBytes.insert(Idx, ", 0");
			else sBytes.insert(Idx, "0");
		}

		// Output
		OutputUsed = true;
		auto BackupSelectionStart = this->textBox_idap->SelectionStart - ((int)(sIdaP.size() - sIdaP2.size()));
		if (BackupSelectionStart < 0) BackupSelectionStart = 0;

		// idap
		Output = gcnew String(sIdaP2.c_str());
		this->textBox_idap->Text = Output;

		// code
		Output = gcnew String(sCodeP.c_str());
		this->textBox_codep->Text = Output;

		// codem
		Output = gcnew String(sCodeM.c_str());
		this->textBox_codem->Text = Output;

		// bytes
		Output = gcnew String(sBytes.c_str());
		this->textBox_bytes->Text = Output;

		// size
		Output = gcnew String(("size: " + std::to_string(BytesCount + 1)).c_str());
		this->label_size->Text = Output;


		this->textBox_idap->SelectionStart = BackupSelectionStart;
		OutputUsed = false;
	}

	private: System::Void textBox_bytes_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		if (OutputUsed)
			return;

		String^ Output;
		int Idx;

		// Get
		ClearData(this->textBox_bytes, this->comboBox_settings_hexstyle);
		std::string sBytes = msclr::interop::marshal_as<std::string>(this->textBox_bytes->Text);

		// Build 1
		std::string sIdaP = sBytes;
		while (sIdaP.size() && (Idx = sIdaP.find(" ")) != -1)
			sIdaP.erase(Idx, 1);
		while (sIdaP.size() && (Idx = sIdaP.find("0x")) != -1)
			sIdaP.erase(Idx, 2);
		while (sIdaP.size() && (Idx = sIdaP.find(",")) != -1) {
			sIdaP.erase(Idx, 1);
			sIdaP.insert(Idx, " ");
		}

		// Make code pattern/mask
		std::string sCodeP = "";
		std::string sCodeM = "";
		int BytesCount = 0;
		for (int i = 0; i < sIdaP.size(); i++)
		{
			if (i == sIdaP.size() - 1 && sIdaP[i] == ' ')
				break;

			if (i == 0)
				sCodeP += "\\x";

			if (sIdaP[i] == ' ')
			{
				sCodeP += "\\x";
				BytesCount++;
			}
			else if (sIdaP[i] == '?')
			{
				sCodeP += "00";
				if (i == 0 || sIdaP[i - 1] == ' ')
					sCodeM += "?";
			}
			else
			{
				sCodeP += sIdaP[i];
				if (i == 0 || sIdaP[i - 1] == ' ')
					sCodeM += "x";
			}

		}

		// Output
		OutputUsed = true;

		// idap
		Output = gcnew String(sIdaP.c_str());
		this->textBox_idap->Text = Output;

		// codep
		Output = gcnew String(sCodeP.c_str());
		this->textBox_codep->Text = Output;

		// codem
		Output = gcnew String(sCodeM.c_str());
		this->textBox_codem->Text = Output;

		// bytes
		Output = gcnew String(sBytes.c_str());
		this->textBox_bytes->Text = Output;

		// size
		Output = gcnew String(("size: " + std::to_string(BytesCount + 1)).c_str());
		this->label_size->Text = Output;

		OutputUsed = false;
	}

	private: System::Void textBox_codep_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (OutputUsed)
			return;

		String^ Output;
		std::stringstream SS;
		std::string Str;
		int Idx;

		// Get ida pattern
		ClearData(this->textBox_codep, this->comboBox_settings_hexstyle);
		std::string sCodeP = msclr::interop::marshal_as<std::string>(this->textBox_codep->Text);
		ClearData(this->textBox_codem, this->comboBox_settings_hexstyle);
		std::string sCodeM = msclr::interop::marshal_as<std::string>(this->textBox_codem->Text);

		std::string sCodeP2;
		for (int i = 0; i < sCodeP.size(); i++)
		{
			if (sCodeP[i] >= '0' && sCodeP[i] <= '9')
				sCodeP2 += sCodeP[i];
			else if (sCodeP[i] >= 'A' && sCodeP[i] <= 'F')
				sCodeP2 += sCodeP[i];
			else if (sCodeP[i] >= 'a' && sCodeP[i] <= 'f')
				sCodeP2 += sCodeP[i];
			else if (sCodeP[i] == 'X' || sCodeP[i] == 'x')
				sCodeP2 += 'x';
			else if (sCodeP[i] == '\\')
				sCodeP2 += sCodeP[i];
		}

		if (sCodeP2.size() >= 2 && sCodeP2[0] != '\\' && sCodeP2[0] != 'x')
			sCodeP2 = 'x' + sCodeP2;
		while (sCodeP2.size() && (Idx = sCodeP2.find("0x")) != -1)
			sCodeP2.erase(Idx, 1);
		while (sCodeP2.size() && (Idx = sCodeP2.find("\\\\")) != -1)
			sCodeP2.erase(Idx, 1);
		while (sCodeP2.size() && (Idx = sCodeP2.find("XX")) != -1)
			sCodeP2.erase(Idx, 1);
		while (sCodeP2.size() && (Idx = sCodeP2.find("xx")) != -1)
			sCodeP2.erase(Idx, 1);

		if (!GetAsyncKeyState(0x58) && !GetAsyncKeyState(VK_OEM_5) && !GetAsyncKeyState(VK_DELETE) && !GetAsyncKeyState(VK_BACK))
		{
			while (sCodeP2.size() && sCodeP2[sCodeP2.size() - 1] == 'x' || sCodeP2.size() && sCodeP2[sCodeP2.size() - 1] == '\\')
				sCodeP2.erase(sCodeP2.size() - 1, 1);
		}

		std::string sCodeP3;
		for (int i = 0; i < sCodeP2.size(); i++)
		{
			if (i == 0)
			{
				if (sCodeP2[0] == 'x')
					sCodeP3 += "\\x";
				else
					sCodeP3 += sCodeP2[i];

				continue;
			}

			if (sCodeP2[i] == 'x' && sCodeP2[i - 1] != '\\')
				sCodeP3 += "\\x";
			else
				sCodeP3 += sCodeP2[i];
		}

		// Make ida pattern
		std::string IdaP;
		int iMaskPos = 0;
		bool NeedToBuildMask = false;
		sCodeM = "";
		for (int i = 0; i < sCodeP3.size(); i++)
		{
			if (i == sCodeP3.size() - 1 && sCodeP3[i] == 'x')
				break;

			if (sCodeP3[i] == '\\')
				continue;

			if (sCodeP3[i] == 'x')
			{
				if (i > 2)
				{
					IdaP += " ";
					iMaskPos++;
				}
			}
			else
			{
				if (iMaskPos < sCodeM.size())
				{
					if (sCodeM[iMaskPos] == '?')
						IdaP += '?';
					else if (sCodeM[iMaskPos] == 'x')
						IdaP += sCodeP3[i];

					if (IdaP.size() >= 2 && IdaP[IdaP.size() - 1] == '?' && IdaP[IdaP.size() - 2] == '?')
					{
						IdaP.erase(IdaP.size() - 2, 2);
						IdaP += '?';
					}
				}
				else
				{
					NeedToBuildMask = true;
					IdaP += sCodeP3[i];

					if (IdaP.size() >= 2 && IdaP[IdaP.size() - 1] == '0' && IdaP[IdaP.size() - 2] == '0')
					{
						IdaP.erase(IdaP.size() - 2, 2);
						IdaP += '?';
					}
					if (IdaP.size() >= 2 && IdaP[IdaP.size() - 1] == '0' && IdaP[IdaP.size() - 2] == ' ' || IdaP.size() >= 2 && IdaP[IdaP.size() - 1] == '0' && IdaP[IdaP.size() - 2] == '?')
					{
						IdaP.erase(IdaP.size() - 1, 1);
						IdaP += '?';
					}
					if (IdaP.size() >= 2 && IdaP[IdaP.size() - 1] != '?' && IdaP[IdaP.size() - 2] == '?')
					{
						IdaP[IdaP.size() - 2] = '0';
					}
					if (IdaP.size() >= 2 && IdaP[IdaP.size() - 1] == '?' && IdaP[IdaP.size() - 2] == '?')
					{
						IdaP.erase(IdaP.size() - 2, 2);
						IdaP += '?';
					}
				}
			}
		}

		// Build mask
		for (int i = 0; i < IdaP.size(); i++)
		{
			if (i == IdaP.size() - 1 && IdaP[i] == ' ')
				break;

			if (IdaP[i] == '?')
			{
				if (i == 0 || IdaP[i - 1] == ' ')
					sCodeM += "?";
			}
			else
			{
				if (i == 0 || IdaP[i - 1] == ' ')
					sCodeM += "x";
			}
		}

		// Make bytes
		std::string sBytes = "";
		sBytes = sCodeP3;
		while (sBytes.size() && (Idx = sBytes.find("\\")) != -1) {
			sBytes.erase(Idx, 1);
			if (Idx != 0) sBytes.insert(Idx, ", 0");
			else sBytes.insert(Idx, "0");
		}

		// Output
		OutputUsed = true;
		auto BackupSelectionStart = this->textBox_codep->SelectionStart - ((int)(sCodeP.size() - sCodeP3.size()));
		if (BackupSelectionStart < 0) BackupSelectionStart = 0;

		// idap
		Output = gcnew String(IdaP.c_str());
		this->textBox_idap->Text = Output;

		// codep
		Output = gcnew String(sCodeP3.c_str());
		this->textBox_codep->Text = Output;

		// codem
		Output = gcnew String(sCodeM.c_str());
		this->textBox_codem->Text = Output;

		// bytes
		Output = gcnew String(sBytes.c_str());
		this->textBox_bytes->Text = Output;

		// size
		Output = gcnew String(("size: " + std::to_string(iMaskPos + 1)).c_str());
		this->label_size->Text = Output;

		this->textBox_codep->SelectionStart = BackupSelectionStart;
		OutputUsed = false;
	}

	private: System::Void textBox_codem_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (OutputUsed)
			return;

		String^ Output;
		std::stringstream SS;
		std::string Str;
		int Idx;

		// Get ida pattern
		ClearData(this->textBox_codep, this->comboBox_settings_hexstyle);
		std::string sCodeP = msclr::interop::marshal_as<std::string>(this->textBox_codep->Text);
		ClearData(this->textBox_codem, this->comboBox_settings_hexstyle);
		std::string sCodeM = msclr::interop::marshal_as<std::string>(this->textBox_codem->Text);

		std::string sCodeM2;
		for (int i = 0; i < sCodeM.size(); i++)
		{
			if (sCodeM[i] == 'x' || sCodeM[i] == '?')
				sCodeM2 += sCodeM[i];
		}

		// Make ida pattern
		std::string IdaP;
		int iMaskPos = 0;
		for (int i = 0; i < sCodeP.size(); i++)
		{
			if (i == sCodeP.size() - 1 && sCodeP[i] == 'x')
				break;

			if (sCodeP[i] == '\\')
				continue;

			if (sCodeP[i] == 'x')
			{
				if (i > 2)
				{
					IdaP += " ";
					iMaskPos++;
				}
			}
			else
			{
				if (iMaskPos < sCodeM2.size())
				{
					if (sCodeM2[iMaskPos] == '?')
						IdaP += '?';
					else if (sCodeM2[iMaskPos] == 'x')
						IdaP += sCodeP[i];

					if (IdaP.size() >= 2 && IdaP[IdaP.size() - 1] == '?' && IdaP[IdaP.size() - 2] == '?')
					{
						IdaP.erase(IdaP.size() - 2, 2);
						IdaP += '?';
					}
				}
				else
				{
					IdaP += sCodeP[i];

					if (IdaP.size() >= 2 && IdaP[IdaP.size() - 1] == '0' && IdaP[IdaP.size() - 2] == '0')
					{
						IdaP.erase(IdaP.size() - 2, 2);
						IdaP += '?';
					}
					if (IdaP.size() >= 2 && IdaP[IdaP.size() - 1] == '0' && IdaP[IdaP.size() - 2] == ' ' || IdaP.size() >= 2 && IdaP[IdaP.size() - 1] == '0' && IdaP[IdaP.size() - 2] == '?')
					{
						IdaP.erase(IdaP.size() - 1, 1);
						IdaP += '?';
					}
					if (IdaP.size() >= 2 && IdaP[IdaP.size() - 1] != '?' && IdaP[IdaP.size() - 2] == '?')
					{
						IdaP[IdaP.size() - 2] = '0';
					}
					if (IdaP.size() >= 2 && IdaP[IdaP.size() - 1] == '?' && IdaP[IdaP.size() - 2] == '?')
					{
						IdaP.erase(IdaP.size() - 2, 2);
						IdaP += '?';
					}
				}
			}
		}

		// Output
		OutputUsed = true;
		auto BackupSelectionStart = this->textBox_codem->SelectionStart - ((int)(sCodeM.size() - sCodeM2.size()));
		if (BackupSelectionStart < 0) BackupSelectionStart = 0;

		// idap
		Output = gcnew String(IdaP.c_str());
		this->textBox_idap->Text = Output;

		// codep
		Output = gcnew String(sCodeP.c_str());
		this->textBox_codep->Text = Output;

		// codem
		Output = gcnew String(sCodeM2.c_str());
		this->textBox_codem->Text = Output;

		// size
		Output = gcnew String(("size: " + std::to_string(sCodeM2.size())).c_str());
		this->label_size->Text = Output;

		this->textBox_codem->SelectionStart = BackupSelectionStart;
		OutputUsed = false;
	}


	// Register helper
	private: System::Void textBox_rvalue_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		String^ Output;
		int Idx;

		// Get
		std::string sText = msclr::interop::marshal_as<std::string>(this->textBox_rvalue->Text);

		std::transform(sText.begin(), sText.end(), sText.begin(), ::tolower);
		Output = gcnew String(sText.c_str());
		this->textBox_lc->Text = Output;

		std::transform(sText.begin(), sText.end(), sText.begin(), ::toupper);
		while ((Idx = sText.find("0X")) != -1)
			sText[Idx + 1] = 'x';
		while ((Idx = sText.find("\\X")) != -1)
			sText[Idx + 1] = 'x';
		Output = gcnew String(sText.c_str());
		this->textBox_uc->Text = Output;
	}


	// String to bytes
	private: System::Void textBox_str_for_byte_value_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		if (OutputUsed)
			return;

		String^ Output;
		std::stringstream SS;

		// Get
		std::string sText = msclr::interop::marshal_as<std::string>(this->textBox_str_for_byte_value->Text);

		// Do
		std::string sBytes = "";
		for (int i = 0; i < sText.size(); i++)
		{
			SS.str("");
			SS << std::setfill('0') << std::setw(2) << std::hex << (int)sText[i] << " ";
			sBytes += SS.str();
		}

		// Out
		OutputUsed = true;

		Output = gcnew String(sBytes.c_str());
		this->textBox_byte_from_str_value->Text = Output;
		ClearData(this->textBox_byte_from_str_value, this->comboBox_settings_hexstyle);

		OutputUsed = false;
	}

	
	private: System::Void textBox_byte_from_str_value_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		if (OutputUsed)
			return;

		String^ Output;
		int Idx;

		// Get
		ClearData(this->textBox_byte_from_str_value, this->comboBox_settings_hexstyle);
		std::string sText = msclr::interop::marshal_as<std::string>(this->textBox_byte_from_str_value->Text);

		// Do
		std::string sStr = "";
		for (int i = 0; i < sText.size(); i++)
		{
			std::string sByte = "";
			while (sText[i] != ' ' && i < sText.size())
			{
				sByte += sText[i];
				i++;
			}

			if (sByte.size() == 2)
				sStr += (char)strtol(sByte.c_str(), NULL, 16);
		}

		// Out
		OutputUsed = true;

		Output = gcnew String(sStr.c_str());
		this->textBox_str_for_byte_value->Text = Output;

		OutputUsed = false;
	}
	
	private: System::Void richTextBox_notepad_SelectionChanged(System::Object^ sender, System::EventArgs^ e)
	{
		// Idiotic fix of autowordselection bug
		if (!this->richTextBox_notepad->AutoWordSelection) {
			this->richTextBox_notepad->AutoWordSelection = true;
			this->richTextBox_notepad->AutoWordSelection = false;
		}
	}

	private: System::Void richTextBox_notepad_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		// Idiotic fix of text formating
		this->richTextBox_notepad->Font = this->richTextBox_notepad->DefaultFont;
		this->richTextBox_notepad->ResetFont();
	}

};
}

