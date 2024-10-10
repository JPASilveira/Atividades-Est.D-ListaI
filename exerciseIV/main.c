#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define getSeed() (srand(time(NULL)))

int getRandomInt(int min, int max) {
    return rand() % (max - min + 1) + min;
}

int getLargestElement(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i != size - 1) {
            printf(", ");
        }
    }
    printf("\n");
}

void printMultiplyArray(int arr[], int size, int multiplier) {
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i] * multiplier);
        if (i != size - 1) {
            printf(", ");
        }
    }
    printf("\n");
}

    int main() {
        getSeed();
        int numbers[10];

        for (int i = 0; i < 10; i++) {
            numbers[i] = getRandomInt(0, 100);
        }

    printf("Random vector:\n");
    printArray(numbers, 10);
    printf("\n");
    printf("Largest element: %d\n", getLargestElement(numbers, 10));
    printf("\n");
    printf("Vector multiplied by the largest element:\n");
    printMultiplyArray(numbers, 10, getLargestElement(numbers, 10));

}