#include <iostream>

using namespace std;

int main()
{
    int number, divider;
    cout << "Enter the integer value: ";
    while(cin >> number)
      {
            for(divider = 1; divider <= number; divider++)
            {
                  if(number%divider == 0) cout << divider << " \n";
            }
            cout << "Enter the integer value: \n";
      }
    return 0;
}
