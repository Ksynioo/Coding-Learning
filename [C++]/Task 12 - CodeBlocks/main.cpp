#include <iostream>

using namespace std;

double calculate_costs(double purchase, double payment);

int main()
{
      double payment = 0, purchase = 0;
      double (*p_change) (double, double);
      p_change = &calculate_costs;

      cout << "Costs: ";
      cin >> purchase;

      cout << "Payment: ";
      cin >> payment;

      cout << "Rest: " << p_change(purchase, payment);
      return 0;
}

double calculate_costs(double purchase, double payment)
{
    return purchase - payment;
}
