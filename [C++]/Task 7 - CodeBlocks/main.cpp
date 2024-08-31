#include <iostream>

using namespace std;

int main()
{
      int price;
      cout << "Enter shopping price: ";

      while(cin >> price)
            {
            if(price < 100)
            {
                  cout << "There is no discount for this price" << endl;
            }
            if(price == 100 )
            {
                  cout << "Discount 10%" << endl;
            }
            if(price > 100)
            {
                  cout << "Discount 20%, Thank you for shopping at our store!" << endl;
            }
            cout << "Enter shopping price: ";
      }
      return 0;
}
