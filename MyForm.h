#pragma once

namespace A_Calci {

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
			//
			//TODO: Add the constructor code here
			//
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
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ btndigit1;
	private: System::Windows::Forms::Button^ btndigit2;
	private: System::Windows::Forms::Button^ btndigit3;



	private: System::Windows::Forms::Button^ btndigit4;
	private: System::Windows::Forms::Button^ btndigit5;
	private: System::Windows::Forms::Button^ btndigit6;



	private: System::Windows::Forms::Button^ btndigit7;
	private: System::Windows::Forms::Button^ btndigit8;
	private: System::Windows::Forms::Button^ btndigit9;



	private: System::Windows::Forms::Button^ btnsub;

	private: System::Windows::Forms::Button^ btnmulti;

	private: System::Windows::Forms::Button^ btndivision;

	private: System::Windows::Forms::Button^ btnequals;
	private: System::Windows::Forms::Button^ btndigit0;


	private: System::Windows::Forms::Button^ btnclr;

	private: System::Windows::Forms::Button^ btnadd;
	private: System::Windows::Forms::Button^ btndecimal;


	private: System::Windows::Forms::Button^ btndigit00;

	private: System::Windows::Forms::Button^ btnspace;
	private: System::Windows::Forms::Button^ btnCE;



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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->btndigit1 = (gcnew System::Windows::Forms::Button());
			this->btndigit2 = (gcnew System::Windows::Forms::Button());
			this->btndigit3 = (gcnew System::Windows::Forms::Button());
			this->btndigit4 = (gcnew System::Windows::Forms::Button());
			this->btndigit5 = (gcnew System::Windows::Forms::Button());
			this->btndigit6 = (gcnew System::Windows::Forms::Button());
			this->btndigit7 = (gcnew System::Windows::Forms::Button());
			this->btndigit8 = (gcnew System::Windows::Forms::Button());
			this->btndigit9 = (gcnew System::Windows::Forms::Button());
			this->btnsub = (gcnew System::Windows::Forms::Button());
			this->btnmulti = (gcnew System::Windows::Forms::Button());
			this->btndivision = (gcnew System::Windows::Forms::Button());
			this->btnequals = (gcnew System::Windows::Forms::Button());
			this->btndigit0 = (gcnew System::Windows::Forms::Button());
			this->btnclr = (gcnew System::Windows::Forms::Button());
			this->btnadd = (gcnew System::Windows::Forms::Button());
			this->btndecimal = (gcnew System::Windows::Forms::Button());
			this->btndigit00 = (gcnew System::Windows::Forms::Button());
			this->btnspace = (gcnew System::Windows::Forms::Button());
			this->btnCE = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Location = System::Drawing::Point(12, 50);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(279, 74);
			this->panel1->TabIndex = 0;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(12, 14);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(252, 46);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"0";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// btndigit1
			// 
			this->btndigit1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btndigit1->Location = System::Drawing::Point(12, 284);
			this->btndigit1->Name = L"btndigit1";
			this->btndigit1->Size = System::Drawing::Size(49, 51);
			this->btndigit1->TabIndex = 1;
			this->btndigit1->Text = L"1";
			this->btndigit1->UseVisualStyleBackColor = true;
			this->btndigit1->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btndigit2
			// 
			this->btndigit2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btndigit2->Location = System::Drawing::Point(87, 284);
			this->btndigit2->Name = L"btndigit2";
			this->btndigit2->Size = System::Drawing::Size(49, 51);
			this->btndigit2->TabIndex = 2;
			this->btndigit2->Text = L"2";
			this->btndigit2->UseVisualStyleBackColor = true;
			this->btndigit2->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btndigit3
			// 
			this->btndigit3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btndigit3->Location = System::Drawing::Point(166, 284);
			this->btndigit3->Name = L"btndigit3";
			this->btndigit3->Size = System::Drawing::Size(49, 51);
			this->btndigit3->TabIndex = 3;
			this->btndigit3->Text = L"3";
			this->btndigit3->UseVisualStyleBackColor = true;
			this->btndigit3->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btndigit4
			// 
			this->btndigit4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btndigit4->Location = System::Drawing::Point(12, 217);
			this->btndigit4->Name = L"btndigit4";
			this->btndigit4->Size = System::Drawing::Size(49, 51);
			this->btndigit4->TabIndex = 4;
			this->btndigit4->Text = L"4";
			this->btndigit4->UseVisualStyleBackColor = true;
			this->btndigit4->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btndigit5
			// 
			this->btndigit5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btndigit5->Location = System::Drawing::Point(87, 217);
			this->btndigit5->Name = L"btndigit5";
			this->btndigit5->Size = System::Drawing::Size(49, 51);
			this->btndigit5->TabIndex = 5;
			this->btndigit5->Text = L"5";
			this->btndigit5->UseVisualStyleBackColor = true;
			this->btndigit5->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btndigit6
			// 
			this->btndigit6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btndigit6->Location = System::Drawing::Point(166, 217);
			this->btndigit6->Name = L"btndigit6";
			this->btndigit6->Size = System::Drawing::Size(49, 51);
			this->btndigit6->TabIndex = 6;
			this->btndigit6->Text = L"6";
			this->btndigit6->UseVisualStyleBackColor = true;
			this->btndigit6->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btndigit7
			// 
			this->btndigit7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btndigit7->Location = System::Drawing::Point(12, 144);
			this->btndigit7->Name = L"btndigit7";
			this->btndigit7->Size = System::Drawing::Size(49, 51);
			this->btndigit7->TabIndex = 7;
			this->btndigit7->Text = L"7";
			this->btndigit7->UseVisualStyleBackColor = true;
			this->btndigit7->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btndigit8
			// 
			this->btndigit8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btndigit8->Location = System::Drawing::Point(87, 144);
			this->btndigit8->Name = L"btndigit8";
			this->btndigit8->Size = System::Drawing::Size(49, 51);
			this->btndigit8->TabIndex = 8;
			this->btndigit8->Text = L"8";
			this->btndigit8->UseVisualStyleBackColor = true;
			this->btndigit8->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btndigit9
			// 
			this->btndigit9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btndigit9->Location = System::Drawing::Point(166, 144);
			this->btndigit9->Name = L"btndigit9";
			this->btndigit9->Size = System::Drawing::Size(49, 51);
			this->btndigit9->TabIndex = 9;
			this->btndigit9->Text = L"9";
			this->btndigit9->UseVisualStyleBackColor = true;
			this->btndigit9->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnsub
			// 
			this->btnsub->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnsub->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnsub->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnsub->Location = System::Drawing::Point(242, 284);
			this->btnsub->Name = L"btnsub";
			this->btnsub->Size = System::Drawing::Size(49, 51);
			this->btnsub->TabIndex = 10;
			this->btnsub->Text = L"-";
			this->btnsub->UseVisualStyleBackColor = false;
			this->btnsub->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btnmulti
			// 
			this->btnmulti->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnmulti->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnmulti->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnmulti->Location = System::Drawing::Point(242, 354);
			this->btnmulti->Name = L"btnmulti";
			this->btnmulti->Size = System::Drawing::Size(49, 51);
			this->btnmulti->TabIndex = 11;
			this->btnmulti->Text = L"X";
			this->btnmulti->UseVisualStyleBackColor = false;
			this->btnmulti->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btndivision
			// 
			this->btndivision->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btndivision->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btndivision->ForeColor = System::Drawing::Color::White;
			this->btndivision->Location = System::Drawing::Point(242, 423);
			this->btndivision->Name = L"btndivision";
			this->btndivision->Size = System::Drawing::Size(49, 51);
			this->btndivision->TabIndex = 12;
			this->btndivision->Text = L"/";
			this->btndivision->UseVisualStyleBackColor = false;
			this->btndivision->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btnequals
			// 
			this->btnequals->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnequals->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnequals->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnequals->Location = System::Drawing::Point(166, 423);
			this->btnequals->Name = L"btnequals";
			this->btnequals->Size = System::Drawing::Size(49, 51);
			this->btnequals->TabIndex = 13;
			this->btnequals->Text = L"=";
			this->btnequals->UseVisualStyleBackColor = false;
			this->btnequals->Click += gcnew System::EventHandler(this, &MyForm::btnequals_Click);
			// 
			// btndigit0
			// 
			this->btndigit0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btndigit0->Location = System::Drawing::Point(12, 354);
			this->btndigit0->Name = L"btndigit0";
			this->btndigit0->Size = System::Drawing::Size(49, 51);
			this->btndigit0->TabIndex = 14;
			this->btndigit0->Text = L"0";
			this->btndigit0->UseVisualStyleBackColor = true;
			this->btndigit0->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnclr
			// 
			this->btnclr->BackColor = System::Drawing::Color::Red;
			this->btnclr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnclr->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnclr->Location = System::Drawing::Point(242, 144);
			this->btnclr->Name = L"btnclr";
			this->btnclr->Size = System::Drawing::Size(49, 51);
			this->btnclr->TabIndex = 15;
			this->btnclr->Text = L"C";
			this->btnclr->UseVisualStyleBackColor = false;
			this->btnclr->Click += gcnew System::EventHandler(this, &MyForm::btnclr_Click);
			// 
			// btnadd
			// 
			this->btnadd->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnadd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnadd->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnadd->Location = System::Drawing::Point(242, 217);
			this->btnadd->Name = L"btnadd";
			this->btnadd->Size = System::Drawing::Size(49, 51);
			this->btnadd->TabIndex = 16;
			this->btnadd->Text = L"+";
			this->btnadd->UseVisualStyleBackColor = false;
			this->btnadd->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btndecimal
			// 
			this->btndecimal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btndecimal->Location = System::Drawing::Point(166, 355);
			this->btndecimal->Name = L"btndecimal";
			this->btndecimal->Size = System::Drawing::Size(49, 51);
			this->btndecimal->TabIndex = 17;
			this->btndecimal->Text = L".";
			this->btndecimal->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btndecimal->UseVisualStyleBackColor = true;
			this->btndecimal->Click += gcnew System::EventHandler(this, &MyForm::btndecimal_Click);
			// 
			// btndigit00
			// 
			this->btndigit00->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btndigit00->Location = System::Drawing::Point(87, 355);
			this->btndigit00->Name = L"btndigit00";
			this->btndigit00->Size = System::Drawing::Size(49, 51);
			this->btndigit00->TabIndex = 18;
			this->btndigit00->Text = L"00";
			this->btndigit00->UseVisualStyleBackColor = true;
			this->btndigit00->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnspace
			// 
			this->btnspace->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnspace->Font = (gcnew System::Drawing::Font(L"Wingdings", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->btnspace->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnspace->Location = System::Drawing::Point(12, 423);
			this->btnspace->Name = L"btnspace";
			this->btnspace->Size = System::Drawing::Size(49, 51);
			this->btnspace->TabIndex = 19;
			this->btnspace->Text = L"Õ\r\n";
			this->btnspace->UseVisualStyleBackColor = false;
			this->btnspace->Click += gcnew System::EventHandler(this, &MyForm::btnspace_Click);
			// 
			// btnCE
			// 
			this->btnCE->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnCE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCE->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnCE->Location = System::Drawing::Point(87, 424);
			this->btnCE->Name = L"btnCE";
			this->btnCE->Size = System::Drawing::Size(49, 51);
			this->btnCE->TabIndex = 20;
			this->btnCE->Text = L"CE";
			this->btnCE->UseVisualStyleBackColor = false;
			this->btnCE->Click += gcnew System::EventHandler(this, &MyForm::btnCE_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(307, 498);
			this->Controls->Add(this->btnCE);
			this->Controls->Add(this->btnspace);
			this->Controls->Add(this->btndigit00);
			this->Controls->Add(this->btndecimal);
			this->Controls->Add(this->btnadd);
			this->Controls->Add(this->btnclr);
			this->Controls->Add(this->btndigit0);
			this->Controls->Add(this->btnequals);
			this->Controls->Add(this->btndivision);
			this->Controls->Add(this->btnmulti);
			this->Controls->Add(this->btnsub);
			this->Controls->Add(this->btndigit9);
			this->Controls->Add(this->btndigit8);
			this->Controls->Add(this->btndigit7);
			this->Controls->Add(this->btndigit6);
			this->Controls->Add(this->btndigit5);
			this->Controls->Add(this->btndigit4);
			this->Controls->Add(this->btndigit3);
			this->Controls->Add(this->btndigit2);
			this->Controls->Add(this->btndigit1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		double firstDigit, secondDigit, result;
		String^ operators;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) {
	Button^ Numbers = safe_cast<Button^>(sender);
	if (textBox1->Text == "0") {
		textBox1->Text = Numbers->Text;
	}
	else {
		textBox1->Text = textBox1->Text + Numbers->Text;
	}
}
private: System::Void EnterOperator(System::Object^ sender, System::EventArgs^ e) {
	Button^ Numberopt = safe_cast<Button^>(sender);
	firstDigit = Double::Parse(textBox1->Text);
	textBox1->Text = "";
	operators = Numberopt->Text;

}
private: System::Void btndecimal_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text->Contains(".")) {
		textBox1->Text = textBox1->Text + ".";
	}
}
private: System::Void btnequals_Click(System::Object^ sender, System::EventArgs^ e) {
	secondDigit = Double::Parse(textBox1->Text);

	if (operators == "+") {
		result = firstDigit + secondDigit;
		textBox1->Text = System::Convert::ToString(result);
	}
	else if (operators == "-") {
		result = firstDigit - secondDigit;
		textBox1->Text = System::Convert::ToString(result);
	}
	else if (operators == "X") {
		result = firstDigit * secondDigit;
		textBox1->Text = System::Convert::ToString(result);
	}
	else if (operators == "/") {
		result = firstDigit / secondDigit;
		textBox1->Text = System::Convert::ToString(result);
	}
}
private: System::Void btnclr_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "0";
}
private: System::Void btnCE_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "0";
}
private: System::Void btnspace_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text->Length > 0) {
		textBox1->Text = textBox1->Text->Remove(textBox1->Text->Length - 1, 1);
	}
}
};
}
