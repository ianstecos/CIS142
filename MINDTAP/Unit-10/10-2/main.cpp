#include "productType.h"

int main()
{
  productType product("Cerelac", "XYYY-2333", "Nestle", 1002, 23.2, 1.4);
  product.print();

  product.setQuantitiesInStock(10);
  product.print();

  product.setDiscount(12);
  product.print();
}
