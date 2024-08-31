#include <iostream>
#include <string>

using namespace std;

int main()
{
    int number = 100, take_num;

    do
    {
        cin.clear();
        cin.sync();

        cout << "Enter Integer Value: ";
        cin >> take_num;

    }while(cin.good() < 1);

    cout << "Result : " << number + take_num << endl;

    return 0;
}
