#include "Author.h"
#include "Game.h"
#include "Greeting.h"

using namespace ArkanoidGame;
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

void CloseWindow(Object^ sender, FormClosedEventArgs^ e)
{
	if (Application::OpenForms->Count == 0)
	{
		Application::Exit();

	}
	else
	{
		Application::OpenForms[0]->FormClosed += gcnew FormClosedEventHandler(CloseWindow);
	}
}

int main(array <String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Greeting^ first = gcnew Greeting();
	first->FormClosed += gcnew FormClosedEventHandler(CloseWindow);
	first->Show();

	Application::Run();
	return 0;
}