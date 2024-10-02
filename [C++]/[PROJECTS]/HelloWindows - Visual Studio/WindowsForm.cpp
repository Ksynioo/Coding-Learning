#include "WindowsForm.h"
#include <iostream>

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

int main(array<System::String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	HelloWindows::WindowsForm form;
	Application::Run(% form);


	return 0;
}