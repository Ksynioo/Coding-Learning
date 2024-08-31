#include <iostream>
#include <string>

using namespace std;

void show_cargo(string name, double price);

int main()
{
      int i;
      string name[5] = {"Mouse", "Keyboard", "Monitor", "Microphone", "Computer"};
      double price[5] = {40.99, 125.55, 100.99, 45.54, 2599.99};

       for(i=0;i<=4; i++)
      {
            show_cargo(name[i], price[i]);
      }
      return 0;
}

void show_cargo(string name, double price)
{
      cout << "Cargo name: " << name << endl;
      cout <<"Price: " << price << endl<<endl;

}
