#include "Interactive.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main(array <System::String^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	HelloWorldInteractive::Interactive form;
	Application::Run(% form);

	return 0;
}