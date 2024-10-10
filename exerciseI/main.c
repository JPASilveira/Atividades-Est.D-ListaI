#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define getSeed() (srand(time(NULL)))
#define getArraySize(array) (sizeof(array) / sizeof((array)[0]))  // Macro para obter o tamanho do array

int integerGenerator() {
    return rand() % 51; // Gera um número aleatório entre 0 e 50
}

void printFilterNumbers(int *array, int length) {
    int filterNumbers1 = 0;
    int filterNumbers2 = 0;
    for (int i = 0; i < length; i++) {
        if (array[i] >= 10 && array[i] <= 20) {
            filterNumbers1++;
        }
        if (array[i] >= 30) {
            filterNumbers2++;
        }
    }
    printf("\nAmount of numbers between 10 and 20: \n%d\n\nNumbers greater than 30\n%d\n", filterNumbers1, filterNumbers2);
}

void printEvenNumbers(int *array, int length) {
    printf("\nEven numbers:\n");
    int firstPrinted = 0;

    for (int i = 0; i < length; i++) {
        if (array[i] % 2 == 0) {
            if (firstPrinted) {
                printf(", ");
            }
            printf("%d", array[i]);
            firstPrinted = 1;
        }
    }
    printf("\n");
}

void printOddNumbers(int *array, int length) {
    printf("\nOdd numbers:\n");
    int firstPrinted = 0;
    for (int i = 0; i < length; i++) {
        if (array[i] % 2 != 0) {
            if (firstPrinted) {
                printf(", ");
            }
            printf("%d", array[i]);
            firstPrinted = 1;
        }
    }
}

void printArray(int *array, int length) {
    for (int i = 0; i < length; i++) {
        printf("%d", array[i]);
        if (i < length - 1) {
            printf(", ");
        }
    }
    printf("\n");
}

int main(void) {
    // Exercise 1
    getSeed();
    int numbers[12];

    // Generator: preenche o array com números aleatórios
    for (int i = 0; i < 12; i++) {
        numbers[i] = integerGenerator();
    }

    // Print numbers
    printf("Exercise1:\n==============================================\n");
    printf("Numbers list:\n");
    printArray(numbers, getArraySize(numbers));
    printFilterNumbers(numbers, getArraySize(numbers));
    printEvenNumbers(numbers, getArraySize(numbers));
    printOddNumbers(numbers, getArraySize(numbers));

    return 0;
}
