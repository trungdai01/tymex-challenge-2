#include <bits/stdc++.h>
#include "product_model.h"

using namespace std;

enum {
    ORDER_BY_PRICE = 1,
    ORDER_BY_QUANTITY = 2,
};

class Inventory {
  private:
    vector<ProductModel> productList;

  public:
    Inventory() {}
    Inventory(vector<ProductModel> productList) : productList(productList) {}
    ~Inventory() {}

    double getTotalValue();
    string getHighestPriceProduct();
    bool isHeadphonesInStock();
    void displayInventory(int);
    void sortByPrice();
    void sortByQuantity();
};