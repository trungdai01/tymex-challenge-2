#include "product_model.h"

void ProductModel::setName(string name) {
    this->name = name;
}
void ProductModel::setPrice(double price) {
    this->price = price;
}
void ProductModel::setQuantity(int quantity) {
    this->quantity = quantity;
}
string ProductModel::getName() {
    return this->name;
}
double ProductModel::getPrice() {
    return this->price;
}
int ProductModel::getQuantity() {
    return this->quantity;
}