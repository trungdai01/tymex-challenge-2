#include "inventory.h"

double Inventory::getTotalValue() {
    double sum = 0;
    for (auto product : productList) {
        sum += product.getPrice() * product.getQuantity();
    }
    return sum;
}

string Inventory::getHighestPriceProduct() {
    ProductModel expensiveProduct = productList[0];
    for (auto product : productList) {
        if (product.getPrice() >= expensiveProduct.getPrice()) {
            swap(product, expensiveProduct);
        }
    }
    return expensiveProduct.getName();
}

bool Inventory::isHeadphonesInStock() {
    for (auto product : productList) {
        if (product.getName() == "Headphones") {
            return true;
        }
    }
    return false;
}

void Inventory::sortByPrice() {
    int small;
    for (int start = 0; start < productList.size(); start++) {
        small = start;
        for (int next = start + 1; next < productList.size(); next++) {
            if (productList[next].getPrice() < productList[small].getPrice()) {
                small = next;
            }
        }
        swap(productList[small], productList[start]);
    }
}

void Inventory::sortByQuantity() {
    int small;
    for (int start = 0; start < productList.size(); start++) {
        small = start;
        for (int next = start + 1; next < productList.size(); next++) {
            if (productList[next].getQuantity() < productList[small].getQuantity()) {
                small = next;
            }
        }
        swap(productList[small], productList[start]);
    }
}

void Inventory::displayInventory(int option) {
    if (option == ORDER_BY_PRICE) {
        sortByPrice();
    } else if (option == ORDER_BY_QUANTITY) {
        sortByQuantity();
    }
    printf("Product List:\n");
    for (auto product : productList) {
        printf("%s: price %.2f, quantity %d\n", product.getName().c_str(), product.getPrice(), product.getQuantity());
    }
}