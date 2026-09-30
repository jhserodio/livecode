#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int arr[], int n) {
  for (int i = 0; i < n - i - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }

  // print
  for (int i = 0; i < n - 1; i++) {
    printf("%d - ", arr[i]);
  }
}

int main() {
  int lista[10] = {1, 4, 2, 9, 3, 7, 5, 13, 11, 10};

  bubble_sort(lista, 10);
}
