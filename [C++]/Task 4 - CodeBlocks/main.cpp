#include <iostream>

using namespace std;

int main()
{
    string table[5] = {"Milk", "Chocolate", "Ice Tea", "Water", "Book"};
    double table2[5] = {4.99, 9.99, 2.59, 0.99, 40.99};
    int product_id;

    cout << "Which product do you want? [1, 2, 3, 4]: ";

    cin >> product_id;
    cout << "You've choosen: " <<table[product_id-1] << " and it costs: $" << table2[product_id-1];

    return 0;
}
