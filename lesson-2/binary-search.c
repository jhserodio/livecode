#include <stdio.h>

int binary_search(int arr[], int size, int target) {
  int left = 0;
  int right = size - 1;
  int i = 1;

  while (left <= right) {
    printf("iteracao %d, ", i);

    int mid = left + (right - left) / 2;

    if (arr[mid] == target) {
      return mid;
    } else if (arr[mid] < target) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
    i++;
  }

  return -1;
}

int search(int arr[], int size, int target) {
  printf("\n");
  for (int i = 0; i < size; i++) {
    printf("iteracao %d", i + 1);
    if (arr[i] == target) {
      return i;
    }
  }

  return -1;
}

int main() {

  int arr[17] = {1, 2, 3, 4, 5, 7, 8, 12, 13, 14, 15, 22, 24, 34, 45, 56, 67};

  int first_search = search(arr, 17, 67);
  int second_seach = binary_search(arr, 17, 67);

  printf("\n resultado %d, %d", first_search, second_seach);

  return 0;
}
