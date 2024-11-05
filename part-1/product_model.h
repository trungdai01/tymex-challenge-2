#include <bits/stdc++.h>
#include <string>

using namespace std;

class ProductModel {
  private:
    string name;
    double price;
    int quantity;

  public:
    ProductModel() {}
    ProductModel(string name, double price, int quantity) : name(name), price(price), quantity(quantity) {}
    ~ProductModel() {}

    void setName(string);
    void setPrice(double);
    void setQuantity(int);

    string getName();
    double getPrice();
    int getQuantity();
};