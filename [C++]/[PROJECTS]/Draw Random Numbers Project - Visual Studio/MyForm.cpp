#include "MyForm.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void Main(array<String^>^ args)
{
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);
	Lottomat::MyForm form;
	Application::Run(% form);

}