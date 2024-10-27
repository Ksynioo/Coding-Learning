#include "Author.h"
#include "Game.h"
#include "Greeting.h"

using namespace ArkanoidGame;
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main(array <String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ArkanoidGame::Greeting form;
	Application::Run(% form);
	return 0;
}