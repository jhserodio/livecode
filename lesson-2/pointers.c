#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int x;
  int y;
} P;

int main() {
  int dynamic_size = 5;

  int *dynamic_vector = (int *)malloc(dynamic_size * sizeof(int));

  P *dynamic_pointers = (P *)malloc(dynamic_size * sizeof(P));

  free(dynamic_vector);
  free(dynamic_pointers);
}
