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

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button3;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 452);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(265, 79);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Start";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(607, 452);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(265, 79);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Quit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-1, -2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(887, 435);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(-4, -2);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"StartScreen";
			this->label1->Visible = false;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->label2->Location = System::Drawing::Point(186, 391);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(504, 15);
			this->label2->TabIndex = 5;
			this->label2->Text = L"[ Goes to a Christian University in the Heart of Nashville ][ Giggles ]";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(312, 452);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(265, 79);
			this->button3->TabIndex = 6;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(884, 543);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
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

/*private: System::Void PlayMusic() {

		PlaySound(TEXT("pokemusicw.wav"), NULL, SND_SYNC);
	}*/


/////////////////////////////////////////////////////// GAME CODE STARTS HERE
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

	motherFn(1);

}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

	motherFn(2);
}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

	motherFn(3);
}


private: System::Void motherFn(int x) {
//////////////////////////////// START SCREEN
	if (this->label1->Text == "StartScreen") {
		//Start button
		if (x == 1) {
			//this->pictureBox1->Image = Image::FromFile("cstudent.jpg");
			this->label1->Text = "Major";
			this->label2->Text = "[ Choose your major... ]";
			//this->label2->Text = "Choose your major, or cause of debt";
			
			//PlayMusic();
			this->button3->Visible = true;

			this->button1->Text = "Physics";
			this->button2->Text = "Music";
			this->button3->Text = "Religion";
			
			
		}
	}
/////////////////////////////// MAIN DECISION
	else if (this->label1->Text == "Major") {
		//PHY
		this->button3->Visible = false;

		if (x == 1) {
			this->pictureBox1->Image = Image::FromFile("P01.jpg");///picture name is label
			this->label1->Text = "P01"; //picture name is label
			this->label2->Text = "[ Welcome to the physics department! First day of school, where do you sit? ]";

			this->button1->Text = "Front (nerd)";
			this->button2->Text = "Back";
			
		}
		//////////MUSIC
		else if (x == 2) {
			this->pictureBox1->Image = Image::FromFile("M01.jpg");
			this->label1->Text = "M01";
			this->label2->Text = "[ You have to choose again ]";

			this->button1->Text = "NPWI";
			this->button2->Text = "Music Business";











//////////////////////////////////////////////////////////////////////////////////////////////
		}

		else if (x == 3) {
			this->pictureBox1->Image = Image::FromFile("R01.jpg");
			this->label1->Text = "R01";
			this->label2->Text = "[ Welcome to the religion department! \n You meet the love of your life... on the first week of school. What do you do? ]";

			this->button1->Text = "Ask her/him to marry you";
			this->button2->Text = "Control your hormones and become their friend first";

		}
	}



	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////////////////////   PHYSICS MAJOR STORYLINE   ///////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////////////////////////the superior major//////////////////////////////////////////////////////////////////////////////
	else if (this->label1->Text == "P01") {

		if ((x == 1) || (x == 2)) {

			this->pictureBox1->Image = Image::FromFile("P02.jpg");
			this->label1->Text = "P02";
			this->label2->Text = "[ Some random science major invites you to go to Baja Burrito, what do you say? ]";

			this->button1->Text = "Nah I should study";
			this->button2->Text = "Heck yeah mah dude";
		}

	}

	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////////////////////   RELIGION MAJOR STORYLINE   //////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	else if (this->label1->Text == "R01") {

		//////////////////////////////MARRIAGE=DEATH
		if (x == 1) {
			this->pictureBox1->Image = Image::FromFile("R11.jpg");///picture name is label
			this->label1->Text = "R11"; //picture name is label
			this->label2->Text = "[ You drop out of school to get married and become a housewife.\nYou live a 'happy' life and have as many children as physically possible... \nIf you can't wait for marriage, don't make marriage wait. ]";

			this->button2->Visible = false;
			this->button1->Visible = false;
			

		}

		//control hores 
		else if (x == 2) {
			this->pictureBox1->Image = Image::FromFile("R12.jpg");
			this->label1->Text = "R12";
			this->label2->Text = "[ You realize he/she is gross and you devote  your life to the LORD. \nShawna becomes your mentor and she encourages you to go \n on a TAG trip. Where do you go? ]";

			this->button1->Text = "Africa";
			this->button2->Text = "Croatia";


		}

	}

	//////////////////////////////////////////////////////////////////////////////////////////////////TAG TRIP
	else if (this->label1->Text == "R12") 
	{

		///AFRICA
		if (x == 1) {
			this->pictureBox1->Image = Image::FromFile("R21.jpg");///picture name is label
			this->label1->Text = "R21"; //picture name is label
			this->label2->Text = "[ On the plane ride to Africa, you are eating a salad but can't finish it. \nWhat do you do with the leftoevers? ]";

			this->button1->Text = "Throw it away";
			this->button2->Text = "Save for later";


		}

		///CROATIA	
		else if (x == 2) {
			this->pictureBox1->Image = Image::FromFile("R22.jpg");
			this->label1->Text = "R22";
			this->label2->Text = "[ Once you are there, you meet a local and want to make conversation. \nWhat do you say? ]";

			this->button1->Text = "Nesto Uvredljivo"; ///something offensive
			this->button2->Text = "Sretan Bozic"; ///merry christmas


		}

	}

	///////////////////////////////////////////////////////////////////////////////////////////SALAD IN AFRICA

	else if (this->label1->Text == "R21")
	{

		///THROW IT AWAY=DEATH
		if (x == 1) {
			this->pictureBox1->Image = Image::FromFile("R51.jpg");///picture name is label
			this->label1->Text = "R51"; //picture name is label
			this->label2->Text = "[ Once you get to Africa, you realize how wasteful you were. This haunts you.\n"
"you cannot sleep. You go for a late night walk to clear your head. \n "
"you venture into a cave where you find a magical crystal. As you pick it up, \n "
"the earth starts to tremble. You run out of the cave and look up at the sky, \n "
"only to discover that you accidentally triggered the rapture. \n"
"all humanity comes to end. ]";

			this->button2->Visible = false;
			this->button1->Visible = false;

		}

		///SAVE IT FOR LATER = DEATH
		else if (x == 2) {
			this->pictureBox1->Image = Image::FromFile("R52.jpg");
			this->label1->Text = "R52";
			this->label2->Text = "[ Once you get to Africa, you camp out on a safari. \n"
"a lioness smells your leftover ceaser salad and confuses it for meat. \n"
"when she realizes that there is no chicken left in the salad, \n"
"she gets pissed and devoures you alive. ]";

			this->button2->Visible = false;
			this->button1->Visible = false;


		}

	}

	////////////////////////////////////////////////////////////////////////////////WHAT YOU SAID TO LOCAL IN CROATIA
	else if (this->label1->Text == "R22")
	{

		///SOMETHING OFFENSIVE= DEATH
		if (x == 1) {
			this->pictureBox1->Image = Image::FromFile("R31.jpg");///picture name is label
			this->label1->Text = "R31"; //picture name is label
			this->label2->Text = "[It turns out that you said 'something offensive.' nice job. \n"
"he immediately stabs you and drags your body to the nearest cliff. \n"
"You plummet to your death as you simultaneous bleed out. ]";

			this->button2->Visible = false;
			this->button1->Visible = false;


		}

		////////MERRY CHRISTMAS	
		else if (x == 2) {
			this->pictureBox1->Image = Image::FromFile("R32.jpg");
			this->label1->Text = "R32";
			this->label2->Text = "[ The local thinks you are funny and gives you a present. \n"
"it's a map! you are ready to go on an adventure. What do you do? ]";

			this->button1->Text = "follow the map"; 
			this->button2->Text = "as a young pilgrim, you follow the compass inside your heart"; 


		}

	}
	/////////////////////////////////////////////////////////////////////////////////////////////ADVENTURE WITH THE MAP
	else if (this->label1->Text == "R32") {

		/////////FOLLOW THE MAP
		if (x == 1) {
			this->pictureBox1->Image = Image::FromFile("R41.jpg");///picture name is label
			this->label1->Text = "R41"; //picture name is label
			this->label2->Text = "[ you venture into a cave where you find a magical crystal. As you pick it up, \n "
"the earth starts to tremble. You run out of the cave and look up at the sky, \n "
"only to discover that you accidentally triggered the rapture. \n"
"all humanity comes to end. ]";

			this->button2->Visible = false;
			this->button1->Visible = false;


		}

		////FOLLOW THE COMPASS IN YOUR HEART 
		else if (x == 2) {
			this->pictureBox1->Image = Image::FromFile("R42.jpg");
			this->label1->Text = "R42";
			this->label2->Text = "[ Nah, you needed directions. You get increadibly lost for days. \n"
"Eventually, you stumble upon an abandoned building and through your sluething skills, \n"
"you figure out that is one of Nikola Tesla's hidden labs, Wardenclyff. \n "
"You discover the free energy tower to distribute power to the whole world.\n "
"However, since you don't know Croatian, you press the self destruct button \n"
"instead of the power button. You deprive the world of free energy and kill yourself in the process. ]";

			this->button2->Visible = false;
			this->button1->Visible = false;


		}

	}
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////////////////////////////////////////MUSIC MAJOR STORYLINE////////////////////////////////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	else if (this->label1->Text == "M01")
	{

		///NPWI
		if (x == 1) {
			this->pictureBox1->Image = Image::FromFile("M11.jpg");///picture name is label
			this->label1->Text = "M11"; //picture name is label
			this->label2->Text = "[ choose another track ]";

			this->button1->Text = "Take an internship";
			this->button2->Text = "Go into PR";


		}

		///MUSIC BUSINESS
		else if (x == 2) {
			this->pictureBox1->Image = Image::FromFile("M12.jpg");
			this->label1->Text = "M12";
			this->label2->Text = "[ choose another track ]";

			this->button1->Text = "Go into PR"; 
			this->button2->Text = "Go into AV"; 


		}

	}
	///////////////////////////////////////////////////////////////////////////////////////MUSIC BUSINESS PR OR AV
	else if (this->label1->Text == "M12")
	{

		///go into pr
		if (x == 1) {
			this->pictureBox1->Image = Image::FromFile("M22.jpg");///picture name is label
			this->label1->Text = "M22"; //picture name is label
			this->label2->Text = "[ You have your first show coming up. What do you wear? ]";

			this->button1->Text = "Skinny jeans and a sweater";
			this->button2->Text = "Shorts and a button down";


		}

		///go into av
		else if (x == 2) {
			this->pictureBox1->Image = Image::FromFile("M23.jpg");
			this->label1->Text = "M23";
			this->label2->Text = "[ You get a call from a friend who asks you to come to a party with him.  Do you go? ]";

			this->button1->Text = "Yes"; 
			this->button2->Text = "Nah";


		}

	}
	//////////////////////////////////////////////////////////////AV TRACK PARTY????
	else if (this->label1->Text == "M23")
	{

		/////////////YES
		if (x == 1) {
			this->pictureBox1->Image = Image::FromFile("M141.jpg");///picture name is label
			this->label1->Text = "M141"; //picture name is label
			this->label2->Text = "[Great! you make connections and stuff. What do you do next? ]";

			this->button1->Text = "Leave early ";
			this->button2->Text = "Stay longer";


		}

		///NAH	= DEATH 
		else if (x == 2) {
			this->pictureBox1->Image = Image::FromFile("M142.jpg");
			this->label1->Text = "M142";
			this->label2->Text = "[ You study instead and this becomes a habit. You get good grades, \n"
"you graduate, you get an average job, and have an average marriage. \n"
"you have no children. You slip on a banana peel and die at the prime age of 69 ]";

			this->button2->Visible = false;
			this->button1->Visible = false;



		}

	}
	///////////////////////////////////////////////LEAVE PARTY OR STAY
	else if (this->label1->Text == "M141")
	{

		///LEAVE EARLY 
		if (x == 1) {
			this->pictureBox1->Image = Image::FromFile("M151.jpg");///picture name is label
			this->label1->Text = "M151"; //picture name is label
			this->label2->Text = "[ A few days later, you remember that you met a few Soundcloud rappers. \n"
"who do you contact? ]";
			this->button3->Visible = true;
			this->button1->Text = "Khalil";
			this->button2->Text = "Tedward";
			this->button3->Text = "Lil' Marky";

		}

		///STAY LONGER = DEATH
		else if (x == 2) {
			this->pictureBox1->Image = Image::FromFile("M152.jpg");
			this->label1->Text = "M152";
			this->label2->Text = "[ You get chocolate wasted and die choking on your own vomit. ]";

			this->button2->Visible = false;
			this->button1->Visible = false;



		}

	}

	/////////////////////////////////////soundcloud rappers
	else if (this->label1->Text == "M151")
	{

		///khalil = DEATH 
		if (x == 1) {
			this->pictureBox1->Image = Image::FromFile("M161.jpg");///picture name is label
			this->label1->Text = "M161"; //picture name is label
			this->label2->Text = "[ He was really terrible and you feel bad for him so you try \n"
"to still make his music popular. Later in life, you figure out that you cannot do much with trash, \n"
"but it is too late now. You decide that life is meaningless and you asphyxiate yourself ]";
			
			this->button2->Visible = false;
			this->button1->Visible = false;
			this->button3->Visible = false;
	
		}

		///tedward
		else if (x == 2) {
			this->pictureBox1->Image = Image::FromFile("M162.jpg");
			this->label1->Text = "M162";
			this->label2->Text = "[ What do you do next? ]";

			this->button3->Visible = false;
			this->button1->Text = "You ask to be his manager ";
			this->button2->Text = "You ask to be his hype man";
		}

		///lil' marky = DEATH 
		else if (x == 3) {
			this->pictureBox1->Image = Image::FromFile("M163.jpg");
			this->label1->Text = "M163";
			this->label2->Text = "[ You find out that it is just Vitor's little brother \n"
"and you die as a failure ]";
			

			this->button2->Visible = false;
			this->button1->Visible = false;
			this->button3->Visible = false;


		}

	}

	//////////tedward

	else if (this->label1->Text == "M162")
	{

		///MANAGER = DEATH
		if (x == 1) {
			this->pictureBox1->Image = Image::FromFile("M171.jpg");///picture name is label
			this->label1->Text = "M171"; //picture name is label
			this->label2->Text = "[ You try too hard to be cool and trendy. As a result, you \n"
"accidentally eat too much avacado and die of food poisoning. ]";	
			
			this->button2->Visible = false;
			this->button1->Visible = false;
			this->button3->Visible = false;

		}

		///HYPE MAN = DEATH 
		else if (x == 2) {
			this->pictureBox1->Image = Image::FromFile("M172.jpg");
			this->label1->Text = "M172";
			this->label2->Text = "[ You are successful for a little while. \n"
"Then a bunch of drama starts. Someone poisons your drink and you die. ]";
			
			this->button2->Visible = false;
			this->button1->Visible = false;
			this->button3->Visible = false;


		}

	}
	//Testing 4



}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}

};
}
