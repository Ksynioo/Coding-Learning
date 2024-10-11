#pragma once

namespace CirclesAndCrosses {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class CirclesAndCrosses : public System::Windows::Forms::Form
	{

		bool clicked = true;
		bool winner = false;
		int counterX = 0;
		int counterO = 0;
		String^ master = " ";

	public:
		CirclesAndCrosses(void)
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
		~CirclesAndCrosses()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelX1;
	protected:
	private: System::Windows::Forms::Label^ labelX2;
	private: System::Windows::Forms::Label^ labelO2;

	private: System::Windows::Forms::Label^ labelO1;
	private: System::Windows::Forms::Button^ btnNewGame;
	private: System::Windows::Forms::Button^ btnReset;
	private: System::Windows::Forms::PictureBox^ A1;
	private: System::Windows::Forms::PictureBox^ B1;
	private: System::Windows::Forms::PictureBox^ C1;
	private: System::Windows::Forms::PictureBox^ A2;
	private: System::Windows::Forms::PictureBox^ B2;
	private: System::Windows::Forms::PictureBox^ C2;
	private: System::Windows::Forms::PictureBox^ A3;
	private: System::Windows::Forms::PictureBox^ B3;
	private: System::Windows::Forms::PictureBox^ C3;










	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CirclesAndCrosses::typeid));
			this->labelX1 = (gcnew System::Windows::Forms::Label());
			this->labelX2 = (gcnew System::Windows::Forms::Label());
			this->labelO2 = (gcnew System::Windows::Forms::Label());
			this->labelO1 = (gcnew System::Windows::Forms::Label());
			this->btnNewGame = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->A1 = (gcnew System::Windows::Forms::PictureBox());
			this->B1 = (gcnew System::Windows::Forms::PictureBox());
			this->C1 = (gcnew System::Windows::Forms::PictureBox());
			this->A2 = (gcnew System::Windows::Forms::PictureBox());
			this->B2 = (gcnew System::Windows::Forms::PictureBox());
			this->C2 = (gcnew System::Windows::Forms::PictureBox());
			this->A3 = (gcnew System::Windows::Forms::PictureBox());
			this->B3 = (gcnew System::Windows::Forms::PictureBox());
			this->C3 = (gcnew System::Windows::Forms::PictureBox());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3))->BeginInit();
			this->SuspendLayout();
			// 
			// labelX1
			// 
			this->labelX1->AutoSize = true;
			this->labelX1->Location = System::Drawing::Point(13, 308);
			this->labelX1->Name = L"labelX1";
			this->labelX1->Size = System::Drawing::Size(39, 13);
			this->labelX1->TabIndex = 0;
			this->labelX1->Text = L"Win X:";
			// 
			// labelX2
			// 
			this->labelX2->AutoSize = true;
			this->labelX2->Location = System::Drawing::Point(16, 325);
			this->labelX2->Name = L"labelX2";
			this->labelX2->Size = System::Drawing::Size(13, 13);
			this->labelX2->TabIndex = 1;
			this->labelX2->Text = L"0";
			// 
			// labelO2
			// 
			this->labelO2->AutoSize = true;
			this->labelO2->Location = System::Drawing::Point(253, 325);
			this->labelO2->Name = L"labelO2";
			this->labelO2->Size = System::Drawing::Size(13, 13);
			this->labelO2->TabIndex = 3;
			this->labelO2->Text = L"0";
			this->labelO2->Click += gcnew System::EventHandler(this, &CirclesAndCrosses::label1_Click);
			// 
			// labelO1
			// 
			this->labelO1->AutoSize = true;
			this->labelO1->Location = System::Drawing::Point(250, 308);
			this->labelO1->Name = L"labelO1";
			this->labelO1->Size = System::Drawing::Size(40, 13);
			this->labelO1->TabIndex = 2;
			this->labelO1->Text = L"Win O:";
			this->labelO1->Click += gcnew System::EventHandler(this, &CirclesAndCrosses::label2_Click);
			// 
			// btnNewGame
			// 
			this->btnNewGame->Location = System::Drawing::Point(16, 366);
			this->btnNewGame->Name = L"btnNewGame";
			this->btnNewGame->Size = System::Drawing::Size(75, 23);
			this->btnNewGame->TabIndex = 4;
			this->btnNewGame->Text = L"New Game";
			this->btnNewGame->UseVisualStyleBackColor = true;
			this->btnNewGame->Click += gcnew System::EventHandler(this, &CirclesAndCrosses::btnNewGame_Click);
			// 
			// btnReset
			// 
			this->btnReset->Location = System::Drawing::Point(214, 366);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(75, 23);
			this->btnReset->TabIndex = 5;
			this->btnReset->Text = L"Reset";
			this->btnReset->UseVisualStyleBackColor = true;
			this->btnReset->Click += gcnew System::EventHandler(this, &CirclesAndCrosses::btnReset_Click);
			// 
			// A1
			// 
			this->A1->BackColor = System::Drawing::Color::Transparent;
			this->A1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A1.Image")));
			this->A1->Location = System::Drawing::Point(16, 23);
			this->A1->Name = L"A1";
			this->A1->Size = System::Drawing::Size(64, 64);
			this->A1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->A1->TabIndex = 6;
			this->A1->TabStop = false;
			this->A1->Tag = L"\?";
			this->A1->Click += gcnew System::EventHandler(this, &CirclesAndCrosses::play);
			// 
			// B1
			// 
			this->B1->BackColor = System::Drawing::Color::Transparent;
			this->B1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B1.Image")));
			this->B1->Location = System::Drawing::Point(118, 23);
			this->B1->Name = L"B1";
			this->B1->Size = System::Drawing::Size(64, 64);
			this->B1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->B1->TabIndex = 7;
			this->B1->TabStop = false;
			this->B1->Tag = L"\?";
			this->B1->Click += gcnew System::EventHandler(this, &CirclesAndCrosses::play);
			// 
			// C1
			// 
			this->C1->BackColor = System::Drawing::Color::Transparent;
			this->C1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C1.Image")));
			this->C1->Location = System::Drawing::Point(214, 23);
			this->C1->Name = L"C1";
			this->C1->Size = System::Drawing::Size(64, 64);
			this->C1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->C1->TabIndex = 8;
			this->C1->TabStop = false;
			this->C1->Tag = L"\?";
			this->C1->Click += gcnew System::EventHandler(this, &CirclesAndCrosses::play);
			// 
			// A2
			// 
			this->A2->BackColor = System::Drawing::Color::Transparent;
			this->A2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A2.Image")));
			this->A2->Location = System::Drawing::Point(16, 120);
			this->A2->Name = L"A2";
			this->A2->Size = System::Drawing::Size(64, 64);
			this->A2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->A2->TabIndex = 9;
			this->A2->TabStop = false;
			this->A2->Tag = L"\?";
			this->A2->Click += gcnew System::EventHandler(this, &CirclesAndCrosses::play);
			// 
			// B2
			// 
			this->B2->BackColor = System::Drawing::Color::Transparent;
			this->B2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B2.Image")));
			this->B2->Location = System::Drawing::Point(118, 120);
			this->B2->Name = L"B2";
			this->B2->Size = System::Drawing::Size(64, 64);
			this->B2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->B2->TabIndex = 10;
			this->B2->TabStop = false;
			this->B2->Tag = L"\?";
			this->B2->Click += gcnew System::EventHandler(this, &CirclesAndCrosses::play);
			// 
			// C2
			// 
			this->C2->BackColor = System::Drawing::Color::Transparent;
			this->C2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C2.Image")));
			this->C2->Location = System::Drawing::Point(214, 120);
			this->C2->Name = L"C2";
			this->C2->Size = System::Drawing::Size(64, 64);
			this->C2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->C2->TabIndex = 11;
			this->C2->TabStop = false;
			this->C2->Tag = L"\?";
			this->C2->Click += gcnew System::EventHandler(this, &CirclesAndCrosses::play);
			// 
			// A3
			// 
			this->A3->BackColor = System::Drawing::Color::Transparent;
			this->A3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A3.Image")));
			this->A3->Location = System::Drawing::Point(16, 214);
			this->A3->Name = L"A3";
			this->A3->Size = System::Drawing::Size(64, 64);
			this->A3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->A3->TabIndex = 12;
			this->A3->TabStop = false;
			this->A3->Tag = L"\?";
			this->A3->Click += gcnew System::EventHandler(this, &CirclesAndCrosses::play);
			// 
			// B3
			// 
			this->B3->BackColor = System::Drawing::Color::Transparent;
			this->B3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B3.Image")));
			this->B3->Location = System::Drawing::Point(118, 214);
			this->B3->Name = L"B3";
			this->B3->Size = System::Drawing::Size(64, 64);
			this->B3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->B3->TabIndex = 13;
			this->B3->TabStop = false;
			this->B3->Tag = L"\?";
			this->B3->Click += gcnew System::EventHandler(this, &CirclesAndCrosses::play);
			// 
			// C3
			// 
			this->C3->BackColor = System::Drawing::Color::Transparent;
			this->C3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C3.Image")));
			this->C3->Location = System::Drawing::Point(214, 214);
			this->C3->Name = L"C3";
			this->C3->Size = System::Drawing::Size(64, 64);
			this->C3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->C3->TabIndex = 14;
			this->C3->TabStop = false;
			this->C3->Tag = L"\?";
			this->C3->Click += gcnew System::EventHandler(this, &CirclesAndCrosses::play);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"question-sign.png");
			this->imageList1->Images->SetKeyName(1, L"cross.png");
			this->imageList1->Images->SetKeyName(2, L"rec.png");
			// 
			// CirclesAndCrosses
			// 
			this->AccessibleName = L"";
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(301, 401);
			this->Controls->Add(this->C3);
			this->Controls->Add(this->B3);
			this->Controls->Add(this->A3);
			this->Controls->Add(this->C2);
			this->Controls->Add(this->B2);
			this->Controls->Add(this->A2);
			this->Controls->Add(this->C1);
			this->Controls->Add(this->B1);
			this->Controls->Add(this->A1);
			this->Controls->Add(this->btnReset);
			this->Controls->Add(this->btnNewGame);
			this->Controls->Add(this->labelO2);
			this->Controls->Add(this->labelO1);
			this->Controls->Add(this->labelX2);
			this->Controls->Add(this->labelX1);
			this->MinimizeBox = false;
			this->Name = L"CirclesAndCrosses";
			this->Text = L"CirclesAndCrosses";
			this->Load += gcnew System::EventHandler(this, &CirclesAndCrosses::CirclesAndCrosses_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CirclesAndCrosses_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	


private: System::Void play(System::Object^ sender, System::EventArgs^ e) {

	PictureBox^ image = (PictureBox^)sender;

	if (clicked){
		image->Image = imageList1->Images[1];
		image->Tag = "X";
	}
	else{
		image->Image = imageList1->Images[2];
		image->Tag = "O";
	}
	
	clicked = !clicked;
	image->Enabled = false;
	winning();
}
	   private: Void winning()
	   {
		   //checking win in horizontal axis
		   if ((A1->Tag == B1->Tag) &&	 (B1->Tag ==	 C1->Tag)	&&  (A1->Tag != "?")) winner = true;
		   if ((A2->Tag == B2->Tag) && (B2->Tag == C2->Tag) && (A2->Tag != "?")) winner = true;
		   if ((A3->Tag == B3->Tag) && (B3->Tag == C3->Tag) && (A3->Tag != "?")) winner = true;

		   //checking win in vertical axis
		   if ((A1->Tag == A2->Tag) && (A2->Tag == A3->Tag) && (A1->Tag != "?")) winner = true;
		   if ((B1->Tag == B2->Tag) && (B2->Tag == B3->Tag) && (B1->Tag != "?")) winner = true;
		   if ((C1->Tag == C2->Tag) && (C2->Tag == C3->Tag) && (C1->Tag != "?")) winner = true;

		   //checking win in diagonal axis
		   if ((A1->Tag == B2->Tag) && (B2->Tag == C3->Tag) && (A1->Tag != "?")) winner = true;
		   if ((C1->Tag == B2->Tag) && (B2->Tag == A3->Tag) && (C1->Tag != "?")) winner = true;
		   
		   if (winner){
			   for each (Control^ element in this->Controls)
			   {
				   if(element->GetType() == PictureBox::typeid) element->Enabled = false;
			   }

			   if (clicked){
				   counterO++;
				   labelO2->Text = Convert::ToString(counterO);
				   master = "O";
			   }
			   else{
				   counterX++;
				   labelX2->Text = Convert::ToString(counterX);
				   master = "X";
			   }

			   MessageBox::Show("Winner: " + master, "Circles and Crosses", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		   }

	   }

private: Void restartGame()
			  {
				  for each (Control ^ element in this->Controls)
				  {
					  try{
						  PictureBox^ image = (PictureBox^)element;
						  image->Enabled = true;
						  image->Tag = "?";
						  image->Image = imageList1->Images[0];
					  }
					  catch (...)
					  {

					  }
				  }
			  }

private: System::Void btnNewGame_Click(System::Object^ sender, System::EventArgs^ e) {
	winner = false;
	restartGame();
}
private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {
	winner = false;
	restartGame();
	counterO = 0;
	counterX = 0;
	labelO2->Text = "0";
	labelX2->Text = "0";
}
};
}
