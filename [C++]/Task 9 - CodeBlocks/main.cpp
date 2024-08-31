#include <iostream>

using namespace std;

int main()
{
      int grocery_value, discount;
    cout << "Enter value of your grocery: ";
    cin >> grocery_value;

      if(grocery_value == 100 || grocery_value == 200)
      {
            discount = grocery_value *0.1 ;
            cout << "Discount 10%! "<< "Cost: " << grocery_value - discount<< endl;
      }
      else if(grocery_value == 300 || grocery_value == 400 || grocery_value >= 500)
      {
            discount = grocery_value *0.2 ;
            cout << "Discount 20%! "<< "Cost: " << grocery_value - discount<< endl;
      }
      else
      {
            cout << "There is no discount for this price";
      }
    return 0;
}
