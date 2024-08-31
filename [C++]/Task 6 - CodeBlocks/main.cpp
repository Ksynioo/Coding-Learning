#include <iostream>

using namespace std;

int main()
{
      double cost_brutto;
      double value;
      double cargo[5] [5] =
            {
                  {1, 3.58, 5, 10, 2},
                  {2, 9.61, 5, 25, 5},
                  {3, 8.52, 8, 18, 3},
                  {4, 10.25, 8, 36, 6},
                  {5, 6.17, 23, 4, 1}
            };

      for(int i = 0; i <=4; i++)
      {
            cost_brutto = cargo[i][1] + ((cargo[i][2]/100) * cargo[i][1]);
            value = value + (cost_brutto * cargo[i][3] * cargo[i][4]);
            cout <<"Cargo ID: " << cargo[i][0] << endl;
            cout <<"Cost brutto: " << cost_brutto << endl;
      }
      cout << "Value of the warehouse: " << value <<endl;

    return 0;
}
