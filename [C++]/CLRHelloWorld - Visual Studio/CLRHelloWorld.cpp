#include "pch.h"

using namespace System;

int main(array<System::String ^> ^args)
{
    String^ name;
    Console::Write("Enter your name: ");
    name = Console::ReadLine();
    Console::WriteLine(L"Hello " + name + " in World!");
    Console::Read();
    return 0;
}
 