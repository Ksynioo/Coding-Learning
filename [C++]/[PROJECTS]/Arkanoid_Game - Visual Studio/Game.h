#pragma once

namespace ArkanoidGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Game
	/// </summary>
	public ref class Game : public System::Windows::Forms::Form
	{
	public:
		Game(void)
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
		~Game()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ ball;
	protected:
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::PictureBox^ platform;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Game::typeid));
			this->ball = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->platform = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ball))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->platform))->BeginInit();
			this->SuspendLayout();
			// 
			// ball
			// 
			this->ball->BackColor = System::Drawing::Color::Transparent;
			this->ball->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ball->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ball.Image")));
			this->ball->Location = System::Drawing::Point(319, 430);
			this->ball->Name = L"ball";
			this->ball->Size = System::Drawing::Size(25, 25);
			this->ball->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->ball->TabIndex = 0;
			this->ball->TabStop = false;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1;
			this->timer1->Tick += gcnew System::EventHandler(this, &Game::timer1_Tick);
			// 
			// platform
			// 
			this->platform->BackColor = System::Drawing::Color::Transparent;
			this->platform->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"platform.Image")));
			this->platform->Location = System::Drawing::Point(266, 461);
			this->platform->Name = L"platform";
			this->platform->Size = System::Drawing::Size(133, 28);
			this->platform->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->platform->TabIndex = 1;
			this->platform->TabStop = false;
			// 
			// Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(704, 501);
			this->Controls->Add(this->platform);
			this->Controls->Add(this->ball);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Game";
			this->Text = L"Arkanoid";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Game::movePlatform);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Game::Game_KeyUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ball))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->platform))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		int x = 0, y = 0;
		char direction;
#pragma endregion
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {

		//ball movement
		ball->Left += x;
		ball->Top += y;

		if (ball->Left >= Game::Width - ball->Width) x = -x;
		if (ball->Top >= Game::Height - ball->Height) y = -y;
		if (ball->Top <= 75) y = -y;
		if (ball->Left <= 5) x = -x;


		//platform movement right
		if (direction == 'R' && (platform->Left<Game::Width - platform->Width - 30))
		{
			platform->Left += 20;
		}

		//platform movement left
		if (direction == 'L' && (platform->Left > 10))
		{
			platform->Left -= 20;

		}

	}
	private: System::Void movePlatform(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		 
		if (e->KeyCode == Keys::Left) direction = 'L';
		if (e->KeyCode == Keys::Right) direction = 'R';
		if (e->KeyCode == Keys::Space)
		{
			x = -5;
			y = -5;
		}
	}													 
private: System::Void Game_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	direction = 'S';
}
};
}
