#include <iostream>
#include <string>

using namespace std;

class Invoice {
  private:
    string partNumber, partDescription;
    int purchaseQuantity, itemPrice;
  
  
  public:
    // Setters
    void setPartNumber(string _partNumber) {
      partNumber = _partNumber;
    };
    void setPartDescription(string _partDescription) {
      partDescription = _partDescription;
    };
    void setPurchaseQuantity(int _purchaseQuantity) {
      purchaseQuantity = _purchaseQuantity;
    };
    void setItemPrice(int _itemPrice) {
      itemPrice = _itemPrice;
    };

    // Getters
    string getPartNumber() {
      return partNumber;
    };
    string getPartDescription() {
      return partDescription;
    };
    int getPurchaseQuantity() {
      return purchaseQuantity;
    };
    int getItemPrice() {
      return itemPrice;
    };

    // Invoice amount
    int getInvoiceAmount() {
      if ((purchaseQuantity < 0) || (itemPrice < 0)) {
        return 0;
      } else {
        return (purchaseQuantity * itemPrice);
      }
    }
    
    // Constructor
    Invoice(string _partNumber, string _partDescription, int _purchaseQuantity, int _itemPrice) {
      partNumber = _partNumber;
      partDescription = _partDescription;
      purchaseQuantity = _purchaseQuantity;
      itemPrice = _itemPrice;
    };
};

int main() {
  return 0;
}