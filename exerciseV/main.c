#include <stdio.h>
#include <string.h>

void printProducts(char names[], double prices[], int productsNumber) {
    for (int i = 0; i < productsNumber; i++) {
        printf("Product: %c R$: %.2lf\n", names[i], prices[i]);
    }
}

void printProductsWithinCertainValueRange(char names[], double prices[], int productsNumber, float minPrice, float maxPrice) {
    printf("\nProducts within a certain value range (R$ %.2lf - R$ %.2lf):\n",minPrice, maxPrice);
    for (int i = 0; i < productsNumber; i++) {
        if (prices[i] > minPrice && prices[i] < maxPrice) {
            printf("Product: %c R$: %.2lf\n", names[i], prices[i]);
        }
    }
    printf("\n");
}

void printQuantityOfProductsByValue(double prices[], double filterPrice, int productsNumber) {
    int quantity = 0;
    for (int i = 0; i < productsNumber; i++) {
        if (prices[i] < filterPrice) {
            quantity++;
        }
    }
    printf("\nQuantity of products (< R$ %.2lf): %i\n", filterPrice, quantity);
}

void printAveragePriceForProductsThatExceedCertainValue(double prices[], double filterPrice, int productsNumber) {
    double total = 0.0;
    int quantity = 0;

    for (int i = 0; i < productsNumber; i++) {
        if (prices[i] > filterPrice) {
            quantity++;
            total += prices[i];
        }
    }

    printf("Average prices for products that exceed R$ %.2lf: R$ %.2lf",filterPrice,total/quantity);
}

int main() {
    const int PRODUCTS = 7;
    const double FILTER_PRICE_QUANTITY = 80.00;
    const double FILTER_MIN_PRICE = 120.00;
    const double FILTER_MAX_PRICE = 160.00;
    const double FILTER_AVERAGE_PRICE = 200.00;

    char productInitials[PRODUCTS];
    double valueProducts[PRODUCTS];
    for (int i = 0; i < PRODUCTS; i++) {
        printf("%d | Enter the initial of the product name: ",i+1);
        scanf("%s",&productInitials[i]);
        printf("%d | enter product price: ", i+1);
        scanf("%lf",&valueProducts[i]);
    }
    printProducts(productInitials, valueProducts, PRODUCTS);
    printQuantityOfProductsByValue(valueProducts, FILTER_PRICE_QUANTITY, PRODUCTS);
    printProductsWithinCertainValueRange(productInitials, valueProducts, PRODUCTS, FILTER_MIN_PRICE, FILTER_MAX_PRICE);
    printAveragePriceForProductsThatExceedCertainValue(valueProducts, FILTER_AVERAGE_PRICE, PRODUCTS);

}
