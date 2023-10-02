#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>


void sort(char arr[], int size) {

  for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }


}



void printArray(char arr[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%c", arr[i]);
  }
}


int main() {

  //int arr[] = { 1,2,3,4,5,6,7,8 };
  char arr[] = { 'F', 'A', 'D', 'C', 'E', 'B' };
  int size = sizeof(arr) / sizeof(arr[0]);

  sort(arr, size);
  printArray(arr, size);




  return 0;
}
