#include <iostream>
#include "productType.h"

productType::productType()
{
  productName = "";
  id = "";
  manufacturer = "";
  quantitiesInStock = 0;
  price = 0;
  discount = 0;
}

productType::productType(int q, double p, double d)
{
  productName = "";
  id = "";
  manufacturer = "";
  quantitiesInStock = q;
  price = p;
  discount = d;
}

productType::productType(string m, int q, double p, double d)
{
  productName = "";
  id = "";
  manufacturer = m;
  quantitiesInStock = q;
  price = p;
  discount = d;
}

productType::productType(string pn, string i, string m, int q, double p, double d)
{
  productName = pn;
  id = i;
  manufacturer = m;
  quantitiesInStock = q;
  price = p;
  discount = d;
}

void productType::set(string pn, string i, string m, int q, double p, double d)
{
  productName = pn;
  id = i;
  manufacturer = m;
  quantitiesInStock = q;
  price = p;
  discount = d;
}

void productType::print() const
{
  cout << "Produce Name: " << productName << endl;
  cout << "Produce Id: " << id << endl;
  cout << "Produce Manufacturer: " << manufacturer << endl;
  cout << "Quantity in stock: " << quantitiesInStock << endl;
  cout << "Price: " << price << endl;
  cout << "Discount: " << discount << endl
       << endl;
}

void productType::setQuantitiesInStock(int x)
{
  if (x < 0) {
    quantitiesInStock = 0;
  } else {
    quantitiesInStock = x;
  }
}

void productType::updateQuantitiesInStock(int x)
{
  quantitiesInStock += x;
  
  if (quantitiesInStock < 0) {
    quantitiesInStock = 0;
  }
}

int productType::getQuantitiesInStock() const
{
  return quantitiesInStock;
}

void productType::setPrice(double x)
{
  price = x;
}

double productType::getPrice() const
{
  return price;
}

void productType::setDiscount(double d)
{
  discount = d;
}

double productType::getDiscount() const
{
  return discount;
}
