#include <iostream>
#include <string>
#include <windows.h>


using namespace std;

int main()
{

      SYSTEMTIME today;
      GetLocalTime(&today);
      int year = today.wYear, birthdate;
      string firstname;

      cout << "Tell me your first name: ";
      cin >> firstname;
      cout << "Tell me your birth date: ";
      cin >> birthdate;
      cout << "Your name is: " << firstname << " and you are " << year - birthdate << " years old" ;
      return 0;
}
