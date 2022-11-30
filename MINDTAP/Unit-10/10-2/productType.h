#include <string>

using namespace std;

class productType
{
public:
  productType();
  productType(int, double, double);
  productType(string, int, double, double);
  productType(string, string, string,
              int, double, double);

  void set(string, string, string, int,
           double, double);
  void print() const;

  void setQuantitiesInStock(int x);
  void updateQuantitiesInStock(int x);
  int getQuantitiesInStock() const;

  void setPrice(double x);
  double getPrice() const;
  void setDiscount(double d);
  double getDiscount() const;

private:
  string productName;
  string id;
  string manufacturer;
  int quantitiesInStock;
  double price;
  double discount;
};
