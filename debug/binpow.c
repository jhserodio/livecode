#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool is_sorted(const int *array, int size) {
  for (int i = 1; i < size; i++) {
    if (array[i - 1] > array[i]) {
      return false;
    }
  }

  return true;
}

int binary_search(const int *array, int size, int target) {
  int left = 0;
  int right = size - 1;

  while (left <= right) {
    int mid = left + (right - left) / 2;

    if (array[mid] > target) {
      right = mid - 1;
    } else if (array[mid] < target) {
      left = mid + 1;
    } else {
      return mid;
    }
  }

  return -1;
}

int main(void) {
  int size;

  printf("Enter with Array Size: ");
  fflush(stdout);

  if (scanf("%d", &size) != 1 || size <= 0) {
    fprintf(stderr, "Invalid size.\n");
    return EXIT_FAILURE;
  }

  int *array = malloc((size_t)size * sizeof *array);

  if (array == NULL) {
    fprintf(stderr, "Failure to allocate memory.\n");
    return EXIT_FAILURE;
  }

  printf("Enter %d sorted elements: ", size);
  fflush(stdout);

  for (int i = 0; i < size; i++) {
    if (scanf("%d", &array[i]) != 1) {
      fprintf(stderr, "Invalid input.\n");
      free(array);
      return EXIT_FAILURE;
    }
  }

  if (!is_sorted(array, size)) {
    fprintf(stderr, "The array must be sorted.\n");
    free(array);
    return EXIT_FAILURE;
  }

  int target;
  printf("Target: ");
  fflush(stdout);

  if (scanf("%d", &target) != 1) {
    fprintf(stderr, "Invalid input.\n");
    free(array);
    return EXIT_FAILURE;
  }

  int index = binary_search(array, size, target);

  if (index >= 0) {
    printf("Value %d found at index %d.\n", target, index);
  } else {
    printf("Value %d not found.\n", target);
  }

  free(array);
  return EXIT_SUCCESS;
}
