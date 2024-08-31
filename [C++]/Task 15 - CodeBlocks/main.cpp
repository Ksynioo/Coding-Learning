#include <iostream>
#include <string>

using namespace std;

void greeting(string name, string last_name);

int main()
{
      string name, last_name;
      cout << "What is your name: ";
      cin >> name;
      cout << "What is your last name: ";
      cin >> last_name;

      greeting(name, last_name);

    return 0;
}

// This works only with polish names
void greeting(string name, string last_name)
{
      int length_of_name;

      length_of_name = name.length();

      if(name[length_of_name-1] ==  'a')
      {
            cout << "Hello Dear Mistress!";
      }
      else
      {
            cout << "Hello Dear Mister";
      }
}
