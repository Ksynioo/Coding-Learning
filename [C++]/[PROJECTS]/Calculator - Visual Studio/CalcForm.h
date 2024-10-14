#pragma once
#include "AboutMe.h"

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CalcForm
	/// </summary>
	public ref class CalcForm : public System::Windows::Forms::Form
	{
	public:
		CalcForm(void)
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
		~CalcForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ plikToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pinToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ windowToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ closeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ widokToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ standardToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ financialToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ gameToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CalcForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->plikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pinToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->windowToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->closeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->widokToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->standardToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->financialToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->plikToolStripMenuItem,
					this->widokToolStripMenuItem, this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(634, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// plikToolStripMenuItem
			// 
			this->plikToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->pinToolStripMenuItem,
					this->windowToolStripMenuItem, this->closeToolStripMenuItem
			});
			this->plikToolStripMenuItem->Name = L"plikToolStripMenuItem";
			this->plikToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->plikToolStripMenuItem->Text = L"File";
			// 
			// pinToolStripMenuItem
			// 
			this->pinToolStripMenuItem->Name = L"pinToolStripMenuItem";
			this->pinToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->pinToolStripMenuItem->Text = L"Pin";
			this->pinToolStripMenuItem->Click += gcnew System::EventHandler(this, &CalcForm::pinToolStripMenuItem_Click);
			// 
			// windowToolStripMenuItem
			// 
			this->windowToolStripMenuItem->Name = L"windowToolStripMenuItem";
			this->windowToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->windowToolStripMenuItem->Text = L"Window";
			this->windowToolStripMenuItem->Click += gcnew System::EventHandler(this, &CalcForm::windowToolStripMenuItem_Click);
			// 
			// closeToolStripMenuItem
			// 
			this->closeToolStripMenuItem->Name = L"closeToolStripMenuItem";
			this->closeToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->closeToolStripMenuItem->Text = L"Close";
			this->closeToolStripMenuItem->Click += gcnew System::EventHandler(this, &CalcForm::closeToolStripMenuItem_Click);
			// 
			// widokToolStripMenuItem
			// 
			this->widokToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->standardToolStripMenuItem,
					this->financialToolStripMenuItem, this->gameToolStripMenuItem
			});
			this->widokToolStripMenuItem->Name = L"widokToolStripMenuItem";
			this->widokToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->widokToolStripMenuItem->Text = L"View";
			// 
			// standardToolStripMenuItem
			// 
			this->standardToolStripMenuItem->Name = L"standardToolStripMenuItem";
			this->standardToolStripMenuItem->Size = System::Drawing::Size(121, 22);
			this->standardToolStripMenuItem->Text = L"Standard";
			this->standardToolStripMenuItem->Click += gcnew System::EventHandler(this, &CalcForm::standardToolStripMenuItem_Click);
			// 
			// financialToolStripMenuItem
			// 
			this->financialToolStripMenuItem->Name = L"financialToolStripMenuItem";
			this->financialToolStripMenuItem->Size = System::Drawing::Size(121, 22);
			this->financialToolStripMenuItem->Text = L"Financial";
			this->financialToolStripMenuItem->Click += gcnew System::EventHandler(this, &CalcForm::financialToolStripMenuItem_Click);
			// 
			// gameToolStripMenuItem
			// 
			this->gameToolStripMenuItem->Name = L"gameToolStripMenuItem";
			this->gameToolStripMenuItem->Size = System::Drawing::Size(121, 22);
			this->gameToolStripMenuItem->Text = L"Game";
			this->gameToolStripMenuItem->Click += gcnew System::EventHandler(this, &CalcForm::gameToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(40, 20);
			this->helpToolStripMenuItem->Text = L"Info";
			this->helpToolStripMenuItem->Click += gcnew System::EventHandler(this, &CalcForm::helpToolStripMenuItem_Click);
			// 
			// CalcForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(634, 411);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"CalcForm";
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &CalcForm::CalcForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CalcForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void helpToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		AboutMe^ Ame = gcnew AboutMe();
		Ame->Show();
	}
private: System::Void standardToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	CalcForm::Width = 300;
	CalcForm::Height = 400;

}
private: System::Void financialToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	CalcForm::Width = 460;
	CalcForm::Height = 400;
}
private: System::Void gameToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	CalcForm::Width = 300;
	CalcForm::Height = 650;
}
private: System::Void pinToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	CalcForm::FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
	TopMost = true;
}
private: System::Void windowToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	CalcForm::FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
}
private: System::Void closeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("Are you sure you want to exit?", "Calculator", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
	{
		Application::Exit();
	}
	
}
};
}
