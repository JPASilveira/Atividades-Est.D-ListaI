#include <stdio.h>

void printLargestElement(int arr[], int size) {
  int largest = arr[0];
  int position = 0;

  for (int i = 0; i < size; i++) {
    if (arr[i] > largest) {
      largest = arr[i];
      position = i;
    }
  }
  printf("The largest element is: %d  [position: %d]\n", largest, position);
}

void printSmallestElement(int arr[], int size) {
  int minor = arr[0];
  int position = 0;

  for (int i = 0; i < size; i++) {
    if (arr[i] < minor) {
      minor = arr[i];
      position = i;
    }
  }
  printf("The smallest element is: %d  [position: %d]\n", minor, position);
}

int main() {
  int numbers[12];
  printf("Enter numbers: \n");

  for(int i = 0; i < 12; i++){
    printf("Enter number %d: ", i+1);
    scanf("%d", &numbers[i]);
  }

  printLargestElement(numbers, 12);
  printSmallestElement(numbers, 12);
  return 0;
}
