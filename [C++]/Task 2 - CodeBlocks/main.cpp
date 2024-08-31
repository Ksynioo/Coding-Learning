#include <iostream>

using namespace std;

int main()
{
    int ten = 10, twenty = 20, thirty = 30;

    int *ptr_ten = &ten, *ptr_twenty= &twenty, *ptr_thirty = &thirty;

      cout << "10 + 20 = "  << *ptr_ten + *ptr_twenty<< endl;
      cout << "20 - 10 = " << *ptr_twenty - *ptr_ten<< endl;
      cout << "30 * 20 = " << *ptr_thirty * *ptr_twenty<< endl;


    return 0;
}
