#include "inventory.h"

int main() {
    vector<ProductModel> productList{
        ProductModel("Laptop", 999.99, 5),
        ProductModel("Smartphone", 499.99, 10),
        ProductModel("Tablet", 299.99, 0),
        ProductModel("Smartwatch", 199.99, 3),
    };

    Inventory inv = Inventory(productList);

    double total = inv.getTotalValue();
    string mostExpensiveProduct = inv.getHighestPriceProduct();
    bool isHeadphonesInStock = inv.isHeadphonesInStock();
    printf("Total: %.2f\n", total);
    printf("Highest price product: %s\n", mostExpensiveProduct.c_str());
    printf("Headphones in stock? %s\n", isHeadphonesInStock ? "true" : "false");
    printf("\nOrder by price:\n");
    inv.displayInventory(ORDER_BY_PRICE);
    printf("\nOrder by quantity:\n");
    inv.displayInventory(ORDER_BY_QUANTITY);
    return 0;
}