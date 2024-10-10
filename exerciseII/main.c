#include <stdio.h>

void printMultiplesOfTwo(int *array, int length) {
    int appearances = 0;
    int firstPrint = 0;
    printf("Multiples of Two: ");
    for (int i = 0; i < length; i++) {
        if (array[i] % 2 == 0) {
            if (firstPrint) {
                printf(", ");
            }
            printf("%d ", array[i]);
            appearances++;
            firstPrint = 1;

        }
    }
    printf("[Total appearances = %d]\n", appearances);
}

void printMultiplesOfFive(int *array, int length) {
    int appearances = 0;
    int firstPrint = 0;
    printf("Multiples of Five: ");
    for (int i = 0; i < length; i++) {
        if (array[i] % 5 == 0) {
            if (firstPrint) {
                printf(", ");
            }
            printf("%d ", array[i]);
            appearances++;
            firstPrint = 1;

        }
    }
    printf("[Total appearances = %d]\n", appearances);
}

void printMultiplesOfTwoAndFive(int *array, int length) {
    int appearances = 0;
    int firstPrint = 0;
    printf("Multiples of Two and Five: ");
    for (int i = 0; i < length; i++) {
        if (array[i] % 2 == 0 && array[i] % 5 == 0) {
            if (firstPrint) {
                printf(", ");
            }
            printf("%d ", array[i]);
            appearances++;
            firstPrint = 1;

        }
    }
    printf("[Total appearances = %d]\n", appearances);
}

int main() {
    int inputs[10];
    printf("Enter 10 integers:\n");

    for (int i = 0; i < 10; i++) {
        printf("\nEnter number %d: ", i + 1);
        scanf("%d", &inputs[i]);
    }

    printMultiplesOfTwo(inputs, 10);
    printMultiplesOfFive(inputs, 10);
    printMultiplesOfTwoAndFive(inputs, 10);

    return 0;
}