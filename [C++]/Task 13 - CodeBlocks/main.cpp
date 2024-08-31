#include <iostream>
#include <string>

using namespace std;

class Car
{
private:
      int price_netto;
      double vat;
      int extras;
      int price_brutto;

public:
      string model;
      string brand;
      int GPS;
      int Clima;

      void cost_extras(int cost)
      {
            extras = GPS + Clima;
            price_netto = cost + extras;
            price_brutto = price_netto * (1+(vat/100));
            cout << "Brand: " << brand << endl;
            cout << "Model: " << model << endl;
            cout << "Extras cost: " << extras << " $" << endl;
            cout <<"Price netto: "<< price_netto << " $" << endl;
            cout <<"Price brutto: "<< price_brutto << " $" << endl << endl;
      }

            Car();
};

Car::Car()
{
      brand;
      model;
      vat = 23;
      GPS = 0;
      Clima = 0;
}

int main()
{

      Car car001;
      car001.brand = "Audi";
      car001.model  = "S3";
      car001.cost_extras(70000);

      Car car002;
      car002.brand = "Audi";
      car002.model = "RS7";
      car002.GPS = 1500;
      car002.Clima = 1000;
      car002.cost_extras(170000);

      return 0;
}
