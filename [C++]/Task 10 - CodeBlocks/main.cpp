#include <iostream>

using namespace std;

int main()
{
      int grocery_value, discount;
    cout << "Enter value of your grocery: ";
    cin >> grocery_value;
    switch(grocery_value)
    {
      case 100:
            discount = grocery_value *0.1 ;
            cout << "Discount 10%! "<< "Cost: " << grocery_value - discount<< endl;
      break;

      case 200:
            discount = grocery_value *0.1 ;
            cout << "Discount 10%! "<< "Cost: " << grocery_value - discount<< endl;
      break;

      case 300:
            discount = grocery_value *0.2 ;
            cout << "Discount 20%! "<< "Cost: " << grocery_value - discount<< endl;
      break;

      case 400:
            discount = grocery_value *0.2 ;
            cout << "Discount 20%! "<< "Cost: " << grocery_value - discount<< endl;
      break;

      case 500:
            discount = grocery_value *0.2 ;
            cout << "Discount 20%! "<< "Cost: " << grocery_value - discount<< endl;
      break;

      default:
            cout << "There is no discount for this price";
      break;
    }

    return 0;
}
