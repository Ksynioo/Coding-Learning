#include <iostream>
#include <string>

using namespace std;

class bookstore
{
    double price_brutto;
    double position_value;
    double vat;
    static double sum;
    static int counter;

    public:
    string title;
    double price_netto;
    int quantity;


        void shopping()
        {
            counter++;
            price_brutto = price_netto * (1+(vat/100));
            position_value = price_brutto * quantity;
            cout << "Position nr " << counter << ": " << title << "\n cost : " << price_brutto << "\n quantity : " << quantity << endl;
            cout << "Position value : " << position_value << " $ \n";
            sum = sum + position_value;
            cout << "-------------------------\n";
            cout << "Total: " << sum << " zl \n\n\n";
        }

    bookstore()
    {
        vat = 23;
    }

};

double bookstore::sum = 0;
int bookstore::counter = 0;

int main()
{
    bookstore book001;
    book001.title = "The Lord of the rings";
    book001.price_netto = 123.25;
    book001.quantity = 3;
    book001.shopping();

    bookstore book002;
    book002.title = "Hobbit";
    book002.price_netto = 18.97;
    book002.quantity = 2;
    book002.shopping();

    bookstore book003;
    book003.title = "Trilogy";
    book003.price_netto = 74.19;
    book003.quantity = 8;
    book003.shopping();

    return 0;
}
