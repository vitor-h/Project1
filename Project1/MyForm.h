#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <Windows.h>
#include <MMSystem.h>

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
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(26, 354);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(206, 80);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Start";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(418, 351);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(232, 83);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Quit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(120, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(402, 253);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(120, 286);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(402, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"Click the Start button";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(556, 162);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"StartScreen";
			this->label1->Visible = false;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(202, 309);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(249, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"note: this label can be our way of displaying text instead";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(662, 449);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {

}

/////////////////////////////////////////////////////// GAME CODE STARTS HERE
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

	motherFn(1);

}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

	motherFn(2);
}


private: System::Void motherFn(int x) {
//////////////////////////////// START SCREEN
	if (this->label1->Text == "StartScreen") {
		//Start button
		if (x == 1) {
			this->pictureBox1->Image = Image::FromFile("cstudent.jpg");
			this->label1->Text = "Major";
			this->textBox1->Text = "Choose your major, or cause of debt";
			//this->label2->Text = "Choose your major, or cause of debt";
			//PlaySound(TEXT("pokemusicw.wav"), NULL, SND_SYNC);

			this->button1->Text = "Physics";
			this->button2->Text = "Music";
			
			
		}
	}
/////////////////////////////// MAIN DECISION
	else if (this->label1->Text == "Major") {
		//PHY
		if (x == 1) {
			this->pictureBox1->Image = Image::FromFile("phystudent.jpg");///picture name is label
			this->label1->Text = "phystudent"; //picture name is label
			this->textBox1->Text = "It is getting tough and you gotta choose";

			this->button1->Text = "keep going";
			this->button2->Text = "Drop out";
			
		}
		//MUS
		else if (x == 2) {
			this->pictureBox1->Image = Image::FromFile("musstudent.jpg");
			this->label1->Text = "musstudent";
			this->textBox1->Text = "It is pretty easy... but you feel 'overwhelmed'...";

			this->button1->Text = "do more Music";
			this->button2->Text = "drop out";
			
		

		}
	}
////////////////////////////////// PHYSICS MAJOR STORYLINE
	else if (this->label1->Text == "phystudent") {

		if (x == 1) {

			this->pictureBox1->Image = Image::FromFile("stp2.jpg");
			this->label1->Text = "stp2";
			this->textBox1->Text = "Oh well, it seems to be the only way out. :( ";

			this->button1->Text = "Give up";
			this->button2->Text = "Give up";
		}

		

	

	}

	////////////////////////////////TRY SWITCH st. maybe//////////////////////// maybe not




}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
